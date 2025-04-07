#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f220);

PROC_DECLARE(0x6d4f220, internal_6d4f220, public_6d4f220);
extern "C" NAKED register_t __cdecl internal_6d4f220()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        movups xmm3, xmmword ptr ds : [ecx]
        movss xmm2, dword ptr ds : [eax]
        shufps xmm2, xmm2, 0
        movups xmm4, xmmword ptr ds : [ecx+0x10]
        mulps xmm2, xmm3
        movss xmm1, dword ptr ds : [eax+4]
        shufps xmm1, xmm1, 0
        movups xmm3, xmmword ptr ds : [ecx+0x30]
        mulps xmm1, xmm4
        mov eax, dword ptr ss : [ebp+8]
        addps xmm2, xmm3
        addps xmm2, xmm1
        rcpps xmm0, xmm2
        movaps xmm1, xmm0
        mulps xmm1, xmm0
        addps xmm0, xmm0
        mulps xmm1, xmm2
        subps xmm0, xmm1
        shufps xmm1, xmm1, 0xFF
        mulps xmm2, xmm1
        movlps qword ptr ds : [eax], xmm2
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d4f220)
    }
}
