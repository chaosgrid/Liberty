#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50f2a0);

#define public_50f2b6 _public_50f2b6
#define public_50f2c6 _public_50f2c6
#define public_50f2ec _public_50f2ec
#define public_50f2f1 _public_50f2f1
#define public_50f310 _public_50f310

PROC_DECLARE(0x50f2a0, internal_50f2a0, public_50f2a0);
extern "C" NAKED register_t __cdecl internal_50f2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2B0]
        fld dword ptr ds : [public_5c7474]
        test eax, eax
        jne public_50f2b6
        fstp st(0)
        fld dword ptr ds : [ecx+0x10]
        ret 
        public_50f2b6 : nop
        fld dword ptr ds : [ecx+0x10]
        cmp eax, 3
        lea eax, ds:[ecx+0x28]
        jge public_50f2ec
        mov ecx, 0xC
        public_50f2c6 : nop
        fxch 
        add eax, 0x18
        dec ecx
        fadd dword ptr ds : [eax-0x18]
        fxch 
        jne public_50f2c6
        fxch 
        fmul qword ptr ds : [public_5db5f8]
        fmul qword ptr ds : [public_5d7e50]
        fxch 
        fmul qword ptr ds : [public_5cf100]
        faddp 
        ret 
        public_50f2ec : nop
        mov edx, 0xC
        public_50f2f1 : nop
        fxch 
        add eax, 0x18
        dec edx
        fadd dword ptr ds : [eax-0x18]
        fxch 
        jne public_50f2f1
        lea eax, ds:[ecx+0x148]
        mov ecx, 0xC
        lea esp, ss:[esp]
        public_50f310 : nop
        fxch 
        add eax, 0x18
        dec ecx
        fadd dword ptr ds : [eax-0x18]
        fxch 
        jne public_50f310
        fxch 
        fmul qword ptr ds : [public_5db5f0]
        fmul qword ptr ds : [public_5d3ed8]
        fxch 
        fmul qword ptr ds : [public_5c7720]
        faddp 
        ret 
        UNREACHABLE_TRAP(0x50f2a0)
    }
}

#undef public_50f2b6
#undef public_50f2c6
#undef public_50f2ec
#undef public_50f2f1
#undef public_50f310
