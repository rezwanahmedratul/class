# 📘 Ultimate Exam Study Guide: Fundamentals of System Analysis & Design

Welcome to your comprehensive, simplified, and easy-to-memorize study guide! This document covers all the essential concepts across your 4 core lectures. It uses plain language, clear examples, and structured tables to help you ace your exam today.

---

## 📌 Exam Study Index
*Click on any topic to jump directly to it!*

1. **[Lecture 1: Introduction to System Analysis & Design](#-lecture-1-introduction-to-system-analysis--design)**
   - [What is a System?](#what-is-a-system)
   - [System Classifications (Physical/Abstract, Open/Closed)](#system-classifications)
   - [Man-Made & Computer-Based Systems](#man-made--computer-based-systems)
   - [Information Systems (TPS, MIS, DSS)](#three-types-of-information-systems-is)
   - [SDLC, Analysis, Software Engineering, Design](#key-definitions-to-memorize)
   - [Logical vs. Physical Design](#logical-design-vs-physical-design)
   - [The System Analyst (Roles, Skills, Types)](#the-system-analyst)
2. **[Lecture 2: System Development Methodologies](#-lecture-2-system-development-methodologies)**
   - [SDLC Phases in Detail](#sdlc-phases-in-detail)
   - [SDLC Pros & Cons](#sdlc-pros--cons)
   - [Traditional SDLC Models (Waterfall, V-Model, Prototyping, Incremental, Iterative, Spiral)](#traditional-development-models)
   - [Contemporary SDLC Models (Agile, DevOps, RAD, XP, RUP)](#contemporary-development-models)
   - [Traditional vs. Contemporary Methodologies](#traditional-vs-contemporary-comparison)
3. **[Lecture 3: Requirement Gathering Approaches](#-lecture-3-requirement-gathering-approaches)**
   - [What is a Requirement? (Business, User, Functional, Non-Functional)](#what-is-a-requirement)
   - [Requirement Elicitation Techniques](#requirement-elicitation-techniques)
   - [Elicitation Techniques Comparison](#comparison-of-elicitation-techniques)
   - [Requirement Analysis Strategies](#requirement-analysis-strategies)
4. **[Lecture 4: Requirement Analysis & Engineering](#-lecture-4-requirement-analysis--engineering)**
   - [Activities & Importance of Requirement Analysis](#activities--importance)
   - [Requirement Engineering Phases (Inception to Management)](#requirement-engineering-phases)
   - [Domain Analysis & Data Modeling](#domain-analysis--data-modeling)
   - [Class Categorization (Boundary, Entity, Control)](#class-categorization-object-oriented)
   - [CRC Cards (Class Responsibility Collaboration)](#crc-cards-class-responsibility-collaboration)
   - [Requirement Negotiation, Validation, & Baselining](#negotiation-validation--baselining)
   - [Requirement Traceability Matrix (RTM)](#requirement-traceability-matrix-rtm)

---

## 📂 Lecture 1: Introduction to System Analysis & Design

### What is a System?
A **System** is a collection of connected parts that work together in a structured way to perform a specific task. It takes **inputs**, processes them, and produces **outputs** (like materials, energy, or information).

* **Example:** A **School System**. 
  * *Inputs:* Students, teachers, and textbooks.
  * *Processing:* Lectures, exams, and studying.
  * *Outputs:* Educated graduates with degrees.

---

### System Classifications

Systems are grouped into different types based on how they behave and what they are made of:

| System Type | Simple Definition | Key Characteristics | Real-Life Example |
| :--- | :--- | :--- | :--- |
| **Physical System** | Real, tangible things you can touch and feel. | Can be static (unchanging, like furniture) or dynamic (changing, like active data on a computer). | **Hospital Management System:** Involves actual doctors, nurses, physical computers, and patient paper files. |
| **Abstract System** | Concept-based; exists only as ideas, formulas, or models. | No physical parts are directly touched, though it uses data and logic. | **Inventory Management Algorithm:** A mathematical formula that calculates when to reorder stock. |
| **Open System** | A system that actively interacts with its surroundings. | Takes inputs from outside, sends outputs out, and adapts to changes in the environment. | **A Computer Connected to the Internet:** It downloads updates, receives user commands, and sends emails. |
| **Closed System** | A system that does not interact with its environment. | Exists in isolation (conceptually) and does not adapt to outside changes. | **A Winding Mechanical Clock:** Once wound up, it runs completely on its own internal gears without outside help. |

---

### Man-Made & Computer-Based Systems

* **Man-Made Information Systems:** Managed file structures and data inside organizations to produce reports.
  * *Formal:* Highly structured. Information flows from top management down to lower staff with official feedback loops (e.g., official corporate policies).
  * *Informal:* Unstructured and employee-driven. Employees collaborate casually to solve day-to-day problems (e.g., workers using a group chat to help each other with a task).
* **Computer-Based Systems:** Systems built on three key elements working together:
  1. **Hardware:** The physical parts (e.g., monitor, keyboard, hard drive).
  2. **Software:** The programs and apps running on the hardware (e.g., database, operating system).
  3. **People:** The users and operators who make the system work.

---

### Three Types of Information Systems (IS)

An **Information System (IS)** combines IT and human activities to help a business run smoothly and make decisions. There are three major types of IS:

| System Name | Who Uses It? | What Decisions Does It Make? | Core Purpose & Example |
| :--- | :--- | :--- | :--- |
| **Transaction Processing System (TPS)** | Operational Staff (Frontline Workers) | **Structured Decisions:** Routine, daily, highly repetitive rules. | **Purpose:** Processes daily business transactions with high speed and accuracy.<br>*Example:* A railway booking system when you book or cancel a train ticket. |
| **Management Information System (MIS)** | Tactical Management (Middle Managers) | **Semi-Structured Decisions:** Uses structured data but needs human review. | **Purpose:** Uses data from the TPS to create structured summary reports and handle quick queries.<br>*Example:* A weekly sales report showing which store sold the most. |
| **Decision Support System (DSS)** | Strategic Management (Top Executives) | **Unstructured Decisions:** One-time, complex, and unpredictable situations. | **Purpose:** Highly flexible tool that allows users to build custom reports to analyze unique scenarios.<br>*Example:* Planning where to open a new branch based on market trends. |

---

### Key Definitions to Memorize

* **System Analysis:** Studying how parts of an existing system interact to find the best way to improve them.
* **Software Engineering:** A disciplined, step-by-step approach to creating high-quality, affordable, and easy-to-maintain software.
* **System Design:** Creating the detailed blueprint (architecture, modules, database, and interfaces) for a new system.

---

### Logical Design vs. Physical Design

System design is divided into two major phases:

| Feature | Logical Design (The "What") | Physical Design (The "How") |
| :--- | :--- | :--- |
| **Core Focus** | What the system should do (abstract view). | How the system is actually implemented (concrete view). |
| **Technology Dependent?** | **No.** It does not care about what brand of hardware or database is used. | **Yes.** It is completely tailored to the specific hardware and software used. |
| **Key Activities** | • Drawing Data Flow Diagrams (DFDs) <br>• Creating Entity Relationship Diagrams (ERDs) <br>• Designing forms and screen layouts | • Choosing servers, storage, and network devices <br>• Designing physical database tables and SQL schemas <br>• Planning distributed networks |
| **Audience** | Systems analysts and business users. | Programmers, database administrators (DBAs), and network engineers. |
| **Example** | Saying: *"The system must store customer names and order history."* | Saying: *"We will store customer names in an Oracle SQL database table using VARCHAR2."* |

---

### The System Analyst

A **System Analyst (SA)** is the bridge between business problems and technology solutions. They study organizational needs and translate them into technical specs.

#### 💡 Analyst vs. Project Manager:
* **System Analyst:** Focuses on *what* the business needs and *how* to design the technical solution.
* **Project Manager (PM):** Focuses on *project execution* (tracking schedules, managing budgets, and meeting deadlines).

#### Core Skills of a System Analyst:
1. **Technical Skills:** Knowing programming languages (Java, Python), database queries (SQL), and modeling tools (UML, ERD).
2. **Analytical Skills:** Critical thinking and solving complex logical puzzles.
3. **Communication Skills:** Presenting ideas clearly to stakeholders and writing technical documentation.
4. **Project Management Skills:** Scheduling, resource allocation, and cost-benefit analysis.
5. **Business Skills:** Understanding how the industry works (domain knowledge).
6. **Interpersonal Skills:** Collaboration, negotiation, and building trust.

#### Types of System Analysts:
* **Business System Analyst:** Focuses strictly on business processes and making them more efficient.
* **Technical System Analyst:** Focuses on writing code, database setups, and ensuring technical soundness.
* **Functional System Analyst:** Focuses on making sure the finished system matches user expectations.
* **Infrastructure System Analyst:** Focuses on hardware, networks, and system performance.
* **Data System Analyst:** Focuses on data models, database structures, and data quality.

---

## 🔄 Lecture 2: System Development Methodologies

### SDLC Phases in Detail
The **System Development Life Cycle (SDLC)** is a step-by-step framework used to plan, create, test, deploy, and maintain information systems.

```
[Gather Requirements] ➔ [Design System] ➔ [Implementation (Code)] ➔ [Testing] ➔ [Deployment] ➔ [Maintenance]
```

1. **Requirements Gathering:** Identifying what the client and users actually need.
   * *Deliverable:* Requirements Definition Document / System Requirements Specification (SRS).
2. **System Design:** Creating the blueprint for the database, user interfaces, and technical architecture.
   * *Deliverable:* System Design Document, wireframes, and database schemas.
3. **Implementation:** Writing the actual code.
   * *Deliverable:* Executable source code.
4. **Testing:** Running the system to find and fix bugs.
   * *Deliverable:* Test plans, test cases, and a verified, bug-free system.
   * *Common Testing Types to know for the exam:*
     * *Unit Testing:* Testing single, isolated code blocks (like a single function).
     * *Integration Testing:* Testing how different modules work together.
     * *System Testing:* Testing the entire system as a whole.
     * *User Acceptance Testing (UAT):* Having real clients test the app to see if they approve.
     * *Black-Box Testing:* Testing functionality without looking at the internal code.
     * *White-Box Testing:* Testing the internal code structure directly.
     * *Regression Testing:* Re-testing after updates to make sure old features didn't break.
5. **Deployment:** Releasing the software to production for real users.
   * *Deliverable:* Live operating system, user manuals, and training sessions.
6. **Maintenance:** Managing bugs, security updates, and system upgrades over time.

---

### SDLC Pros & Cons

| Advantages | Disadvantages |
| :--- | :--- |
| **Clear Goals & Scope:** Prevents misunderstandings of what needs to be built. | **Inflexibility:** Can limit team creativity and makes adapting to late changes hard. |
| **Detailed Documentation:** Highly useful for future updates and maintenance. | **Outdated Solutions:** Slow progress can lead to systems that are outdated by release. |
| **Easier Tracking:** Work Breakdown Structure (WBS) helps schedule and track every task. | **The Gap:** There is often a gap between initial design plans and actual implementation. |

---

### Traditional Development Models

Traditional models are highly structured, step-by-step, and rigid. They work best when **technology is stable**, **requirements are clear and unchanging**, and **development speed is not the primary priority**.

* **1. Waterfall Model:**
  * *Definition:* A strict linear model where you must complete each phase before starting the next. No backtracking allowed.
  * *Strength:* Extremely simple to understand and manage.
  * *Weakness:* High risk because you cannot easily change features once coding starts.
  * *Example:* Building a core Banking System where security and rules are fixed and known.
* **2. V-Model (Validation & Verification):**
  * *Definition:* An extension of Waterfall where every development phase has a matching testing phase. It forms a "V" shape.
  * *Strength:* Early detection of bugs because test cases are written alongside designs.
  * *Weakness:* Very rigid and difficult to adapt to changing needs.
  * *Example:* Building medical device software where safety and compliance are critical.
* **3. Prototyping Model:**
  * *Definition:* Building a simple, working mock-up (prototype) of the system first to gather feedback and refine requirements.
  * *Strength:* Clarifies unclear user requirements and gives early user feedback.
  * *Weakness:* Can lead to "scope creep" (uncontrolled growth of features) and project delays.
  * *Example:* Creating a prototype for a new mobile app interface before building the backend.
* **4. Incremental Model:**
  * *Definition:* Breaking the system down into small, functional chunks (increments) and delivering them one by one.
  * *Strength:* Core features are delivered quickly, giving early value to users.
  * *Weakness:* Requires a clear plan on how to divide the modules and can be hard to integrate.
  * *Example:* Building an online shopping website by releasing the product catalog first, then cart functionality next, and payments last.
* **5. Iterative Model:**
  * *Definition:* Building a basic version of the whole system, then refining and expanding it over repeated cycles (iterations).
  * *Strength:* High flexibility to adapt to feedback and lower risk of complete failure.
  * *Weakness:* Demands strict project management to prevent running out of time.
  * *Example:* Video game development, where basic gameplay is created first, and graphics/levels are added in stages.
* **6. Spiral Model:**
  * *Definition:* An iterative model that revolves around **heavy risk analysis**. Each cycle includes planning, risk analysis, engineering, and evaluation.
  * *Strength:* Highly robust risk management; excellent for large projects.
  * *Weakness:* Expensive and requires highly skilled risk evaluation experts.
  * *Example:* Developing a massive, high-risk aerospace system.

---

### Contemporary Development Models

Contemporary models focus on **speed, flexibility, and constant collaboration**. They work best when requirements are expected to change frequently.

* **1. Agile Model (e.g., Scrum):**
  * *Definition:* Divides work into short, 2-to-4 week development cycles called **sprints**. Focuses on working software and stakeholder feedback.
  * *Strength:* Highly flexible, welcoming to changes, and keeps clients happy.
  * *Weakness:* Hard to predict final budgets and requires highly self-disciplined teams.
  * *Example:* Developing an online video streaming app where user features change constantly.
* **2. DevOps Model:**
  * *Definition:* Merges the software Development (Dev) and IT Operations (Ops) teams. Uses automation (CI/CD pipelines) to test and release software continuously.
  * *Strength:* High delivery speed, instant feedback loops, and highly reliable releases.
  * *Weakness:* High initial setup costs and requires a massive team culture shift.
  * *Example:* Managing cloud infrastructure for a high-traffic app like an e-commerce giant.
* **3. Rapid Application Development (RAD):**
  * *Definition:* Focuses on rapid prototyping and active user involvement with very little initial planning. Aims to deliver a complete system in 60-90 days.
  * *Phases:* Requirements Planning, User Design, Construction, and Cutover (training/launch).
  * *Strength:* Extremely fast delivery and highly responsive to user needs.
  * *Weakness:* Lacks detailed documentation and requires heavy client involvement.
  * *Example:* Building a quick internal company tool or Minimum Viable Product (MVP).
* **4. Extreme Programming (XP):**
  * *Definition:* An Agile methodology with extreme technical practices: short cycles, pair programming (two devs on one PC), and test-driven development.
  * *Phases:* Exploration, Planning, Iterations to Release, Productionizing, Maintenance, Death.
  * *Strength:* Exceptionally high code quality and highly responsive to changes.
  * *Weakness:* Difficult to scale to large, distributed teams.
  * *Example:* Developing a highly critical, real-time stock trading platform.
* **5. Rational Unified Process (RUP):**
  * *Definition:* An object-oriented software development process dividing work into four key phases:
    1. *Inception:* Define scope and estimate efforts.
    2. *Elaboration:* Design a working architecture and address risks.
    3. *Construction:* Build the functional code incrementally.
    4. *Transition:* Deploy the system to users.

---

### Traditional vs. Contemporary Comparison

| Feature | Traditional Models (Waterfall, V-Model) | Contemporary Models (Agile, Scrum, RAD) |
| :--- | :--- | :--- |
| **Requirements** | Must be fully defined and frozen at the start. | Expected to change and evolve continuously. |
| **Process Flow** | Linear, step-by-step phases. | Iterative cycles (sprints or loops). |
| **User Involvement** | Mostly at the very beginning and very end. | Active involvement throughout the entire project. |
| **Risk of Failure** | High (if requirement errors are found late). | Low (issues are spotted and fixed in early cycles). |
| **Delivery Speed** | Single release at the end of the project. | Frequent, incremental releases of working software. |

---

## 📝 Lecture 3: Requirement Gathering Approaches

### What is a Requirement?
A **Requirement** is a statement specifying what a system must do or what qualities it must have. Requirements must align with business goals to satisfy stakeholders.

#### There are four main levels/types of requirements:
1. **Business Requirements:** High-level goals explaining *why* the project is being built.
   * *Example:* *"We want to decrease order fulfillment time by 30%."*
2. **User Requirements:** Specific tasks the user must be able to perform using the system.
   * *Example:* *"The warehouse manager needs to view pending shipments."*
3. **Functional Requirements:** Concrete features the system *must do* (processing data or managing workflows).
   * *Example:* *"The system must automatically calculate sales tax based on the user's zip code."*
4. **Non-Functional Requirements:** Quality attributes and constraints explaining *how* the system must perform (security, speed, usability).
   * *Example:* *"The payment checkout page must load in under 2 seconds."*

---

### Requirement Elicitation Techniques

Elicitation is the process of gathering requirements from stakeholders. Here are the five key techniques used:

* **1. Interviews:** 
  * Structured or unstructured discussions with users and managers.
  * **Question Types:**
    * *Closed-ended:* Seek short, specific answers (e.g., *"How many items do you ship daily?"*).
    * *Open-ended:* Invite rich, detailed feedback (e.g., *"What is your biggest daily bottleneck?"*).
    * *Probing:* Follow-up questions for detail (e.g., *"Can you explain why that step takes so long?"*).
  * **Approaches:**
    * *Top-Down:* Start with high-level general goals and move down to specific details (best for senior managers).
    * *Bottom-Up:* Start with specific, detailed tasks and work up to general goals (best for hands-on workers).
  * *Important Rule:* The analyst must write and finalize the **Interview Report within 48 hours** of the interview.
* **2. Joint Application Development (JAD):**
  * A collaborative, high-energy meeting where systems analysts, users, and managers sit together in a room (usually arranged in a U-shape) to define requirements together.
  * *Major Benefit:* **Reduces scope creep by up to 50%** because decisions are made collectively.
* **3. Questionnaires (Surveys):**
  * Sending out written questions to a large group of people. Excellent for reaching a broad audience quickly and cheaply, but responses lack depth.
* **4. Document Analysis:**
  * Reviewing existing company files, user manuals, forms, and reports to understand the "As-Is" system.
  * *Note:* Formal documentation might not represent the actual "informal" system that workers use daily.
* **5. Observation:**
  * Watching real-world users perform their tasks to discover implicit workflows and pain points that they might forget to mention in interviews.

---

### Comparison of Elicitation Techniques

Memorize this table! It represents the key selection criteria for choosing an elicitation technique:

| Selection Criteria | Interviews | JAD Sessions | Questionnaires | Document Analysis | Observation |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Type of Information** | As-Is, Improvements, To-Be | As-Is, Improvements, To-Be | As-Is, Improvements | As-Is | As-Is |
| **Depth of Info** | **High** | **High** | Medium | Low | Low |
| **Breadth of Info** | Low | Medium | **High** | **High** | Low |
| **Integration of Info** | Low | **High** | Low | Low | Low |
| **User Involvement** | Medium | **High** | Low | Low | Low |
| **Cost** | Medium | Low to Medium | **Low** | **Low** | Low to Medium |

---

### Requirement Analysis Strategies

Once you gather raw notes, use these analysis strategies to find the real, underlying system needs:

* **Problem Analysis:** Asking users directly to identify workflow bottlenecks and inefficiencies.
* **Root Cause Analysis (5 Whys):** Digging deep into system failures to find the fundamental reason why they happen, rather than just treating the symptom.
  * *Example:* Asking *"Why is the app slow?"* ➔ *"Because the database is overloaded."* ➔ *"Why?"*... and repeating this 5 times until you find the core issue.
* **Duration Analysis:** Measuring the exact time taken for each step in a workflow and comparing it to industry standards to locate unnecessary delays.
* **Activity-Based Costing:** Figuring out the exact dollar cost of every step in a business process. This highlights which steps are highly expensive but bring low value.
* **Informal Benchmarking:** Comparing your company’s internal operations with the best practices of industry leaders.
* **Outcome Analysis:** Working backward from the ultimate business goal (e.g., *"We want to make customers happier"*) to determine what system features are needed.
* **Technology Analysis:** Looking at new technologies (like cloud databases) to see if they can make the business run better.
* **Activity Elimination:** Completely removing useless, non-value-adding steps from a business workflow and automating the rest.

---

## 🔍 Lecture 4: Requirement Analysis & Engineering

### Activities & Importance

**Requirement Analysis** is the process of identifying, modeling, and documenting what a system needs to do. 
* **Why is it so important?** It acts as the foundation of the SDLC. A thorough analysis prevents misunderstandings, saves immense development costs, identifies risks early, and keeps communication clear between developers and clients.
* **Core Activities:** 
  1. *Problem Recognition:* Understanding what needs solving.
  2. *Evaluation & Synthesis:* Digging into the data to prioritize features.
  3. *Modeling:* Drawing visual diagrams of the system.
  4. *Specification:* Writing the final requirements document (SRS).
  5. *Review:* Confirming with stakeholders that everything is correct.

---

### Comparison: Functional vs. Non-Functional Requirements

| Aspect | Functional Requirements | Non-Functional Requirements |
| :--- | :--- | :--- |
| **What does it describe?** | **What** the system should do (behaviors, tasks, operations). | **How** the system should perform (constraints, quality attributes). |
| **Core Focus** | Specific system features and operations. | Overall system performance, usability, and security. |
| **Examples** | • User logging in <br>• Generating invoices <br>• Saving items to cart | • Page loading in 1.5 seconds <br>• Password encryption <br>• System running 99.9% of the time |

---

### Requirement Engineering Phases

Requirement Engineering is a highly structured lifecycle made up of 7 key phases:

1. **Inception:** Asking basic questions to establish a simple understanding of the problem, identifying stakeholders, and assessing the economic benefits.
2. **Elicitation:** Gathering raw requirements from stakeholders using interviews, meetings, and observation.
3. **Elaboration (Modeling):** Building visual models to represent the system (like Use Cases, Data Flow Diagrams, and State Diagrams).
4. **Negotiation:** Sitting down with stakeholders to resolve conflicting requirements and prioritize tasks to reach a "win-win" agreement.
5. **Specification:** Documenting requirements clearly in worksheets, diagrams, or an official SRS document.
6. **Validation:** Reviewing the requirements to ensure they are consistent, unambiguous, technically achievable, and testable.
7. **Requirements Management:** Managing changes to the agreed requirements over time.

---

### Domain Analysis & Data Modeling

* **Domain Analysis:** Defining a specific business area (like "E-commerce" or "Healthcare"), studying similar existing applications, and developing a reusable model of objects and features for that entire domain.
* **Data Modeling:** Showing how data objects relate to one another.
  * **Data Object:** Any collection of attributes that the system needs to understand.
    * *Example:* **Dimension** is a Data Object because it is composed of multiple attributes (Length, Width, Height). *Length* alone is not a data object—it is just a single attribute.
* **ERD Cardinality Symbols (Information Engineering Style):**
  * *One-to-One (1:1):* An entity maps to exactly one other entity.
  * *One-to-Many (1:N):* An entity maps to multiple other entities.
  * *Zero-or-Many:* An entity might map to zero, one, or more entities (optional relationship).

---

### Class Categorization (Object-Oriented Analysis)

When modeling a system using classes (Object-Oriented Design), objects are classified into three core types:

| Class Type | Simple Definition | Key Job | Exam Example |
| :--- | :--- | :--- | :--- |
| **Boundary Class** | The User Interface (UI) and outer connections. | Manages interaction between the system's environment (users, devices, external systems) and its inner gears. Does not worry about design details. | **A login form**, a scan sensor interface, or a print setup. |
| **Entity Class** | The Core Data (stored in databases). | Models persistent data and key business concepts. Contains the main logic that solves the system problem. | **Customer record**, Product details, or Invoice data. |
| **Control Class** | The brain/coordinator of the system. | Coordinates and directs behaviors. It delegates work to other classes and never does the work itself. Separates boundary and entity classes. | **CheckoutController** (coordinates between UI input and DB update). |

---

### CRC Cards (Class Responsibility Collaboration)

A **CRC Card** is a simple physical index card (usually 3x5" or 4x6") used to discover system classes during object-oriented design.

* **Why use physical cards?** Their physical size limits class complexity and forces developers to divide responsibilities cleanly.
* **How is it laid out?**
  * **Top of card:** Class Name, Subclasses, Superclasses.
  * **Left Side/Column:** **Responsibilities** (what this class is in charge of knowing or doing).
  * **Right Side/Column:** **Collaborators** (other classes this class must work with to do its job).
* *Exam Tip:* CRC cards do **not** use UML. Instead, they are used to discover information about classes *before* drawing a UML Class Diagram.

---

### Negotiation, Validation, & Baselining

* **Requirement Negotiation:** Identifying stakeholder win-conditions and resolving conflicts to reach a balanced project scope.
* **Requirement Validation:** A quality check where the team asks: Is each requirement necessary? Is it clear? Is it testable? Does it conflict with others? Is it doable in this technical setup?
* **Requirements Baseline:** An agreed-upon, reviewed set of requirements that acts as the official starting point for further design and code. It prevents scope explosion and gives developers, clients, and QA testers confidence in the project's goals.

---

### Requirement Traceability Matrix (RTM)

The **Requirement Traceability Matrix (RTM)** is a structured grid (table) that links client requirements directly to the test cases written by QA testers.
* **Primary Objective:** To ensure that **100% of the client's requirements are covered and verified by test cases**.

#### The Three Types of Traceability:
1. **Forward Traceability:** Links requirements to test cases. (Rows = Requirement IDs, Columns = Test Case IDs). Ensures no requirement was forgotten.
2. **Backward Traceability:** Links test cases back to requirements. (Rows = Test Case IDs, Columns = Requirement IDs). Ensures we didn't write useless tests for features that don't exist.
3. **Bi-directional Traceability:** Combines both Forward and Backward traceability.

#### Simplified RTM Example:

| Requirement ID | Requirement Description | Test Case ID 1 | Test Case ID 2 | Test Case ID 3 | Status |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **REQ-01** | User can reset password via email. | ✔ (TC-101) | | | Verified |
| **REQ-02** | Payment cart must support Visa. | | ✔ (TC-201) | ✔ (TC-202) | Verified |
| **REQ-03** | Dashboard must load in < 2 sec. | ✔ (TC-301) | | | Verified |

---

### 🎓 5 Quick Exam-Day Study Tips:
1. **TPS vs. MIS vs. DSS:** Remember operational (TPS = tickets), tactical (MIS = summaries), and strategic (DSS = executive boardrooms).
2. **Logical vs. Physical Design:** Logical is the abstract idea (ERD/DFD), Physical is the actual code and hardware (SQL tables/Servers).
3. **Waterfall vs. Agile:** Waterfall is linear (perfect for stable systems like banking); Agile is looping sprints (perfect for evolving apps).
4. **JAD Meetings:** Collaborative, U-shaped table setup, reduces scope creep by 50%.
5. **RTM Matrices:** Always maps Requirement IDs to Test Case IDs to prove everything is tested!

Good luck with your exam today! You've got this! 💪
