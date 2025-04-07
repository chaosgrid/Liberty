#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da3590);
CLANG_FORWARD_JUMP_SYMBOL(public_6db29f1);

#define public_6da35e5 _public_6da35e5
#define public_6da35f3 _public_6da35f3
#define public_6da3606 _public_6da3606
#define public_6da363d _public_6da363d
#define public_6da364a _public_6da364a
#define public_6da365e _public_6da365e
#define public_6da367a _public_6da367a
#define public_6da368e _public_6da368e
#define public_6da36ac _public_6da36ac
#define public_6da36cd _public_6da36cd
#define public_6da36d6 _public_6da36d6

PROC_DECLARE(0x6da3590, internal_6da3590, public_6da3590);
extern "C" NAKED register_t __cdecl internal_6da3590()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db29f1 @0x6da3592*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db29f1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6da36d6
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_6db3154]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_6da35e5
        mov ebx, esi
        public_6da35e5 : nop
        cmp ebp, edi
        jne public_6da364a
        cmp ebx, ecx
        jbe public_6da35f3
        call dword ptr ds : [public_6db3150]
        public_6da35f3 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6db3164]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6da3606
        mov esi, eax
        public_6da3606 : nop
        test esi, esi
        jbe public_6da363d
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6db31dc]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6db3160]
        test al, al
        je public_6da363d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6db3148]
        public_6da363d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6db3164]
        jmp public_6da36cd
        public_6da364a : nop
        cmp ebx, ecx
        jbe public_6da368e
        cmp ebx, eax
        jne public_6da368e
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6da365e
        mov eax, dword ptr ds : [public_6db3144]
        public_6da365e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6da368e
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6db31b0]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6da367a
        mov eax, dword ptr ds : [public_6db3144]
        public_6da367a : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6da36cd
        public_6da368e : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6db3160]
        test al, al
        je public_6da36cd
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6db3144]
        je public_6da36ac
        mov esi, edi
        public_6da36ac : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6da36cd : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_6da36d6 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6da3590)
    }
}

#undef public_6da35e5
#undef public_6da35f3
#undef public_6da3606
#undef public_6da363d
#undef public_6da364a
#undef public_6da365e
#undef public_6da367a
#undef public_6da368e
#undef public_6da36ac
#undef public_6da36cd
#undef public_6da36d6
