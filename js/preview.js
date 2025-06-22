function updatePreview() {
    document.getElementById('preview-name').innerText = 
        document.getElementById('name').value || "John Doe";
    
    document.getElementById('preview-id').innerText = 
        document.getElementById('id-number').value || "ABC-1234";
    
    document.getElementById('preview-designation').innerText = 
        document.getElementById('designation').value || "Student";
    
    document.getElementById('preview-institution').innerText = 
        document.getElementById('institution').value || "Your Institution";
}