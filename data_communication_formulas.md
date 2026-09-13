# Data Communication Fundamentals: Equations, Formulas, Context, and Solved Examples

This comprehensive guide organizes all equations, mathematical formulas, theoretical limits, and performance metrics covered in data communication fundamentals. Each section provides the exact formula, variable definitions, underlying context, and worked step-by-step math examples.

---

## Table of Contents
1. [Signal Strength, Attenuation, and Decibels (dB)](#1-signal-strength-attenuation-and-decibels-db)
2. [Signal-to-Noise Ratio (SNR & SNR_dB)](#2-signal-to-noise-ratio-snr--snr_db)
3. [Data Rate Limits & Channel Capacity](#3-data-rate-limits--channel-capacity)
4. [Bit Rate for Digitized Audio and Video](#4-bit-rate-for-digitized-audio-and-video)
5. [Bit Rate vs. Baud Rate & Line Coding Schemes](#5-bit-rate-vs-baud-rate--line-coding-schemes)
6. [Analog Transmission & Digital Modulation (ASK, FSK, PSK)](#6-analog-transmission--digital-modulation-ask-fsk-psk)
7. [Network Performance: Throughput, Latency, and Clock Error](#7-network-performance-throughput-latency-and-clock-error)

---

## 1. Signal Strength, Attenuation, and Decibels (dB)

### 1.1 Decibel Power Ratio
**Formula:**
$$\text{dB} = 10 \log_{10}\left(\frac{P_2}{P_1}\right)$$

**Context & Explanation:**
When an electrical or optical signal travels through a transmission medium, it loses energy due to resistance (converted into heat) [5, 6]. This phenomenon is called **attenuation** [5, 6]. To quantify loss or gain of signal strength across two points (Point 1 and Point 2), the **decibel (dB)** is used [6]. 
- **$P_1$**: Signal power at Point 1 (input/transmitter).
- **$P_2$**: Signal power at Point 2 (output/receiver).
- **Negative dB**: Signal attenuation (power loss) [6].
- **Positive dB**: Signal amplification (power gain) [6].

#### Worked Math Examples:
* **Example 1 (Half Power Loss):**
  Suppose a signal travels through a medium and its power is reduced to half ($P_2 = 0.5 P_1$) [6].
  $$\text{dB} = 10 \log_{10}\left(\frac{0.5 P_1}{P_1}\right) = 10 \log_{10}(0.5) = 10(-0.301) \approx -3\text{ dB}$$
  *Result:* A $3\text{ dB}$ loss corresponds to cutting signal power in half [6].

* **Example 2 (Cable Loss over Distance):**
  A cable has an attenuation rating of $-0.3\text{ dB/km}$ [7]. If the initial power at the start of a $5\text{ km}$ cable is $P_1 = 2\text{ mW}$, calculate the output power $P_2$ [7].
  1. *Total loss in dB:* 
     $$\text{Total dB} = 5\text{ km} \times (-0.3\text{ dB/km}) = -1.5\text{ dB}$$
  2. *Calculate power ratio:*
     $$-1.5 = 10 \log_{10}\left(\frac{P_2}{P_1}\right) \implies \log_{10}\left(\frac{P_2}{P_1}\right) = -0.15$$
     $$\frac{P_2}{P_1} = 10^{-0.15} \approx 0.71$$
  3. *Calculate output power $P_2$:*
     $$P_2 = 0.71 \times P_1 = 0.71 \times 2\text{ mW} = 1.4\text{ mW}$$

---

## 2. Signal-to-Noise Ratio (SNR & SNR_dB)

### 2.1 Linear SNR and Decibel SNR ($\text{SNR}_{\text{dB}}$)
**Formulas:**
$$\text{SNR} = \frac{\text{Signal Power}}{\text{Noise Power}}$$

$$\text{SNR}_{\text{dB}} = 10 \log_{10}(\text{SNR})$$

$$\text{SNR} = 10^{\left(\frac{\text{SNR}_{\text{dB}}}{10}\right)}$$

**Context & Explanation:**
Noise (thermal, induced, crosstalk, or impulse) corrupts transmitted signals [7, 8]. The **Signal-to-Noise Ratio (SNR)** evaluates channel quality by comparing the level of desired signal power to background noise power [8]. A higher SNR indicates a cleaner channel capable of higher data transfer rates [8].

#### Worked Math Examples:
* **Example 1 (Calculating SNR and $\text{SNR}_{\text{dB}}$):**
  A signal has a power of $10\text{ mW}$ ($10,000\,\mu\text{W}$) and the background noise power is $1\,\mu\text{W}$ [8].
  $$\text{SNR} = \frac{10,000\,\mu\text{W}}{1\,\mu\text{W}} = 10,000$$
  $$\text{SNR}_{\text{dB}} = 10 \log_{10}(10,000) = 10 \log_{10}(10^4) = 10 \times 4 = 40\text{ dB}$$

* **Example 2 (Noiseless Ideal Channel):**
  In a theoretical noiseless channel, noise power is $0$ [8].
  $$\text{SNR} = \frac{\text{Signal Power}}{0} = \infty \implies \text{SNR}_{\text{dB}} = 10 \log_{10}(\infty) = \infty$$
  *Note:* Perfect noiseless channels cannot be achieved in reality [8].

---

## 3. Data Rate Limits & Channel Capacity

The maximum achievable transmission speed (data rate in bits per second) over a physical communication channel depends on three key factors [8, 9]:
1. Available bandwidth ($B$) [9]
2. Number of signal levels used ($L$) [9]
3. Channel quality / noise level ($\text{SNR}$) [9]

### 3.1 Bits per Signal Level
**Formula:**
$$r = \log_2(L) \quad \iff \quad L = 2^r$$

**Context & Explanation:**
- **$L$**: Number of discrete voltage/signal levels used [9].
- **$r$**: Number of bits represented by each signal level [3].
- Since digital systems use binary, $L$ must be an integer power of $2$ [3].

#### Worked Math Example:
* **8 Signal Levels:** If a digital signal uses $L = 8$ voltage levels, bits per level $r = \log_2(8) = 3\text{ bits/level}$ [31].
* **9 Signal Levels (Non-integer case):** $r = \log_2(9) \approx 3.17\text{ bits}$ [3]. Since fractional bits cannot be transmitted, we round up to $4\text{ bits}$ per level (which requires $L = 2^4 = 16$ levels) [3].

---

### 3.2 Nyquist Bit Rate Formula (Noiseless Channel)
**Formula:**
$$C = 2 \times B \times \log_2(L)$$

**Context & Explanation:**
Developed by Harry Nyquist, this formula defines the theoretical upper limit on bit rate $C$ (in bps) for a **noiseless channel** [9].
- **$C$**: Channel capacity / bit rate (bps) [9, 10].
- **$B$**: Channel bandwidth (Hz) [9, 10].
- **$L$**: Number of signal levels [9, 10].

#### Worked Math Examples:
* **Example 1 (Effect of Signal Levels):**
  Consider a noiseless channel with bandwidth $B = 3000\text{ Hz}$ [10].
  1. *Binary signal ($L = 2$ levels):*
     $$\text{Bit Rate} = 2 \times 3000 \times \log_2(2) = 6000\text{ bps} = 6\text{ kbps}$$
  2. *Multilevel signal ($L = 4$ levels, $2\text{ bits/level}$):*
     $$\text{Bit Rate} = 2 \times 3000 \times \log_2(4) = 2 \times 3000 \times 2 = 12,000\text{ bps} = 12\text{ kbps}$$

* **Example 2 (Finding Required Signal Levels):**
  We need to send $265\text{ kbps}$ ($265,000\text{ bps}$) over a noiseless channel with $B = 20\text{ kHz}$ ($20,000\text{ Hz}$) [10]. How many signal levels $L$ are required [10]?
  $$265,000 = 2 \times 20,000 \times \log_2(L)$$
  $$265,000 = 40,000 \times \log_2(L) \implies \log_2(L) = 6.625$$
  $$L = 2^{6.625} \approx 98.7\text{ levels}$$
  Since $L$ must be a power of $2$ [11]:
  - If we select $L = 128$ ($2^7$): $\text{Bit Rate} = 2 \times 20,000 \times 7 = 280\text{ kbps}$ (meets requirement) [11].
  - If we select $L = 64$ ($2^6$): $\text{Bit Rate} = 2 \times 20,000 \times 6 = 240\text{ kbps}$ (below requirement) [11].

---

### 3.3 Shannon Capacity Formula (Noisy Channel)
**Formula:**
$$C = B \times \log_2(1 + \text{SNR})$$

**Context & Explanation:**
Developed by Claude Shannon, this formula calculates the theoretical maximum bit rate $C$ (in bps) for a real-world **noisy channel** regardless of how many signal levels are used [11, 12].
- **$C$**: Theoretical channel capacity (bps) [11, 12].
- **$B$**: Bandwidth of the channel (Hz) [11, 12].
- **$\text{SNR}$**: Linear signal-to-noise ratio [11, 12].

#### Worked Math Examples:
* **Example 1 (Extreme Noise):**
  For an extremely noisy channel where $\text{SNR} \approx 0$ [12]:
  $$C = B \times \log_2(1 + 0) = B \times \log_2(1) = B \times 0 = 0\text{ bps}$$
  *Result:* When noise dominates, capacity drops to zero regardless of bandwidth [12].

* **Example 2 (Telephone Line Capacity):**
  A standard telephone line has $B = 3000\text{ Hz}$ and typical $\text{SNR} = 3162$ [12].
  $$C = 3000 \times \log_2(1 + 3162) = 3000 \times \log_2(3163)$$
  $$C \approx 3000 \times 11.625 = 34,860\text{ bps} \approx 34.86\text{ kbps}$$

* **Example 3 (Converting $\text{SNR}_{\text{dB}}$ to Capacity):**
  A channel has bandwidth $B = 2\text{ MHz}$ ($2 \times 10^6\text{ Hz}$) and $\text{SNR}_{\text{dB}} = 36\text{ dB}$ [13].
  1. *Convert $\text{SNR}_{\text{dB}}$ to linear $\text{SNR}$:*
     $$\text{SNR} = 10^{36/10} = 10^{3.6} \approx 3981$$
  2. *Calculate capacity $C$:*
     $$C = 2 \times 10^6 \times \log_2(1 + 3981) = 2 \times 10^6 \times \log_2(3982)$$
     $$C \approx 2 \times 10^6 \times 11.959 \approx 24,000,000\text{ bps} = 24\text{ Mbps}$$

---

### 3.4 Practical Design: Combining Shannon and Nyquist
**Context:**
Shannon's formula sets the absolute upper performance bound for a noisy channel [14]. To design a practical system, we choose a target bit rate below Shannon's limit and then use Nyquist's formula to determine how many signal levels $L$ are needed to achieve that target [14].

#### Worked Math Example:
Channel bandwidth $B = 1\text{ MHz}$ ($10^6\text{ Hz}$) with $\text{SNR} = 63$ [13, 14].
1. *Find Shannon Upper Limit:*
   $$C = 10^6 \times \log_2(1 + 63) = 10^6 \times \log_2(64) = 10^6 \times 6 = 6\text{ Mbps}$$
2. *Choose Operating Rate & Calculate Required Signal Levels $L$:*
   To operate reliably below $6\text{ Mbps}$, set target rate to $4\text{ Mbps}$ [14]. Apply Nyquist:
   $$4\text{ Mbps} = 2 \times 1\text{ MHz} \times \log_2(L)$$
   $$4 \times 10^6 = 2 \times 10^6 \times \log_2(L) \implies \log_2(L) = 2 \implies L = 2^2 = 4\text{ levels}$$

---

## 4. Bit Rate for Digitized Audio and Video

### 4.1 Digitized Audio Bit Rate (PCM Sampling)
**Formula:**
$$\text{Bit Rate (Audio)} = 2 \times f_{\text{max}} \times \text{bits per sample}$$

**Context & Explanation:**
To digitize analog voice/audio, the signal is sampled at twice its maximum frequency $f_{\text{max}}$ (Nyquist sampling rate) [4].

#### Worked Math Example:
A voice channel with bandwidth $B = 4\text{ kHz}$ ($4000\text{ Hz}$) is sampled at twice the highest frequency with $8\text{ bits/sample}$ [4].
$$\text{Sampling Rate} = 2 \times 4000 = 8000\text{ samples/sec}$$
$$\text{Bit Rate} = 8000 \times 8 = 64,000\text{ bps} = 64\text{ kbps}$$

---

### 4.2 High-Definition Video Bit Rate
**Formula:**
$$\text{Bit Rate (Video)} = (\text{Width} \times \text{Height}) \times \text{Frame Rate (fps)} \times \text{Color Depth (bits/pixel)}$$

#### Worked Math Example:
High-Definition TV (HDTV) uses $1920 \times 1080$ pixel resolution, $30\text{ frames per second}$, and $24\text{ bits per pixel}$ [4].
$$\text{Uncompressed Bit Rate} = 1920 \times 1080 \times 30 \times 24 = 1,492,992,000\text{ bps} \approx 1.5\text{ Gbps}$$
*(Note: Compression algorithms typically reduce this transmission rate to $20\text{--}40\text{ Mbps}$ [4]).*

---

## 5. Bit Rate vs. Baud Rate & Line Coding Schemes

### 5.1 General Baud Rate Formula
**Formulas:**
$$S = N \times \frac{1}{r} \quad \implies \quad N = S \times r$$

$$S_{\text{avg}} = c \times N \times \frac{1}{r}$$

**Context & Explanation:**
- **$N$**: Bit rate (data rate in bps) — speed of bit transmission [15, 23].
- **$S$**: Baud rate (signal rate in baud/signal elements per second) [21, 23].
- **$r$**: Data elements carried per signal element ($r = \log_2 L$) [23].
- **$c$**: Case factor (ranges between $0$ and $1$, typically $c = 1/2$ for average case) [21].

#### Worked Math Examples:
* **Example 1 (Average Baud Rate in Line Coding):**
  Bit rate $N = 100\text{ kbps}$, each data element encoded as one signal element ($r = 1$), case factor $c = 1/2$ [21].
  $$S = \frac{1}{2} \times 100,000 \times \frac{1}{1} = 50,000\text{ baud} = 50\text{ kbaud}$$

* **Example 2 (Finding Bit Rate from Baud Rate):**
  An analog signal carries $r = 4\text{ bits/signal element}$. If $S = 1000\text{ signal elements/sec}$ ($1000\text{ baud}$), find bit rate $N$ [23].
  $$N = S \times r = 1000 \times 4 = 4000\text{ bps}$$

* **Example 3 (Finding Required Signal Levels):**
  Bit rate $N = 8000\text{ bps}$, baud rate $S = 1000\text{ baud}$ [23, 24].
  1. *Find $r$:* 
     $$r = \frac{N}{S} = \frac{8000}{1000} = 8\text{ bits/baud}$$
  2. *Find signal levels $L$:*
     $$L = 2^r = 2^8 = 256\text{ signal levels}$$

---

### 5.2 Summary of Line Coding Scheme Bandwidths

Different digital-to-digital line coding schemes require different average bandwidths $B$ as a function of data rate $N$ [43]:

| Category | Scheme | Average Bandwidth ($B$) | Key Characteristics [43] |
| :--- | :--- | :--- | :--- |
| **Unipolar** | NRZ | $B = N / 2$ | Costly, DC component, no self-synchronization [43] |
| **Polar** | NRZ-L | $B = N / 2$ | DC component, no self-synchronization for long 0s/1s [38, 43] |
| **Polar** | NRZ-I | $B = N / 2$ | DC component, no self-synchronization for long 0s [39, 43] |
| **Polar** | Biphase (Manchester / Diff. Manchester) | $B = N$ | Self-synchronization, no DC, higher bandwidth [39, 40, 43] |
| **Bipolar** | AMI / Pseudoternary | $B = N / 2$ | Alternate 1s inverted, no DC, no self-sync for long 0s [40, 43] |
| **Multilevel** | 2B1Q | $B = N / 4$ | $m=2, n=1, L=4$, high density [41, 43] |
| **Multilevel** | 8B6T | $B = 3N / 4$ | 8 bits encoded as 6 ternary elements [41, 43] |
| **Multilevel** | 4D-PAM5 | $B = N / 8$ | 4 wire pairs, 5 voltage levels [42, 43] |
| **Multitransition**| MLT-3 | $B = N / 3$ | 3 voltage levels (+V, 0, -V) [42, 43] |

---

## 6. Analog Transmission & Digital Modulation (ASK, FSK, PSK)

### 6.1 Amplitude Shift Keying (ASK) and Phase Shift Keying (PSK) Bandwidth
**Formula:**
$$\text{BW} = (1 + d) \times S = (1 + d) \times N \times \frac{1}{r}$$

**Context & Explanation:**
- **$\text{BW}$**: Required minimum bandwidth for modulated analog transmission [24].
- **$d$**: Modulation factor related to filtering ($d \ge 0$) [24].
- **$S$**: Baud rate [24].
- Minimum bandwidth occurs when $d = 0$, making $\text{BW}_{\text{min}} = S$ [24].

#### Worked Math Example:
Available bandwidth $\text{BW} = 100\text{ kHz}$ (spanning $200\text{ to }300\text{ kHz}$) [24, 25]. Modulated using ASK with $d = 1$ and $r = 1$ [24, 25].
1. *Carrier frequency $f_c$:* Middle of band $= 250\text{ kHz}$ [25].
2. *Find max bit rate $N$:*
   $$\text{BW} = (1 + d) \times S \implies 100\text{ kHz} = (1 + 1) \times N \times \frac{1}{1}$$
   $$100\text{ kHz} = 2 N \implies N = 50\text{ kbps}$$

---

### 6.2 Frequency Shift Keying (FSK / M-FSK) Bandwidth
**Formula:**
$$\text{BW} = L \times S = (1 + d) \times S + 2\Delta f$$

**Context & Explanation:**
FSK allocates different carrier frequencies for different data values [25, 26]. For $L$-level FSK (M-FSK), $L$ signal frequencies spaced $2\Delta f$ apart are required [26].

#### Worked Math Example:
We send data $3\text{ bits at a time}$ ($r = 3$) at a bit rate $N = 3\text{ Mbps}$ with carrier frequency $f_c = 10\text{ MHz}$ [26].
1. *Number of signal levels $L$:*
   $$L = 2^r = 2^3 = 8\text{ frequencies}$$
2. *Baud rate $S$:*
   $$S = \frac{N}{r} = \frac{3\text{ Mbps}}{3} = 1\text{ Mbaud} = 1000\text{ kbaud}$$
3. *Carrier spacing & total bandwidth $\text{BW}$:*
   Frequency separation $2\Delta f = 1\text{ MHz}$ [26].
   $$\text{BW} = L \times S = 8 \times 1\text{ Mbaud} = 8\text{ MHz}$$

---

## 7. Network Performance: Throughput, Latency, and Clock Error

### 7.1 Throughput
**Formula:**
$$\text{Throughput} = \text{frames per second} \times \text{bits per frame} = \frac{\text{Total bits delivered}}{\text{Time (seconds)}}$$

**Context & Explanation:**
While **bandwidth** is the potential maximum rate of a channel, **throughput** is the actual measured speed of successful data delivery over the link [14, 16].

#### Worked Math Example:
A network with bandwidth $10\text{ Mbps}$ passes an average of $12,000\text{ frames per minute}$, with each frame carrying $10,000\text{ bits}$ [16].
$$\text{Frames per second} = \frac{12,000}{60\text{ s}} = 200\text{ fps}$$
$$\text{Throughput} = \frac{12,000 \times 10,000}{60\text{ s}} = 2,000,000\text{ bps} = 2\text{ Mbps}$$
*(Note: Actual throughput here is only $1/5$ of available bandwidth [16]).*

---

### 7.2 Latency (Total Delay)
**Formulas:**
$$\text{Latency} = \text{Propagation Time} + \text{Transmission Time} + \text{Queuing Time} + \text{Processing Delay}$$

$$\text{Propagation Time} = \frac{\text{Distance (m)}}{\text{Propagation Speed (m/s)}}$$

$$\text{Transmission Time} = \frac{\text{Data Size (bits)}}{\text{Bandwidth (bps)}}$$

**Context & Explanation:**
- **Propagation Time**: Time for a single bit to travel across the physical distance of the medium [17].
- **Transmission Time**: Time required to push all message bits onto the transmission medium [17].

#### Worked Math Examples:
* **Example 1 (Propagation Time over Atlantic Cable):**
  Distance $= 12,000\text{ km}$ ($12 \times 10^6\text{ m}$), propagation speed in cable $= 2.4 \times 10^8\text{ m/s}$ [17, 18].
  $$\text{Propagation Time} = \frac{12,000 \times 1000\text{ m}}{2.4 \times 10^8\text{ m/s}} = \frac{1.2 \times 10^7}{2.4 \times 10^8} = 0.05\text{ s} = 50\text{ ms}$$

* **Example 2 (Dominant Propagation Delay - Short Message):**
  Transmit $2.5\text{ KB}$ message ($2500 \times 8 = 20,000\text{ bits}$) over $12,000\text{ km}$ link with $1\text{ Gbps}$ ($10^9\text{ bps}$) bandwidth [18].
  $$\text{Propagation Time} = 50\text{ ms}$$
  $$\text{Transmission Time} = \frac{2500 \times 8\text{ bits}}{10^9\text{ bps}} = \frac{20,000}{10^9} = 0.00002\text{ s} = 0.020\text{ ms}$$
  *Key Insight:* For small messages over high-bandwidth links, propagation delay dominates ($50\text{ ms}$ vs $0.02\text{ ms}$) [19].

* **Example 3 (Dominant Transmission Delay - Large File):**
  Transmit $5\text{ MB}$ image ($5,000,000 \times 8 = 40,000,000\text{ bits}$) over $12,000\text{ km}$ link with $1\text{ Mbps}$ ($10^6\text{ bps}$) bandwidth [19].
  $$\text{Propagation Time} = 50\text{ ms} = 0.05\text{ s}$$
  $$\text{Transmission Time} = \frac{5,000,000 \times 8\text{ bits}}{10^6\text{ bps}} = 40\text{ seconds}$$
  *Key Insight:* For large files over low-bandwidth links, transmission time dominates ($40\text{ s}$ vs $0.05\text{ s}$) [20].

---

### 7.3 Receiver Clock Synchronization Error
**Formula:**
$$\text{Extra Received Bits/sec} = \text{Data Rate (bps)} \times \text{Clock Drift Percentage}$$

**Context & Explanation:**
If the receiver clock runs faster or slower than the sender clock, the receiver samples bits at incorrect time intervals, resulting in extra or missing bits [22].

#### Worked Math Example:
Receiver clock is $0.1\%$ ($0.001$) faster than the sender clock [22].
* **At $1\text{ kbps}$ ($1000\text{ bps}$):**
  $$\text{Extra bits} = 1000 \times 0.001 = 1\text{ extra bps} \implies 1001\text{ bits received/sec}$$
* **At $1\text{ Mbps}$ ($1,000,000\text{ bps}$):**
  $$\text{Extra bits} = 1,000,000 \times 0.001 = 1000\text{ extra bps} \implies 1,001,000\text{ bits received/sec}$$

---

*Compiled and grounded directly from "Overview of Data Communication Fundamentals" (`DOC.pdf`).*
