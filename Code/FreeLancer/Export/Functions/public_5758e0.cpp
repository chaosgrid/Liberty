#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5758e0);
CLANG_FORWARD_PROC_SYMBOL(public_575b80);

#define public_5758f3 _public_5758f3
#define public_57590f _public_57590f

PROC_DECLARE(0x5758e0, internal_5758e0, public_5758e0);
extern "C" NAKED register_t __cdecl internal_5758e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_57590f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_5758f3 : nop
        push esi
        push edi
        call public_575b80
        add esi, 0x24
        add esp, 8
        add edi, 0x24
        cmp esi, ebx
        jne public_5758f3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_57590f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5758e0)
    }
}

#undef public_5758f3
#undef public_57590f
