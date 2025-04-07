#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ff40);

PROC_DECLARE(0x6d4ff40, internal_6d4ff40, public_6d4ff40);
extern "C" NAKED register_t __cdecl internal_6d4ff40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        movss xmm0, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0xC]
        shufps xmm0, xmm0, 0
        mov ecx, dword ptr ss : [ebp+0x10]
        movups xmm2, xmmword ptr ds : [eax]
        movss xmm1, dword ptr ss : [ebp+0x1C]
        movups xmm3, xmmword ptr ds : [ecx]
        shufps xmm1, xmm1, 0
        mov eax, dword ptr ss : [ebp+0x14]
        subps xmm3, xmm2
        movups xmm4, xmmword ptr ds : [eax]
        mulps xmm3, xmm0
        subps xmm4, xmm2
        mov eax, dword ptr ss : [ebp+8]
        addps xmm3, xmm2
        mulps xmm4, xmm1
        addps xmm3, xmm4
        movups xmmword ptr ds : [eax], xmm3
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d4ff40)
    }
}
