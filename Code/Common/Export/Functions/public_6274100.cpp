#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274100);

PROC_DECLARE(0x6274100, internal_6274100, public_6274100);
extern "C" NAKED register_t __cdecl internal_6274100()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6274100)
    }
}
