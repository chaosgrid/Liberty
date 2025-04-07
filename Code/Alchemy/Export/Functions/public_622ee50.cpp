#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee50);

PROC_DECLARE(0x622ee50, internal_622ee50, public_622ee50);
extern "C" NAKED register_t __cdecl internal_622ee50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        dec ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x622ee50)
    }
}
