#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5532d0);

#define public_553339 _public_553339

PROC_DECLARE(0x5532d0, internal_5532d0, public_5532d0);
extern "C" NAKED register_t __cdecl internal_5532d0()
{
    __asm
    {
        call public_54baf0
        test eax, eax
        je public_553339
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, eax
        jne public_553339
        push 0
        push ecx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_553339
        add eax, 0xC
        test eax, eax
        je public_553339
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_553339
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_553339
        call dword ptr ds : [public_5c6348]
        test eax, eax
        je public_553339
        push eax
        call public_54baf0
        push eax
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_553339
        mov byte ptr ds : [public_679968], 1
        public_553339 : nop
        ret 
        UNREACHABLE_TRAP(0x5532d0)
    }
}

#undef public_553339
