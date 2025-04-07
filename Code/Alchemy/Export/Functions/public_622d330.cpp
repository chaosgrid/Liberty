#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d330);

PROC_DECLARE(0x622d330, internal_622d330, public_622d330);
extern "C" NAKED register_t __cdecl internal_622d330()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x622d330)
    }
}
