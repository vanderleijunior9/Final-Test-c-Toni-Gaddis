🧑‍🤝‍🧑 Person Database System 📊
A simple C++ application that reads person data from a file, displays the database, and identifies people younger than the average age.

📋 Features
✅ Reads person data from a text file
📊 Displays the complete database of people
📉 Calculates the average age of all people
👶 Identifies and displays people younger than the average age
🔧 How It Works
The program reads a comma-separated values file containing person records
Each record includes an ID, name, and age
The program displays all records in the database
It then calculates the average age across all people
Finally, it identifies and displays people who are younger than the average
🚀 Usage
# Compile the program
g++ -o people_db main.cpp person.cpp

# Run the program
./people_db

📁 File Format
The input file should contain comma-separated values in the following format:

id,name,age

Example:

1,Homer Simpson,39
2,Marge Simpson,36
3,Bart Simpson,10

🔍 Dependencies
C++ Standard Library
Person class (defined in "person.hpp" and implemented in "person.cpp")
⚙️ Configuration
You may need to modify the file path in the makeDatabase() function to point to your data file:

const string filepath = "path/to/your/data/file.txt";

📝 License
MIT License

Feel free to contribute to this project by submitting issues or pull requests! 🙌
