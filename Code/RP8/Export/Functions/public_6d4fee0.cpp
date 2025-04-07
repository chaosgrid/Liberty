#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4fee0);

PROC_DECLARE(0x6d4fee0, internal_6d4fee0, public_6d4fee0);
extern "C" NAKED register_t __cdecl internal_6d4fee0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        movss xmm0, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0xC]
        shufps xmm0, xmm0, 0
        movss xmm2, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp+0x10]
        movhps xmm2, qword ptr ds : [eax]
        movss xmm1, dword ptr ss : [ebp+0x1C]
        movss xmm3, dword ptr ds : [ecx+8]
        movhps xmm3, qword ptr ds : [ecx]
        shufps xmm1, xmm1, 0
        mov eax, dword ptr ss : [ebp+0x14]
        subps xmm3, xmm2
        movss xmm4, dword ptr ds : [eax+8]
        movhps xmm4, qword ptr ds : [eax]
        mulps xmm3, xmm0
        subps xmm4, xmm2
        mov eax, dword ptr ss : [ebp+8]
        addps xmm3, xmm2
        mulps xmm4, xmm1
        addps xmm3, xmm4
        movss dword ptr ds : [eax+8], xmm3
        movhps qword ptr ds : [eax], xmm3
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d4fee0)
    }
}
