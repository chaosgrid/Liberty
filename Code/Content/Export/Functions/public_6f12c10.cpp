#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed01c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f12c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f12c40 _public_6f12c40
#define public_6f12c93 _public_6f12c93
#define public_6f12cb0 _public_6f12cb0
#define public_6f12cb3 _public_6f12cb3
#define public_6f12cb7 _public_6f12cb7
#define public_6f12ccf _public_6f12ccf
#define public_6f12ce0 _public_6f12ce0
#define public_6f12ce7 _public_6f12ce7
#define public_6f12d40 _public_6f12d40
#define public_6f12d49 _public_6f12d49
#define public_6f12d50 _public_6f12d50
#define public_6f12d70 _public_6f12d70
#define public_6f12d74 _public_6f12d74
#define public_6f12d79 _public_6f12d79
#define public_6f12d7d _public_6f12d7d
#define public_6f12d96 _public_6f12d96
#define public_6f12d99 _public_6f12d99
#define public_6f12daf _public_6f12daf
#define public_6f12dc0 _public_6f12dc0
#define public_6f12dc7 _public_6f12dc7
#define public_6f12dfc _public_6f12dfc

PROC_DECLARE(0x6f12c10, internal_6f12c10, public_6f12c10);
extern "C" NAKED register_t __cdecl internal_6f12c10()
{
    __asm
    {
        sub esp, 0x18
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x16C]
        push edi
        mov edi, dword ptr ss : [ebp+0x168]
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], edi
        je public_6f12dfc
        push ebx
        lea ebx, ds:[edi+0x34]
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        lea esp, ss:[esp]
        public_6f12c40 : nop
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], eax
        cmp dword ptr ds : [edi], 0
        je public_6f12ce0
        lea eax, ss:[ebp+0xC]
        push eax
        xor esi, esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f12ccf
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f12ccf
        push edi
        mov ecx, ebp
        call public_6f15940
        mov esi, eax
        test esi, 0x3FFFFFFF
        jne public_6f12ccf
        mov eax, dword ptr ss : [ebp+0xD4]
        mov esi, dword ptr ds : [eax]
        xor edi, edi
        cmp esi, eax
        je public_6f12cb7
        add ebx, 0xFFFFFFD0
        public_6f12c93 : nop
        push ebx
        lea ecx, ds:[esi+8]
        call public_6ed01c0
        test al, al
        mov ebp, dword ptr ss : [esp+0x20]
        jne public_6f12cb0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xD4]
        jne public_6f12c93
        jmp public_6f12cb3
        public_6f12cb0 : nop
        mov edi, dword ptr ds : [esi+0x3C]
        public_6f12cb3 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f12cb7 : nop
        mov esi, edi
        test esi, 0x3FFFFFFF
        mov edi, dword ptr ss : [esp+0x1C]
        jne public_6f12ccf
        push edi
        mov ecx, ebp
        call public_6f159f0
        mov esi, eax
        public_6f12ccf : nop
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        jmp public_6f12ce7
        public_6f12ce0 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [esp+0x18], eax
        public_6f12ce7 : nop
        cmp dword ptr ds : [ebx], 0
        je public_6f12dc0
        lea ecx, ss:[ebp+0xC]
        push ecx
        xor esi, esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f12daf
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f12daf
        push ebx
        mov ecx, ebp
        call public_6f15940
        mov esi, eax
        test esi, 0x3FFFFFFF
        jne public_6f12daf
        mov eax, dword ptr ss : [ebp+0xD4]
        mov edi, dword ptr ds : [eax]
        xor esi, esi
        cmp edi, eax
        mov dword ptr ss : [esp+0x24], esi
        je public_6f12d99
        lea edx, ds:[ebx+4]
        nop 
        public_6f12d40 : nop
        test edx, edx
        jne public_6f12d49
        mov eax, dword ptr ds : [edi+8]
        jmp public_6f12d7d
        public_6f12d49 : nop
        mov esi, edx
        lea eax, ds:[edi+0xC]
        mov edi, edi
        public_6f12d50 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f12d74
        test cl, cl
        je public_6f12d70
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f12d74
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f12d50
        public_6f12d70 : nop
        xor eax, eax
        jmp public_6f12d79
        public_6f12d74 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f12d79 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f12d7d : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f12d96
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0xD4]
        jne public_6f12d40
        mov esi, dword ptr ss : [esp+0x24]
        jmp public_6f12d99
        public_6f12d96 : nop
        mov esi, dword ptr ds : [edi+0x3C]
        public_6f12d99 : nop
        test esi, 0x3FFFFFFF
        mov edi, dword ptr ss : [esp+0x1C]
        jne public_6f12daf
        push ebx
        mov ecx, ebp
        call public_6f159f0
        mov esi, eax
        public_6f12daf : nop
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        jmp public_6f12dc7
        public_6f12dc0 : nop
        mov ecx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [esp+0x14], ecx
        public_6f12dc7 : nop
        mov edx, dword ptr ds : [ebx+0x3C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call dword ptr ds : [public_6fb33f4]
        mov eax, dword ptr ss : [ebp+0x16C]
        add edi, 0x74
        add ebx, 0x74
        add esp, 0xC
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6f12c40
        pop esi
        pop ebx
        public_6f12dfc : nop
        pop edi
        pop ebp
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f12c10)
    }
}

#undef public_6f12c40
#undef public_6f12c93
#undef public_6f12cb0
#undef public_6f12cb3
#undef public_6f12cb7
#undef public_6f12ccf
#undef public_6f12ce0
#undef public_6f12ce7
#undef public_6f12d40
#undef public_6f12d49
#undef public_6f12d50
#undef public_6f12d70
#undef public_6f12d74
#undef public_6f12d79
#undef public_6f12d7d
#undef public_6f12d96
#undef public_6f12d99
#undef public_6f12daf
#undef public_6f12dc0
#undef public_6f12dc7
#undef public_6f12dfc
