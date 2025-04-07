#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4fa50);

PROC_DECLARE(0x6d4fa50, internal_6d4fa50, public_6d4fa50);
extern "C" NAKED register_t __cdecl internal_6d4fa50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0xC]
        movss xmm0, dword ptr ds : [eax]
        movss xmm1, dword ptr ds : [eax+4]
        movss xmm2, dword ptr ds : [eax+8]
        movss xmm3, dword ptr ds : [eax+0xC]
        movss xmm4, xmm0
        movss xmm5, xmm1
        movss xmm6, xmm2
        movss xmm7, xmm3
        mulss xmm4, xmm0
        mulss xmm5, xmm1
        mulss xmm6, xmm2
        addss xmm4, xmm5
        mulss xmm7, xmm3
        addss xmm6, xmm7
        addss xmm4, xmm6
        rsqrtss xmm5, xmm4
        movss xmm6, xmm5
        mulss xmm5, xmm5
        mulss xmm4, xmm5
        movss xmm5, dword ptr ds : [public_6d6e480]
        subss xmm5, xmm4
        mulss xmm5, dword ptr ds : [public_6d6e470]
        mulss xmm5, xmm6
        mov eax, dword ptr ss : [ebp+8]
        mulss xmm0, xmm5
        mulss xmm1, xmm5
        movss dword ptr ds : [eax], xmm0
        mulss xmm2, xmm5
        movss dword ptr ds : [eax+4], xmm1
        mulss xmm3, xmm5
        movss dword ptr ds : [eax+8], xmm2
        movss dword ptr ds : [eax+0xC], xmm3
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d4fa50)
    }
}
