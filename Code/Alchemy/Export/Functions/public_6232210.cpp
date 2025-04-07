#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232210);

PROC_DECLARE(0x6232210, internal_6232210, public_6232210);
extern "C" NAKED register_t __cdecl internal_6232210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        inc ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6232210)
    }
}
