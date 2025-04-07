#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1ca50);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

PROC_DECLARE(0x6f1ca50, internal_6f1ca50, public_6f1ca50);
extern "C" NAKED register_t __cdecl internal_6f1ca50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ds : [esi+0xC], eax
        call public_6f49b00
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1ca50)
    }
}
