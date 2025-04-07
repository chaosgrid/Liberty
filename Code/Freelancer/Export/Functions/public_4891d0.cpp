#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4891d0);
CLANG_FORWARD_PROC_SYMBOL(public_489620);

#define public_4891e3 _public_4891e3
#define public_4891f5 _public_4891f5

PROC_DECLARE(0x4891d0, internal_4891d0, public_4891d0);
extern "C" NAKED register_t __cdecl internal_4891d0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_4891f5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_4891e3 : nop
        push ebx
        push esi
        call public_489620
        add esp, 8
        add esi, 0x24
        dec edi
        jne public_4891e3
        pop esi
        pop ebx
        public_4891f5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x4891d0)
    }
}

#undef public_4891e3
#undef public_4891f5
