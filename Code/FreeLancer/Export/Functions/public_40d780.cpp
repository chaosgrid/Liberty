#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d780);
CLANG_FORWARD_PROC_SYMBOL(public_40df40);

#define public_40d793 _public_40d793
#define public_40d7af _public_40d7af

PROC_DECLARE(0x40d780, internal_40d780, public_40d780);
extern "C" NAKED register_t __cdecl internal_40d780()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_40d7af
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_40d793 : nop
        push esi
        push edi
        call public_40df40
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_40d793
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_40d7af : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x40d780)
    }
}

#undef public_40d793
#undef public_40d7af
