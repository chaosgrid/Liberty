#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7570);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);

#define public_6ac6be8 _public_6ac6be8
#define public_6ac6c30 _public_6ac6c30

PROC_DECLARE(0x6ac6bb0, internal_6ac6bb0, public_6ac6bb0);
extern "C" NAKED register_t __cdecl internal_6ac6bb0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        push ebx
        mov edi, dword ptr ds : [esi]
        push ebp
        call public_6ac7e60
        test eax, eax
        je public_6ac6be8
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ebx
        push ecx
        call public_6ac7570
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        ret 0x10
        public_6ac6be8 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push 2
        push ebx
        push ebp
        call public_6ac3140
        test eax, eax
        je public_6ac6c30
        push esi
        lea edx, ds:[ebx+edi*8]
        push 1
        lea eax, ds:[esi+0x12C]
        push edx
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac6c30
        lea ecx, ds:[edi+edi*2]
        push esi
        push 2
        lea edx, ds:[ebx+ecx*4]
        push edx
        call public_6ac3110
        test eax, eax
        je public_6ac6c30
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x10
        public_6ac6c30 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac6bb0)
    }
}

#undef public_6ac6be8
#undef public_6ac6c30
