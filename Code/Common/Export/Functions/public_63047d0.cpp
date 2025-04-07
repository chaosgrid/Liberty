#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63047d0);

PROC_DECLARE(0x63047d0, internal_63047d0, public_63047d0);
extern "C" NAKED register_t __cdecl internal_63047d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_63992e0]
        add esp, 0xC
        mov byte ptr ds : [edi+esi-1], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63047d0)
    }
}
