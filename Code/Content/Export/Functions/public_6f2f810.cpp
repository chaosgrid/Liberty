#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f810);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ff40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2f83e _public_6f2f83e
#define public_6f2f844 _public_6f2f844
#define public_6f2f862 _public_6f2f862
#define public_6f2f87c _public_6f2f87c

PROC_DECLARE(0x6f2f810, internal_6f2f810, public_6f2f810);
extern "C" NAKED register_t __cdecl internal_6f2f810()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6f2f83e
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f2f83e : nop
        test eax, eax
        jge public_6f2f844
        xor eax, eax
        public_6f2f844 : nop
        imul eax, 0x98
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f2f87c
        public_6f2f862 : nop
        push esi
        push edi
        call public_6f2ff40
        add esi, 0x98
        add esp, 8
        add edi, 0x98
        cmp esi, ebx
        jne public_6f2f862
        public_6f2f87c : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2f810)
    }
}

#undef public_6f2f83e
#undef public_6f2f844
#undef public_6f2f862
#undef public_6f2f87c
