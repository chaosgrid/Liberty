#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430450);

#define public_430470 _public_430470
#define public_43047e _public_43047e
#define public_430482 _public_430482
#define public_430490 _public_430490
#define public_43049c _public_43049c
#define public_4304a5 _public_4304a5

PROC_DECLARE(0x430450, internal_430450, public_430450);
extern "C" NAKED register_t __cdecl internal_430450()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x91]
        test bl, bl
        jne public_430482
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x91]
        test bl, bl
        jne public_43047e
        lea esp, ss:[esp]
        public_430470 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x91]
        test bl, bl
        je public_430470
        public_43047e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_430482 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_43049c
        lea esp, ss:[esp]
        public_430490 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_430490
        public_43049c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4304a5
        mov dword ptr ds : [ecx], eax
        public_4304a5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x430450)
    }
}

#undef public_430470
#undef public_43047e
#undef public_430482
#undef public_430490
#undef public_43049c
#undef public_4304a5
