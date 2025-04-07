#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4df3f0);
CLANG_FORWARD_PROC_SYMBOL(public_4df750);

#define public_4df403 _public_4df403
#define public_4df415 _public_4df415

PROC_DECLARE(0x4df3f0, internal_4df3f0, public_4df3f0);
extern "C" NAKED register_t __cdecl internal_4df3f0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_4df415
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_4df403 : nop
        push ebx
        push esi
        call public_4df750
        add esp, 8
        add esi, 0x24
        dec edi
        jne public_4df403
        pop esi
        pop ebx
        public_4df415 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x4df3f0)
    }
}

#undef public_4df403
#undef public_4df415
