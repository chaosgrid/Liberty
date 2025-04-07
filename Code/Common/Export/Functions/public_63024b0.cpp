#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63024b0);

#define public_63024c9 _public_63024c9
#define public_63024e0 _public_63024e0
#define public_63024ec _public_63024ec
#define public_63024f0 _public_63024f0
#define public_6302500 _public_6302500
#define public_630250b _public_630250b

PROC_DECLARE(0x63024b0, internal_63024b0, public_63024b0);
extern "C" NAKED register_t __cdecl internal_63024b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x50]
        test dl, dl
        push ebx
        jne public_63024c9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_63024c9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_63024c9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x51]
        test bl, bl
        jne public_63024f0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_63024ec
        lea esp, ss:[esp]
        public_63024e0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_63024e0
        public_63024ec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_63024f0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_630250b
        lea esp, ss:[esp]
        public_6302500 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6302500
        public_630250b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63024b0)
    }
}

#undef public_63024c9
#undef public_63024e0
#undef public_63024ec
#undef public_63024f0
#undef public_6302500
#undef public_630250b
