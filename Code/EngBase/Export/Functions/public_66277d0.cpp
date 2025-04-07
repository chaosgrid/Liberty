#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66277d0);

#define public_66277e6 _public_66277e6
#define public_66277f1 _public_66277f1
#define public_66277f5 _public_66277f5
#define public_66277ff _public_66277ff
#define public_662780b _public_662780b
#define public_6627814 _public_6627814

PROC_DECLARE(0x66277d0, internal_66277d0, public_66277d0);
extern "C" NAKED register_t __cdecl internal_66277d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_66277f5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_66277f1
        public_66277e6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_66277e6
        public_66277f1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_66277f5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_662780b
        public_66277ff : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_66277ff
        public_662780b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6627814
        mov dword ptr ds : [ecx], eax
        public_6627814 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66277d0)
    }
}

#undef public_66277e6
#undef public_66277f1
#undef public_66277f5
#undef public_66277ff
#undef public_662780b
#undef public_6627814
