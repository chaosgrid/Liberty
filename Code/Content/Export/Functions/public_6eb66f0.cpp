#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb66f0);

#define public_6eb6706 _public_6eb6706
#define public_6eb6711 _public_6eb6711
#define public_6eb6715 _public_6eb6715
#define public_6eb6720 _public_6eb6720
#define public_6eb672c _public_6eb672c
#define public_6eb6735 _public_6eb6735

PROC_DECLARE(0x6eb66f0, internal_6eb66f0, public_6eb66f0);
extern "C" NAKED register_t __cdecl internal_6eb66f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_6eb6715
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6eb6711
        public_6eb6706 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6eb6706
        public_6eb6711 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6eb6715 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eb672c
        nop 
        public_6eb6720 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eb6720
        public_6eb672c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eb6735
        mov dword ptr ds : [ecx], eax
        public_6eb6735 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb66f0)
    }
}

#undef public_6eb6706
#undef public_6eb6711
#undef public_6eb6715
#undef public_6eb6720
#undef public_6eb672c
#undef public_6eb6735
