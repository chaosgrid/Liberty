#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a10);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62c6f9f _public_62c6f9f
#define public_62c6fa5 _public_62c6fa5

PROC_DECLARE(0x62c6ee0, internal_62c6ee0, public_62c6ee0);
extern "C" NAKED register_t __cdecl internal_62c6ee0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_62d20d0
        or byte ptr ds : [esi+0x28], 2
        lea edi, ds:[esi+0x2C]
        xor ebx, ebx
        push 0x40490FDB
        mov ecx, edi
        mov byte ptr ds : [esi+0x365], 1
        mov byte ptr ds : [esi+0x3FC], bl
        call public_63275f0
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0x358], ebx
        call public_62a66b0
        push ebx
        mov ecx, edi
        call public_62d5a10
        push 2
        mov ecx, edi
        call public_62d88b0
        mov ecx, dword ptr ds : [esi+0x24]
        push 3
        add ecx, 0x18
        call public_6263bc0
        mov ecx, esi
        push eax
        call public_62d21d0
        mov dword ptr ds : [esi+0x2F4], 1
        mov byte ptr ds : [esi+0x2EA], 1
        mov dword ptr ds : [esi+0x2D8], ebx
        mov dword ptr ds : [esi+0x2DC], ebx
        mov dword ptr ds : [esi+0x2E0], ebx
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        lea edi, ds:[esi+0x2E4]
        push edi
        call dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x2E8]
        push eax
        call dword ptr ds : [edx+0x60]
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62c6f9f
        mov dword ptr ds : [edi], 0x3F800000
        mov byte ptr ds : [esi+0x2EC], 1
        jmp public_62c6fa5
        public_62c6f9f : nop
        mov byte ptr ds : [esi+0x2EC], bl
        public_62c6fa5 : nop
        mov eax, 0x49742400
        pop edi
        mov dword ptr ds : [esi+0x304], eax
        mov dword ptr ds : [esi+0x308], eax
        mov dword ptr ds : [esi+0x30C], eax
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62c6ee0)
    }
}

#undef public_62c6f9f
#undef public_62c6fa5
