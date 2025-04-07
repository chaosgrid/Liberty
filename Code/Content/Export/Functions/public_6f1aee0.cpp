#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f1af42 _public_6f1af42
#define public_6f1af4b _public_6f1af4b
#define public_6f1af50 _public_6f1af50
#define public_6f1af70 _public_6f1af70
#define public_6f1af74 _public_6f1af74
#define public_6f1af79 _public_6f1af79
#define public_6f1af7d _public_6f1af7d
#define public_6f1af96 _public_6f1af96
#define public_6f1af99 _public_6f1af99
#define public_6f1afae _public_6f1afae
#define public_6f1afd9 _public_6f1afd9

PROC_DECLARE(0x6f1aee0, internal_6f1aee0, public_6f1aee0);
extern "C" NAKED register_t __cdecl internal_6f1aee0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+0x14]
        push esi
        push edi
        lea eax, ss:[ebp+0xC]
        push eax
        mov dword ptr ss : [esp+0x18], ebx
        lea edi, ds:[ebx+0x38]
        xor esi, esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1afae
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f1afae
        push edi
        mov ecx, ebp
        call public_6f15940
        mov esi, eax
        test esi, 0x3FFFFFFF
        jne public_6f1afae
        mov eax, dword ptr ss : [ebp+0xD4]
        mov edi, dword ptr ds : [eax]
        xor esi, esi
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], esi
        je public_6f1af99
        lea edx, ds:[ebx+0x3C]
        public_6f1af42 : nop
        test edx, edx
        jne public_6f1af4b
        mov eax, dword ptr ds : [edi+8]
        jmp public_6f1af7d
        public_6f1af4b : nop
        mov esi, edx
        lea eax, ds:[edi+0xC]
        public_6f1af50 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f1af74
        test cl, cl
        je public_6f1af70
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f1af74
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f1af50
        public_6f1af70 : nop
        xor eax, eax
        jmp public_6f1af79
        public_6f1af74 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f1af79 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f1af7d : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f1af96
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0xD4]
        jne public_6f1af42
        mov esi, dword ptr ss : [esp+0x18]
        jmp public_6f1af99
        public_6f1af96 : nop
        mov esi, dword ptr ds : [edi+0x3C]
        public_6f1af99 : nop
        test esi, 0x3FFFFFFF
        jne public_6f1afae
        lea eax, ds:[ebx+0x38]
        push eax
        mov ecx, ebp
        call public_6f159f0
        mov esi, eax
        public_6f1afae : nop
        test esi, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_6f1afd9
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        test eax, eax
        je public_6f1afd9
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        public_6f1afd9 : nop
        mov edi, dword ptr ds : [public_6fb3068]
        lea esi, ds:[ebx+0x20]
        mov ecx, esi
        call edi
        mov ecx, esi
        call edi
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3178]
        add ebx, 0x6C
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3174]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f1aee0)
    }
}

#undef public_6f1af42
#undef public_6f1af4b
#undef public_6f1af50
#undef public_6f1af70
#undef public_6f1af74
#undef public_6f1af79
#undef public_6f1af7d
#undef public_6f1af96
#undef public_6f1af99
#undef public_6f1afae
#undef public_6f1afd9
