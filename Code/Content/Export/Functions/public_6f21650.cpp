#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21650);

#define public_6f21666 _public_6f21666
#define public_6f21671 _public_6f21671
#define public_6f21675 _public_6f21675
#define public_6f21680 _public_6f21680
#define public_6f2168c _public_6f2168c
#define public_6f21695 _public_6f21695

PROC_DECLARE(0x6f21650, internal_6f21650, public_6f21650);
extern "C" NAKED register_t __cdecl internal_6f21650()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x39]
        test bl, bl
        jne public_6f21675
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_6f21671
        public_6f21666 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_6f21666
        public_6f21671 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f21675 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f2168c
        nop 
        public_6f21680 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f21680
        public_6f2168c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f21695
        mov dword ptr ds : [ecx], eax
        public_6f21695 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f21650)
    }
}

#undef public_6f21666
#undef public_6f21671
#undef public_6f21675
#undef public_6f21680
#undef public_6f2168c
#undef public_6f21695
