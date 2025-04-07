#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633de20);

PROC_DECLARE(0x633de20, internal_633de20, public_633de20);
extern "C" NAKED register_t __cdecl internal_633de20()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], edx
        ret 8
        UNREACHABLE_TRAP(0x633de20)
    }
}
