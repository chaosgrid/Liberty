#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d591b0);

#define public_6d50ee1 _public_6d50ee1

PROC_DECLARE(0x6d50ed0, internal_6d50ed0, public_6d50ed0);
extern "C" NAKED register_t __cdecl internal_6d50ed0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50ee1
        push ebx
        mov ebx, esp
        public_6d50ee1 : nop
        push ebp
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+4], ebp
        mov ebp, esp
        sub esp, 0x50
        movss xmm0, dword ptr ds : [ebx+0xC]
        movaps xmm1, xmmword ptr ds : [public_6d75210]
        shufps xmm0, xmm0, 0
        movaps xmmword ptr ss : [ebp-0x20], xmm1
        movaps xmm1, xmmword ptr ds : [public_6d75200]
        add esp, 0xFFFFFFF0
        movaps xmmword ptr ss : [ebp-0x30], xmm1
        call public_6d591b0
        shufps xmm0, xmm0, 0x50
        movaps xmm1, xmmword ptr ss : [ebp-0x30]
        andps xmm0, xmmword ptr ss : [ebp-0x20]
        xorps xmm1, xmm0
        mov eax, dword ptr ds : [ebx+8]
        movups xmmword ptr ds : [eax], xmm1
        movaps xmm1, xmmword ptr ds : [public_6d751f0]
        movups xmmword ptr ds : [eax+0x10], xmm1
        movaps xmm1, xmmword ptr ds : [public_6d751e0]
        shufps xmm0, xmm0, 0x46
        movups xmmword ptr ds : [eax+0x20], xmm0
        movups xmmword ptr ds : [eax+0x30], xmm1
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d50ed0)
    }
}

#undef public_6d50ee1
