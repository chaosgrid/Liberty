#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45dd);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4609);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f87);

#define public_6ef45e4 _public_6ef45e4
#define public_6ef4606 _public_6ef4606
#define public_6ef4608 _public_6ef4608

PROC_DECLARE(0x6ef45dd, internal_6ef45dd, public_6ef45dd);
extern "C" NAKED register_t __cdecl internal_6ef45dd()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFE0
        ja public_6ef4606
        public_6ef45e4 : nop
        push dword ptr ss : [esp+4]
        call public_6ef4609
        test eax, eax
        pop ecx
        jne public_6ef4608
        cmp dword ptr ss : [esp+8], eax
        je public_6ef4608
        push dword ptr ss : [esp+4]
        call public_6ef6f87
        test eax, eax
        pop ecx
        jne public_6ef45e4
        public_6ef4606 : nop
        xor eax, eax
        public_6ef4608 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef45dd)
    }
}

#undef public_6ef45e4
#undef public_6ef4606
#undef public_6ef4608
