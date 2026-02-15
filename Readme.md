# Game Concept (Systematized)

## 1) Project Overview
**Genre:** First-person action PvP 1v1, fast-paced action, short rounds.  
**Map:** One small static arena (all interactions occur within a single play space).  
**Round Objective:** Win by killing the opponent first.  
**Core Idea:** Advantage comes from the **quality of decisions**, not just mechanical skill.

---

## 2) Design Pillars
1. **Decision-first gameplay** — victory through timing, positioning, ability usage, and interaction choices.
2. **Interactions as the core** — environment, mobs, abilities, weapons, and their combinations determine the outcome.
3. **Fast pacing** — rounds typically ~up to 60 seconds (emergent, no forced timer).
4. **Controlled chaos** — dynamic elements via weather events, mobs, and map modifiers without sacrificing readability.

---

## 3) Match Format
- Match: up to **15 rounds maximum**.
- Win condition: **first to 8 victories**.
- Between rounds: map/environment elements **reset**.
- TTK: **medium-to-high** (room for counter-decisions, but no overly long duels).

---

## 4) Pre-Match Build
Players assemble a build **before the match**, without knowing the opponent’s build.

### Build Composition
- **1 active weapon**:
  - hitscan (trace),
  - projectile,
  - melee (katana).
- **Up to 3 abilities** from a shared pool:
  - active/passive combinations.

### Build Balance Principle
- Builds are not about “hard counter-picking,” but about **different optimal play lines** in different contexts.
- Every build must have a path to victory through:
  - positioning,
  - environment usage,
  - timing,
  - smart interaction management.

---

## 5) Core Combat Loop
1. **Preparation:** choose weapon + up to 3 abilities.
2. **Round start:** players spawn in the arena, confrontation begins.
3. **Combat decisions:** movement, ability usage, interaction with mobs and map objects.
4. **Dynamic events:** possible mid-round condition changes (weather/map modifiers).
5. **Resolution:** one player dies → round ends.
6. **Reset:** environment and interactive elements return to base state.

---

## 6) Interaction Systems

### 6.1 Environment
- Map objects create situational advantages/risks.
- Environment resets after each round.

### 6.2 Mobs (not decoration, but systemic drivers)
- Can grant effects via ability synergies (e.g., heal, rally, etc.).
- Killing mobs may:
  - trigger cards/events,
  - amplify build synergies,
  - force player conflict (resource/moment control).

### 6.3 Mid-Round Weather/Card Effects
Examples:
- mob empowerment,
- reduced effectiveness of certain abilities,
- new movement conditions (“floor is lava,” etc.).

Goal: break static patterns and require real-time adaptation.

---

## 7) Information Readability (Critical Clarification)
- Opponent build is unknown before the match.
- After the match starts, players must **see and understand**:
  - which abilities the opponent has,
  - key tools in their kit,
  - which threats are currently active.

This reduces “random losses” and strengthens the decision-making layer.

---

## 8) Progression (Full Version, Beyond MVP)
- Unlock new abilities and weapons via experience.
- XP awarded for both wins and losses.
- Cosmetic progression: character/ability skins.
- Potential monetization: cosmetic/service items.

---

## 9) Scaling (Post-MVP)
1. PvE/story roguelike mode (“room-to-room” progression).
2. Team modes 3v3 / 5v5.
3. UGC/community: custom maps and match conditions.
4. Expansion of ability pool, weather modifiers, mobs, and map types.

---

## 10) Why It Stands Out (USP)
- Fast matches without 30–40 minute commitments.
- Low time-entry barrier, high mastery ceiling in decision-making.
- Action remains mechanical and dynamic, but not aim-only.
- Interactions create “controlled chaos,” not pure randomness.

---

## 11) MVP Scope (Locked)
1. **1 map**.
2. **Basic PvP online loop:** account/session, matchmaking, connection, client-server architecture, replication of required states.
3. **Content:** 6 abilities, 3 weapons (hitscan / projectile / katana), interactive map objects, enemies.
4. **UI:** build selection menu + matchmaking.
5. **Full match cycle:** from queue entry to match completion.
6. **Excluded from MVP:** progression, advanced settings, deep balance polish, final UI polish, additional game modes, advanced map events.

---

## 12) MVP Definition of Done
- Two players can reliably complete a full 1v1 match from matchmaking to final screen.
- All 8 abilities and 3 weapons function correctly and replicate properly.
- Player/ability/round states are synchronized and reproducible.
- Rounds end correctly on death; match correctly determines winner (first to 8).
- Core map and mob interactions meaningfully affect decisions and duel outcomes.

---

## 13) Tech Stack
- **Unreal Engine + Gameplay Ability System (GAS)**.