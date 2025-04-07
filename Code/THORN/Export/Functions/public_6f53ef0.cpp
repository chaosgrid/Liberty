#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f533b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53460);
CLANG_FORWARD_PROC_SYMBOL(public_6f53ef0);

PROC_DECLARE(0x6f53ef0, internal_6f53ef0, public_6f53ef0);
extern "C" NAKED register_t __cdecl internal_6f53ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_6f53460
        push eax
        push esi
        call public_6f533b0
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53ef0)
    }
}
