#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d1340);
CLANG_FORWARD_PROC_SYMBOL(public_65d1d10);
CLANG_FORWARD_PROC_SYMBOL(public_65d1ea0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c6a);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c9a);
CLANG_FORWARD_PROC_SYMBOL(public_65d6ca0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d1ef4 _public_65d1ef4
#define public_65d1f1a _public_65d1f1a
#define public_65d1f47 _public_65d1f47
#define public_65d1f53 _public_65d1f53
#define public_65d1fb9 _public_65d1fb9
#define public_65d1fdd _public_65d1fdd
#define public_65d1fed _public_65d1fed
#define public_65d1ff5 _public_65d1ff5
#define public_65d2041 _public_65d2041
#define public_65d205c _public_65d205c
#define public_65d208f _public_65d208f
#define public_65d20cb _public_65d20cb
#define public_65d20e5 _public_65d20e5
#define public_65d210a _public_65d210a
#define public_65d2116 _public_65d2116
#define public_65d211f _public_65d211f
#define public_65d212a _public_65d212a
#define public_65d212e _public_65d212e
#define public_65d2139 _public_65d2139
#define public_65d2157 _public_65d2157

PROC_DECLARE(0x65d1ea0, internal_65d1ea0, public_65d1ea0);
extern "C" NAKED register_t __cdecl internal_65d1ea0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr ds : [esi]
        cmp edx, 0xFFFFFFFF
        je public_65d211f
        mov ecx, dword ptr ds : [esi+0x34]
        xor ebx, ebx
        cmp ecx, ebx
        je public_65d1f1a
        mov eax, dword ptr ds : [esi+0x38]
        mov edi, dword ptr ds : [esi+0x30]
        sub edi, eax
        push ebx
        add eax, ecx
        push edi
        push eax
        push edx
        call public_65d6ca0
        cmp eax, 0xFFFFFFFF
        jne public_65d1ef4
        call public_65d6c6a
        cmp eax, 0x2733
        je public_65d1f1a
        push eax
        call public_65d1340
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret 4
        public_65d1ef4 : nop
        mov edx, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+0x30]
        add edx, eax
        mov eax, edx
        mov dword ptr ds : [esi+0x38], edx
        cmp eax, ecx
        jl public_65d1f1a
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x38], ebx
        public_65d1f1a : nop
        cmp byte ptr ss : [esp+0x38], bl
        jne public_65d1f47
        mov edx, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0x10]
        push 0x28
        push ecx
        push edx
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        je public_65d210a
        cmp eax, ebx
        pop edi
        pop esi
        pop ebx
        setne al
        add esp, 0x28
        ret 4
        public_65d1f47 : nop
        cmp dword ptr ds : [esi+0x10], ebx
        jne public_65d1ff5
        lea edi, ds:[esi+0x18]
        public_65d1f53 : nop
        mov eax, dword ptr ds : [esi]
        push 2
        push 8
        push edi
        push eax
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        je public_65d210a
        cmp eax, 8
        jb public_65d1fed
        cmp word ptr ds : [edi], 0xDEAD
        jne public_65d1fb9
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        not ecx
        cmp eax, ecx
        jne public_65d1fb9
        mov edx, dword ptr ds : [esi]
        push ebx
        push 8
        push edi
        push edx
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        je public_65d2041
        cmp eax, 8
        jne public_65d212e
        cmp word ptr ds : [edi], 0xDEAD
        jne public_65d1f53
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        not eax
        cmp ecx, eax
        jne public_65d1f53
        mov dword ptr ds : [esi+0x10], 1
        jmp public_65d1ff5
        public_65d1fb9 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0x3C]
        push 1
        push ecx
        push edx
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        je public_65d1fdd
        cmp eax, ebx
        jne public_65d1f53
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        public_65d1fdd : nop
        call public_65d1330
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        public_65d1fed : nop
        cmp eax, ebx
        je public_65d211f
        public_65d1ff5 : nop
        cmp dword ptr ds : [esi+0x10], 1
        jne public_65d208f
        cmp word ptr ds : [esi+0x1A], 4
        jne public_65d211f
        mov eax, dword ptr ds : [esi]
        lea edi, ds:[esi+0x20]
        push 2
        push 4
        push edi
        push eax
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        je public_65d210a
        cmp eax, ebx
        je public_65d211f
        cmp eax, 4
        jb public_65d208f
        mov ecx, dword ptr ds : [esi]
        push ebx
        push 4
        push edi
        push ecx
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        jne public_65d205c
        public_65d2041 : nop
        call public_65d6c6a
        cmp eax, 0x2733
        jne public_65d2116
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        public_65d205c : nop
        cmp eax, 4
        jne public_65d212e
        xor edx, edx
        mov dx, word ptr ds : [edi]
        push edx
        call public_65d6f71
        mov dword ptr ds : [esi+0x28], eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0x22]
        push eax
        call public_65d6f71
        add esp, 8
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x10], 2
        public_65d208f : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, 3
        cmp eax, 2
        jne public_65d20e5
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x28]
        xor ecx, ecx
        push ebx
        mov cx, word ptr ds : [esi+0x20]
        add edx, eax
        sub ecx, eax
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        push eax
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        je public_65d210a
        cmp eax, ebx
        jne public_65d20cb
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        public_65d20cb : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, eax
        mov dword ptr ds : [esi+0x24], ecx
        mov eax, ecx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x20]
        cmp eax, ecx
        jb public_65d20e5
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x10], edi
        public_65d20e5 : nop
        cmp dword ptr ds : [esi+0x10], edi
        jne public_65d2157
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x2C]
        xor edx, edx
        push ebx
        mov dx, word ptr ds : [esi+0x22]
        add ecx, eax
        sub edx, eax
        push edx
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        call public_65d6c9a
        cmp eax, 0xFFFFFFFF
        jne public_65d212a
        public_65d210a : nop
        call public_65d6c6a
        cmp eax, 0x2733
        je public_65d2157
        public_65d2116 : nop
        push eax
        call public_65d1340
        add esp, 4
        public_65d211f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        public_65d212a : nop
        cmp eax, ebx
        jne public_65d2139
        public_65d212e : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        public_65d2139 : nop
        mov edi, dword ptr ds : [esi+0x24]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x22]
        add edi, eax
        mov eax, edi
        mov dword ptr ds : [esi+0x24], edi
        cmp eax, ecx
        jne public_65d2157
        mov ecx, esi
        call public_65d1d10
        mov dword ptr ds : [esi+0x10], ebx
        public_65d2157 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x65d1ea0)
    }
}

#undef public_65d1ef4
#undef public_65d1f1a
#undef public_65d1f47
#undef public_65d1f53
#undef public_65d1fb9
#undef public_65d1fdd
#undef public_65d1fed
#undef public_65d1ff5
#undef public_65d2041
#undef public_65d205c
#undef public_65d208f
#undef public_65d20cb
#undef public_65d20e5
#undef public_65d210a
#undef public_65d2116
#undef public_65d211f
#undef public_65d212a
#undef public_65d212e
#undef public_65d2139
#undef public_65d2157
