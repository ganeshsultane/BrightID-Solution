/* Base Styles */
:root {
    --primary: #2c3e50;
    --secondary: #3498db;
    --accent: #e74c3c;
}

body {
    font-family: 'Segoe UI', sans-serif;
    line-height: 1.6;
    color: #333;
}

.container {
    width: 90%;
    max-width: 1200px;
    margin: 0 auto;
}

/* Header */
header {
    background: var(--primary);
    color: white;
    padding: 1rem 0;
    box-shadow: 0 2px 10px rgba(0,0,0,0.1);
}

/* Preview Section */
.preview-container {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 2rem;
    margin-top: 2rem;
}

.id-card-template {
    border: 1px solid #ddd;
    border-radius: 8px;
    padding: 1.5rem;
    width: 300px;
    box-shadow: 0 4px 15px rgba(0,0,0,0.1);
}

.id-photo {
    width: 100px;
    height: 120px;
    background: #f5f5f5;
    border: 1px dashed #ccc;
    margin: 0 auto 1rem;
}

/* Responsive Design */
@media (max-width: 768px) {
    .preview-container {
        grid-template-columns: 1fr;
    }
}