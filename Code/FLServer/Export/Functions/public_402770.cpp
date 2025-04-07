#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402770);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);

PROC_DECLARE(0x402770, internal_402770, public_402770);
extern "C" NAKED register_t __cdecl internal_402770()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        push 0x8E
        mov esi, ecx
        call public_418a92
        mov dword ptr ds : [esi], offset public_41c0b8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x402770)
    }
}
