#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d7bb);

#define public_6d4d7d7 _public_6d4d7d7
#define public_6d4d7e4 _public_6d4d7e4
#define public_6d4d814 _public_6d4d814
#define public_6d4d81c _public_6d4d81c
#define public_6d4d822 _public_6d4d822

PROC_DECLARE(0x6d4d7bb, internal_6d4d7bb, public_6d4d7bb);
extern "C" NAKED register_t __cdecl internal_6d4d7bb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A4]
        push ebx
        mov ebx, dword ptr ds : [eax+0x5C]
        push esi
        mov esi, dword ptr ds : [ecx+0x18]
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp+0x14], edi
        jle public_6d4d822
        public_6d4d7d7 : nop
        test ebx, ebx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        jbe public_6d4d81c
        mov dword ptr ss : [ebp+8], ebx
        public_6d4d7e4 : nop
        movzx eax, byte ptr ds : [ecx+1]
        movzx edx, byte ptr ds : [ecx+2]
        shr edx, 3
        shr eax, 2
        shl eax, 5
        add eax, edx
        movzx edx, byte ptr ds : [ecx]
        shr edx, 3
        mov edx, dword ptr ds : [esi+edx*4]
        lea eax, ds:[edx+eax*2]
        inc word ptr ds : [eax]
        xor edx, edx
        mov dx, word ptr ds : [eax]
        test dx, dx
        ja public_6d4d814
        dec edx
        mov word ptr ds : [eax], dx
        public_6d4d814 : nop
        add ecx, 3
        dec dword ptr ss : [ebp+8]
        jne public_6d4d7e4
        public_6d4d81c : nop
        inc edi
        cmp edi, dword ptr ss : [ebp+0x14]
        jl public_6d4d7d7
        public_6d4d822 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4d7bb)
    }
}

#undef public_6d4d7d7
#undef public_6d4d7e4
#undef public_6d4d814
#undef public_6d4d81c
#undef public_6d4d822
