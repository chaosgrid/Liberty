#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae2d0);
CLANG_FORWARD_PROC_SYMBOL(public_5af120);

#define public_5ae2e3 _public_5ae2e3
#define public_5ae2ff _public_5ae2ff

PROC_DECLARE(0x5ae2d0, internal_5ae2d0, public_5ae2d0);
extern "C" NAKED register_t __cdecl internal_5ae2d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_5ae2ff
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_5ae2e3 : nop
        push esi
        push edi
        call public_5af120
        add esi, 0x50
        add esp, 8
        add edi, 0x50
        cmp esi, ebx
        jne public_5ae2e3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_5ae2ff : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5ae2d0)
    }
}

#undef public_5ae2e3
#undef public_5ae2ff
