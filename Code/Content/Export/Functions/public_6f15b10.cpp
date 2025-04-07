#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b10);

#define public_6f15b30 _public_6f15b30
#define public_6f15b3b _public_6f15b3b
#define public_6f15b40 _public_6f15b40
#define public_6f15b60 _public_6f15b60
#define public_6f15b64 _public_6f15b64
#define public_6f15b69 _public_6f15b69
#define public_6f15b6b _public_6f15b6b
#define public_6f15b81 _public_6f15b81
#define public_6f15b84 _public_6f15b84

PROC_DECLARE(0x6f15b10, internal_6f15b10, public_6f15b10);
extern "C" NAKED register_t __cdecl internal_6f15b10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0xD4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ebx]
        xor eax, eax
        cmp edi, ebx
        je public_6f15b84
        mov eax, dword ptr ss : [esp+0x14]
        lea ebp, ds:[eax+4]
        lea esp, ss:[esp]
        public_6f15b30 : nop
        test ebp, ebp
        jne public_6f15b3b
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jmp public_6f15b6b
        public_6f15b3b : nop
        mov esi, ebp
        lea ecx, ds:[edi+0xC]
        public_6f15b40 : nop
        mov al, byte ptr ds : [ecx]
        mov dl, al
        cmp al, byte ptr ds : [esi]
        jne public_6f15b64
        test dl, dl
        je public_6f15b60
        mov al, byte ptr ds : [ecx+1]
        mov dl, al
        cmp al, byte ptr ds : [esi+1]
        jne public_6f15b64
        add ecx, 2
        add esi, 2
        test dl, dl
        jne public_6f15b40
        public_6f15b60 : nop
        xor ecx, ecx
        jmp public_6f15b69
        public_6f15b64 : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_6f15b69 : nop
        test ecx, ecx
        public_6f15b6b : nop
        sete cl
        test cl, cl
        jne public_6f15b81
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6f15b30
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_6f15b81 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        public_6f15b84 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f15b10)
    }
}

#undef public_6f15b30
#undef public_6f15b3b
#undef public_6f15b40
#undef public_6f15b60
#undef public_6f15b64
#undef public_6f15b69
#undef public_6f15b6b
#undef public_6f15b81
#undef public_6f15b84
