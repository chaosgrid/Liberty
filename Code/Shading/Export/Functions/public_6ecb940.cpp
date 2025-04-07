#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8440);
CLANG_FORWARD_PROC_SYMBOL(public_6ec84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec85a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecb960 _public_6ecb960
#define public_6ecb984 _public_6ecb984
#define public_6ecb988 _public_6ecb988
#define public_6ecb98d _public_6ecb98d
#define public_6ecb9f1 _public_6ecb9f1
#define public_6ecba0c _public_6ecba0c
#define public_6ecba2c _public_6ecba2c
#define public_6ecba33 _public_6ecba33
#define public_6ecba46 _public_6ecba46
#define public_6ecba57 _public_6ecba57

PROC_DECLARE(0x6ecb940, internal_6ecb940, public_6ecb940);
extern "C" NAKED register_t __cdecl internal_6ecb940()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6ecba46
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6ecb960 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ecb988
        test cl, cl
        je public_6ecb984
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ecb988
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecb960
        public_6ecb984 : nop
        xor eax, eax
        jmp public_6ecb98d
        public_6ecb988 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecb98d : nop
        test eax, eax
        pop ebx
        jne public_6ecba46
        push 0xA0
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ecba33
        mov ecx, esi
        call public_6ec8440
        lea eax, ds:[esi+0x94]
        mov dword ptr ds : [eax], offset public_6ed2e28
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed2dd8
        mov dword ptr ds : [esi+4], offset public_6ed2d68
        mov dword ptr ds : [esi+8], offset public_6ed2d54
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x90], ecx
        jne public_6ecba2c
        mov dword ptr ds : [esi+0x90], eax
        public_6ecb9f1 : nop
        push ebp
        mov ecx, esi
        call public_6ec85a0
        mov edi, eax
        test edi, edi
        je public_6ecba57
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ecba0c
        mov dword ptr ds : [eax], 0
        public_6ecba0c : nop
        mov ecx, esi
        call public_6ec84c0
        push esi
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6ecba2c : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ecb9f1
        public_6ecba33 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6ecba46 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6ecba57 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ecb940)
    }
}

#undef public_6ecb960
#undef public_6ecb984
#undef public_6ecb988
#undef public_6ecb98d
#undef public_6ecb9f1
#undef public_6ecba0c
#undef public_6ecba2c
#undef public_6ecba33
#undef public_6ecba46
#undef public_6ecba57
