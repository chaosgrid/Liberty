#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594e90);

#define public_594ea9 _public_594ea9
#define public_594ec0 _public_594ec0
#define public_594ecc _public_594ecc
#define public_594ed0 _public_594ed0
#define public_594ee0 _public_594ee0
#define public_594eeb _public_594eeb

PROC_DECLARE(0x594e90, internal_594e90, public_594e90);
extern "C" NAKED register_t __cdecl internal_594e90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x10]
        test dl, dl
        push ebx
        jne public_594ea9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_594ea9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_594ea9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_594ed0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_594ecc
        lea esp, ss:[esp]
        public_594ec0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_594ec0
        public_594ecc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_594ed0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_594eeb
        lea esp, ss:[esp]
        public_594ee0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_594ee0
        public_594eeb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x594e90)
    }
}

#undef public_594ea9
#undef public_594ec0
#undef public_594ecc
#undef public_594ed0
#undef public_594ee0
#undef public_594eeb
