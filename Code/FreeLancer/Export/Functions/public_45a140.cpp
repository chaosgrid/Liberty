#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458860);
CLANG_FORWARD_PROC_SYMBOL(public_459900);
CLANG_FORWARD_PROC_SYMBOL(public_45a140);
CLANG_FORWARD_PROC_SYMBOL(public_45b380);
CLANG_FORWARD_PROC_SYMBOL(public_48a130);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);

#define public_45a15f _public_45a15f
#define public_45a17a _public_45a17a

PROC_DECLARE(0x45a140, internal_45a140, public_45a140);
extern "C" NAKED register_t __cdecl internal_45a140()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        je public_45a15f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        je public_45a15f
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_45a15f : nop
        mov ecx, dword ptr ds : [public_6724b4]
        test ecx, ecx
        je public_45a17a
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0xEF02
        call dword ptr ds : [eax+0xA8]
        public_45a17a : nop
        call public_459900
        call public_458860
        call public_45b380
        call public_4b9bb0
        jmp public_48a130
        UNREACHABLE_TRAP(0x45a140)
    }
}

#undef public_45a15f
#undef public_45a17a
