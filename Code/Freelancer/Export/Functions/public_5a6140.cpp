#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2220);
CLANG_FORWARD_PROC_SYMBOL(public_4c2620);
CLANG_FORWARD_PROC_SYMBOL(public_4c2690);

#define public_5a6166 _public_5a6166
#define public_5a617a _public_5a617a

PROC_DECLARE(0x5a6140, internal_5a6140, public_5a6140);
extern "C" NAKED register_t __cdecl internal_5a6140()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6724b4]
        test ecx, ecx
        je public_5a617a
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_673378]
        je public_5a6166
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call public_4c2220
        mov ecx, dword ptr ds : [public_6724b4]
        public_5a6166 : nop
        push 0
        call public_4c2620
        mov ecx, dword ptr ds : [public_6724b4]
        push 0
        call public_4c2690
        public_5a617a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x5a6140)
    }
}

#undef public_5a6166
#undef public_5a617a
