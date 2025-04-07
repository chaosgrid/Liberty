#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4304b0);

#define public_42fe03 _public_42fe03
#define public_42fe15 _public_42fe15

PROC_DECLARE(0x42fdf0, internal_42fdf0, public_42fdf0);
extern "C" NAKED register_t __cdecl internal_42fdf0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_42fe15
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_42fe03 : nop
        push ebx
        push esi
        call public_4304b0
        add esp, 8
        add esi, 4
        dec edi
        jne public_42fe03
        pop esi
        pop ebx
        public_42fe15 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x42fdf0)
    }
}

#undef public_42fe03
#undef public_42fe15
