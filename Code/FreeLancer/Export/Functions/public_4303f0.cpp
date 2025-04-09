#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4303f0);

#define public_43040c _public_43040c
#define public_430425 _public_430425
#define public_430434 _public_430434
#define public_430438 _public_430438
#define public_430441 _public_430441
#define public_43044c _public_43044c

PROC_DECLARE(0x4303f0, internal_4303f0, public_4303f0);
extern "C" NAKED register_t __cdecl internal_4303f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x90]
        test dl, dl
        push ebx
        jne public_43040c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_43040c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_43040c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x91]
        test bl, bl
        jne public_430438
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x91]
        test bl, bl
        jne public_430434
        public_430425 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x91]
        test bl, bl
        je public_430425
        public_430434 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_430438 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_43044c
        public_430441 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_430441
        public_43044c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4303f0)
    }
}

#undef public_43040c
#undef public_430425
#undef public_430434
#undef public_430438
#undef public_430441
#undef public_43044c
