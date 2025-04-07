#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630df60);
CLANG_FORWARD_PROC_SYMBOL(public_6312ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6312d80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6312cf5 _public_6312cf5
#define public_6312d11 _public_6312d11
#define public_6312d1c _public_6312d1c
#define public_6312d24 _public_6312d24
#define public_6312d6b _public_6312d6b

PROC_DECLARE(0x6312ce0, internal_6312ce0, public_6312ce0);
extern "C" NAKED register_t __cdecl internal_6312ce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        test esi, esi
        push edi
        mov ebp, ecx
        mov edi, 6
        je public_6312d24
        public_6312cf5 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6312d11
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6312d1c
        public_6312d11 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6312d80
        add eax, 3
        public_6312d1c : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6312cf5
        public_6312d24 : nop
        push edi
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov ebx, eax
        push edi
        push ebx
        call public_630df60
        test eax, eax
        je public_6312d6b
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        add esi, eax
        sub edx, eax
        add ecx, eax
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], edx
        mov dword ptr ss : [ebp+0x10], ecx
        public_6312d6b : nop
        push ebx
        call public_6391d5a
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6312ce0)
    }
}

#undef public_6312cf5
#undef public_6312d11
#undef public_6312d1c
#undef public_6312d24
#undef public_6312d6b
