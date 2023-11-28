#include "fichier.h"

using namespace NS_composants {

	array<String^> NS_composants::CLfichier::explorerUnDossier(String^dossier)
	{
		return Directory::GetFiles(dossier);
	}

	void NS_composants::CLfichier::effacer(String^)
	{
		System::IO::File::Delete(fichier);
	}

	void NS_composants::CLfichier::copier(String^ fichierCopie, String^ fichierColle)
	{
		throw gcnew System::NotImplementedException();
	}
}