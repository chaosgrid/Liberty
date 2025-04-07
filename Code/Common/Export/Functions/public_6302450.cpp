#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302450);

#define public_6302469 _public_6302469
#define public_6302480 _public_6302480
#define public_630248c _public_630248c
#define public_6302490 _public_6302490
#define public_63024a0 _public_63024a0
#define public_63024ab _public_63024ab

PROC_DECLARE(0x6302450, internal_6302450, public_6302450);
extern "C" NAKED register_t __cdecl internal_6302450()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x30]
        test dl, dl
        push ebx
        jne public_6302469
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6302469
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6302469 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x31]
        test bl, bl
        jne public_6302490
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_630248c
        lea esp, ss:[esp]
        public_6302480 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_6302480
        public_630248c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6302490 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_63024ab
        lea esp, ss:[esp]
        public_63024a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_63024a0
        public_63024ab : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6302450)
    }
}

#undef public_6302469
#undef public_6302480
#undef public_630248c
#undef public_6302490
#undef public_63024a0
#undef public_63024ab
