#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c80f0);

#define public_4c8101 _public_4c8101

PROC_DECLARE(0x4c80f0, internal_4c80f0, public_4c80f0);
extern "C" NAKED register_t __cdecl internal_4c80f0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x201
        jne public_4c8101
        mov byte ptr ds : [public_673555], 1
        public_4c8101 : nop
        ret 
        UNREACHABLE_TRAP(0x4c80f0)
    }
}

#undef public_4c8101
