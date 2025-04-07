#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6322b00);
CLANG_FORWARD_PROC_SYMBOL(public_63240a0);

#define public_6322b13 _public_6322b13
#define public_6322b35 _public_6322b35

PROC_DECLARE(0x6322b00, internal_6322b00, public_6322b00);
extern "C" NAKED register_t __cdecl internal_6322b00()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6322b35
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6322b13 : nop
        push esi
        push edi
        call public_63240a0
        add esi, 0x90
        add esp, 8
        add edi, 0x90
        cmp esi, ebx
        jne public_6322b13
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6322b35 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6322b00)
    }
}

#undef public_6322b13
#undef public_6322b35
