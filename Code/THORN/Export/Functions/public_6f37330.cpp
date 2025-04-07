#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37330);

#define public_6f37346 _public_6f37346
#define public_6f37351 _public_6f37351
#define public_6f37355 _public_6f37355
#define public_6f37360 _public_6f37360
#define public_6f3736c _public_6f3736c
#define public_6f37375 _public_6f37375

PROC_DECLARE(0x6f37330, internal_6f37330, public_6f37330);
extern "C" NAKED register_t __cdecl internal_6f37330()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6f37355
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f37351
        public_6f37346 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f37346
        public_6f37351 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f37355 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f3736c
        nop 
        public_6f37360 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f37360
        public_6f3736c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f37375
        mov dword ptr ds : [ecx], eax
        public_6f37375 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f37330)
    }
}

#undef public_6f37346
#undef public_6f37351
#undef public_6f37355
#undef public_6f37360
#undef public_6f3736c
#undef public_6f37375
