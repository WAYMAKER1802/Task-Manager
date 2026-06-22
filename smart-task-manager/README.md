# 📋 Smart Task Manager

A sleek, fully-featured **Task Manager** built with pure **HTML, CSS, and Vanilla JavaScript** — no frameworks, no dependencies, no build tools. Just open `index.html` in any browser and you're ready to go.

---

## ✨ Features

| Feature | Description |
|---|---|
| ➕ **Add Tasks** | Add tasks via button click or by pressing `Enter` |
| 🔴🟡🟢 **Priority Levels** | Assign High, Medium, or Low priority to every task |
| 📅 **Due Dates** | Set due dates with smart relative labels (Due today, Due in 3d, etc.) |
| ⚠️ **Overdue Detection** | Overdue tasks are automatically highlighted with a red pulsing badge |
| ✅ **Toggle Completion** | Check off tasks with an animated custom checkbox |
| 🗑️ **Delete Tasks** | Remove tasks with a smooth slide-out animation |
| 🔍 **Live Search** | Instantly filter tasks as you type (debounced for performance) |
| 🗂️ **Filter Tabs** | Switch between All / Pending / Completed views |
| 🎚️ **Priority Filter** | Filter the list by priority level |
| 📊 **Progress Bar** | Visual progress bar showing % of tasks completed |
| 🌙 **Dark Mode** | Toggle between light and dark themes — persists across sessions |
| 💾 **Persistence** | All tasks and theme preference saved to `localStorage` |
| 🔔 **Toast Notifications** | Subtle toasts confirm every action (add, delete, clear) |
| 📱 **Responsive** | Fully responsive layout — works on mobile, tablet, and desktop |

---

## 🚀 Getting Started

No installation or setup needed.

1. **Clone the repo**
   ```bash
   git clone https://github.com/WAYMAKER1802/Task-Manager.git
   ```

2. **Open the app**
   ```
   smart-task-manager/index.html
   ```
   Just double-click the file or open it in any modern browser.

That's it. ✅

---

## 🖼️ Preview

### Light Mode
![Light Mode](https://img.shields.io/badge/Theme-Light%20Mode-6366f1?style=for-the-badge&logo=css3&logoColor=white)

### Dark Mode
![Dark Mode](https://img.shields.io/badge/Theme-Dark%20Mode-1a1d2e?style=for-the-badge&logo=css3&logoColor=white)

---

## 🏗️ Tech Stack

- **HTML5** — Semantic markup with ARIA accessibility attributes
- **CSS3** — Custom properties (design tokens), CSS Grid/Flexbox, keyframe animations, glassmorphism
- **Vanilla JavaScript (ES6+)** — No libraries, no frameworks
- **localStorage API** — Client-side persistence
- **Google Fonts** — Inter typeface via CDN

---

## 📁 Project Structure

```
smart-task-manager/
└── index.html       ← Entire app: HTML + <style> + <script> in one file
```

Single-file architecture — everything is self-contained. No build steps, no `node_modules`, no config files.

---

## 🧠 Data Model

Each task is stored as a plain object in `localStorage`:

```js
{
  id:        string,   // crypto.randomUUID()
  title:     string,   // Task description (max 120 chars)
  priority:  "low" | "medium" | "high",
  due:       string,   // "YYYY-MM-DD" or ""
  done:      boolean,
  createdAt: string    // ISO timestamp
}
```

Storage key: `"smart_tasks_v3"` · Theme key: `"smart_tasks_theme"`

---

## ⌨️ Keyboard Shortcuts

| Key | Action |
|---|---|
| `Enter` (in title field) | Add the task |
| `Tab` | Navigate between form fields |
| `Space` | Toggle focused checkbox |

---

## 🌐 Browser Support

| Browser | Version |
|---|---|
| Chrome | 110+ |
| Firefox | 115+ |
| Edge | 110+ |
| Safari | 16+ |

---

## 🔒 Privacy

All data is stored **locally in your browser** via `localStorage`. Nothing is sent to any server.

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

---

<p align="center">Made with ❤️ using vanilla HTML, CSS & JavaScript</p>
