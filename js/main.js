function updatePreview() {
    document.getElementById('preview-name').textContent =
      document.getElementById('name').value.trim() || 'John Doe';
    document.getElementById('preview-id').textContent =
      document.getElementById('id-number').value.trim() || 'ABC-1234';
    document.getElementById('preview-designation').textContent =
      document.getElementById('designation').value.trim() || 'Student';
    document.getElementById('preview-institution').textContent =
      document.getElementById('institution').value.trim() || 'Your Institution';
  }
  