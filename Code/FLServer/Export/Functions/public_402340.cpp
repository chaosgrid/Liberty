#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402340);

PROC_DECLARE(0x402340, internal_402340, public_402340);
extern "C" NAKED register_t __cdecl internal_402340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push 0x104
        push eax
        lea ecx, ds:[esi+0x208]
        push ecx
        call dword ptr ds : [public_41b968]
        add esp, 0xC
        mov byte ptr ds : [esi+0x30B], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x402340)
    }
}
