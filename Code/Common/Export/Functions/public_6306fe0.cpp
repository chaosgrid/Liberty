#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306fe0);

PROC_DECLARE(0x6306fe0, internal_6306fe0, public_6306fe0);
extern "C" NAKED register_t __cdecl internal_6306fe0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push 0x2000
        push esi
        call dword ptr ds : [public_639923c]
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6306fe0)
    }
}
