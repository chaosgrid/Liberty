#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);

#define public_6ea76f6 _public_6ea76f6
#define public_6ea7701 _public_6ea7701
#define public_6ea7705 _public_6ea7705
#define public_6ea7710 _public_6ea7710
#define public_6ea771c _public_6ea771c
#define public_6ea7725 _public_6ea7725

PROC_DECLARE(0x6ea76e0, internal_6ea76e0, public_6ea76e0);
extern "C" NAKED register_t __cdecl internal_6ea76e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x55]
        test bl, bl
        jne public_6ea7705
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_6ea7701
        public_6ea76f6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_6ea76f6
        public_6ea7701 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ea7705 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ea771c
        nop 
        public_6ea7710 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ea7710
        public_6ea771c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ea7725
        mov dword ptr ds : [ecx], eax
        public_6ea7725 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ea76e0)
    }
}

#undef public_6ea76f6
#undef public_6ea7701
#undef public_6ea7705
#undef public_6ea7710
#undef public_6ea771c
#undef public_6ea7725
