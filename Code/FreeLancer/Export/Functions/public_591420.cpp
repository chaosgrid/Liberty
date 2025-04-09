#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f10);
CLANG_FORWARD_PROC_SYMBOL(public_591420);

#define public_591433 _public_591433
#define public_59144f _public_59144f

PROC_DECLARE(0x591420, internal_591420, public_591420);
extern "C" NAKED register_t __cdecl internal_591420()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_59144f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_591433 : nop
        push esi
        push edi
        call public_418f10
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_591433
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_59144f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x591420)
    }
}

#undef public_591433
#undef public_59144f
