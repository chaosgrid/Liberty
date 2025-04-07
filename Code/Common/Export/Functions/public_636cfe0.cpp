#include "Common-PCH.h"

PROC_DECLARE(0x636cfe0, internal_636cfe0, public_636cfe0);
extern "C" NAKED register_t __cdecl internal_636cfe0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov ecx, 3
        repe cmpsd
        pop edi
        sete al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x636cfe0)
    }
}
