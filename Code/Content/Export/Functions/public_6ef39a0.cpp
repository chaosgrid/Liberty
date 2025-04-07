#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef39a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6ef39c8 _public_6ef39c8
#define public_6ef39d4 _public_6ef39d4
#define public_6ef3a13 _public_6ef3a13
#define public_6ef3a1e _public_6ef3a1e
#define public_6ef3a42 _public_6ef3a42
#define public_6ef3a4d _public_6ef3a4d
#define public_6ef3a4f _public_6ef3a4f
#define public_6ef3a70 _public_6ef3a70
#define public_6ef3a7b _public_6ef3a7b
#define public_6ef3a89 _public_6ef3a89
#define public_6ef3a9c _public_6ef3a9c

PROC_DECLARE(0x6ef39a0, internal_6ef39a0, public_6ef39a0);
extern "C" NAKED register_t __cdecl internal_6ef39a0()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+0x14], 0xFFFFFFFF
        push edi
        jne public_6ef3a9c
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [ebp+0x14], eax
        cmp edi, dword ptr ss : [ebp+0x34]
        je public_6ef3a9c
        push ebx
        push esi
        xor ebx, ebx
        public_6ef39c8 : nop
        mov esi, dword ptr ds : [edi+0x2C]
        cmp esi, dword ptr ds : [edi+0x30]
        je public_6ef3a89
        public_6ef39d4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_6ef3a7b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6ef3a7b
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ds:[ecx+edx]
        cmp eax, 1
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jge public_6ef3a13
        push 1
/*FIXUP push offset public_6fb7838 @0x6ef3a07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7838
        lea eax, ss:[esp+0x18]
        push eax
        jmp public_6ef3a1e
        public_6ef3a13 : nop
        push eax
/*FIXUP push offset public_6fb7838 @0x6ef3a14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7838
        lea ecx, ss:[esp+0x18]
        push ecx
        public_6ef3a1e : nop
        call public_6ef66e0
        lea edx, ss:[esp+0x20]
        add esp, 0xC
        push edx
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], eax
        je public_6ef3a4d
        public_6ef3a42 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6ef3a4f
        add ecx, 4
        cmp ecx, edx
        jne public_6ef3a42
        public_6ef3a4d : nop
        mov ecx, edx
        public_6ef3a4f : nop
        cmp ecx, edx
        jne public_6ef3a7b
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push edx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef3a7b
        mov edx, dword ptr ss : [esp+0x24]
        public_6ef3a70 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef3a7b
        add eax, 4
        cmp eax, ecx
        jne public_6ef3a70
        public_6ef3a7b : nop
        mov eax, dword ptr ds : [edi+0x30]
        add esi, 0x38
        cmp esi, eax
        jne public_6ef39d4
        public_6ef3a89 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        add edi, 0x80
        cmp edi, eax
        jne public_6ef39c8
        pop esi
        pop ebx
        public_6ef3a9c : nop
        pop edi
        pop ebp
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ef39a0)
    }
}

#undef public_6ef39c8
#undef public_6ef39d4
#undef public_6ef3a13
#undef public_6ef3a1e
#undef public_6ef3a42
#undef public_6ef3a4d
#undef public_6ef3a4f
#undef public_6ef3a70
#undef public_6ef3a7b
#undef public_6ef3a89
#undef public_6ef3a9c
