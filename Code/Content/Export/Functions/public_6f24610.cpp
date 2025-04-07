#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24610);

#define public_6f24630 _public_6f24630
#define public_6f2463e _public_6f2463e
#define public_6f24642 _public_6f24642
#define public_6f24650 _public_6f24650
#define public_6f2465c _public_6f2465c
#define public_6f24665 _public_6f24665

PROC_DECLARE(0x6f24610, internal_6f24610, public_6f24610);
extern "C" NAKED register_t __cdecl internal_6f24610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x135]
        test bl, bl
        jne public_6f24642
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        jne public_6f2463e
        lea esp, ss:[esp]
        public_6f24630 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        je public_6f24630
        public_6f2463e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f24642 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f2465c
        lea esp, ss:[esp]
        public_6f24650 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f24650
        public_6f2465c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f24665
        mov dword ptr ds : [ecx], eax
        public_6f24665 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f24610)
    }
}

#undef public_6f24630
#undef public_6f2463e
#undef public_6f24642
#undef public_6f24650
#undef public_6f2465c
#undef public_6f24665
