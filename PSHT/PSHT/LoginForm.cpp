#include "LoginForm.h"

using namespace PSHT;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew LoginForm());

	return 0;
}