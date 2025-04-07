#include "Content-PCH.h"


#define public_6eef6f9 _public_6eef6f9
#define public_6eef703 _public_6eef703
#define public_6eef721 _public_6eef721
#define public_6eef723 _public_6eef723

PROC_DECLARE(0x6eef6e0, internal_6eef6e0, public_6eef6e0);
extern "C" NAKED register_t __cdecl internal_6eef6e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x290]
        test edx, edx
        je public_6eef6f9
        mov eax, dword ptr ds : [ecx+0x294]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jne public_6eef703
        public_6eef6f9 : nop
        mov eax, dword ptr ds : [ecx+0x244]
        mov eax, dword ptr ds : [eax+0x48]
        ret 
        public_6eef703 : nop
        mov ecx, dword ptr ds : [ecx+0x290]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_6fcf254]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6eef721
        lea ecx, ds:[eax-0x10]
        jmp public_6eef723
        public_6eef721 : nop
        xor ecx, ecx
        public_6eef723 : nop
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+0x20]
        UNREACHABLE_TRAP(0x6eef6e0)
    }
}

#undef public_6eef6f9
#undef public_6eef703
#undef public_6eef721
#undef public_6eef723
