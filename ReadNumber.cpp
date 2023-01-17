int readNumber(string message) {
  int number = 0;
  cout << message;
  cin >> number;

  // Validate number
  while (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid number, Enter a valid one: ";
    cin >> number;
  }

  return number;
}
