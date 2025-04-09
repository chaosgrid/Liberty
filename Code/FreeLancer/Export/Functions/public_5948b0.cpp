#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5948b0);

#define public_5948c6 _public_5948c6
#define public_5948d1 _public_5948d1
#define public_5948d5 _public_5948d5
#define public_5948e0 _public_5948e0
#define public_5948ec _public_5948ec
#define public_5948f5 _public_5948f5

PROC_DECLARE(0x5948b0, internal_5948b0, public_5948b0);
extern "C" NAKED register_t __cdecl internal_5948b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_5948d5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_5948d1
        public_5948c6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_5948c6
        public_5948d1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_5948d5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_5948ec
        nop 
        public_5948e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_5948e0
        public_5948ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_5948f5
        mov dword ptr ds : [ecx], eax
        public_5948f5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5948b0)
    }
}

#undef public_5948c6
#undef public_5948d1
#undef public_5948d5
#undef public_5948e0
#undef public_5948ec
#undef public_5948f5
