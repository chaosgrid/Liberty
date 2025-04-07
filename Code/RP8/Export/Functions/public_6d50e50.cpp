#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d591b0);

#define public_6d50e61 _public_6d50e61

PROC_DECLARE(0x6d50e50, internal_6d50e50, public_6d50e50);
extern "C" NAKED register_t __cdecl internal_6d50e50()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50e61
        push ebx
        mov ebx, esp
        public_6d50e61 : nop
        push ebp
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+4], ebp
        mov ebp, esp
        sub esp, 0x30
        movss xmm0, dword ptr ds : [ebx+0xC]
        add esp, 0xFFFFFFF0
        shufps xmm0, xmm0, 0
        call public_6d591b0
        movaps xmm1, xmmword ptr ds : [public_6d751d0]
        movaps xmm2, xmmword ptr ds : [public_6d751b0]
        mov eax, dword ptr ds : [ebx+8]
        movaps xmm3, xmm0
        movaps xmm0, xmmword ptr ds : [public_6d751c0]
        movups xmmword ptr ds : [eax], xmm1
        movss dword ptr ds : [eax+0x10], xmm0
        movaps xmm1, xmm3
        movlps qword ptr ds : [eax+0x14], xmm1
        shufps xmm1, xmm1, 0x11
        movlps qword ptr ds : [eax+0x1C], xmm0
        xorps xmm1, xmm2
        movss dword ptr ds : [eax+0x2C], xmm0
        movlps qword ptr ds : [eax+0x24], xmm1
        movups xmmword ptr ds : [eax+0x30], xmm0
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d50e50)
    }
}

#undef public_6d50e61
