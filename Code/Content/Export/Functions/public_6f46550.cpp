#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46550);

#define public_6f46566 _public_6f46566
#define public_6f46571 _public_6f46571
#define public_6f46575 _public_6f46575
#define public_6f46580 _public_6f46580
#define public_6f4658c _public_6f4658c
#define public_6f46595 _public_6f46595

PROC_DECLARE(0x6f46550, internal_6f46550, public_6f46550);
extern "C" NAKED register_t __cdecl internal_6f46550()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x4D]
        test bl, bl
        jne public_6f46575
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_6f46571
        public_6f46566 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_6f46566
        public_6f46571 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46575 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4658c
        nop 
        public_6f46580 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46580
        public_6f4658c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46595
        mov dword ptr ds : [ecx], eax
        public_6f46595 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46550)
    }
}

#undef public_6f46566
#undef public_6f46571
#undef public_6f46575
#undef public_6f46580
#undef public_6f4658c
#undef public_6f46595
