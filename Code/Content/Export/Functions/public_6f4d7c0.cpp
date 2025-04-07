#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dfc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f4d7d8 _public_6f4d7d8
#define public_6f4d7f1 _public_6f4d7f1
#define public_6f4d7f4 _public_6f4d7f4
#define public_6f4d7fd _public_6f4d7fd
#define public_6f4d867 _public_6f4d867
#define public_6f4d87f _public_6f4d87f
#define public_6f4d889 _public_6f4d889
#define public_6f4d88d _public_6f4d88d
#define public_6f4d8a0 _public_6f4d8a0
#define public_6f4d8db _public_6f4d8db
#define public_6f4d8ea _public_6f4d8ea
#define public_6f4d90b _public_6f4d90b
#define public_6f4d92c _public_6f4d92c
#define public_6f4d93a _public_6f4d93a
#define public_6f4d959 _public_6f4d959
#define public_6f4d965 _public_6f4d965
#define public_6f4d981 _public_6f4d981
#define public_6f4d9b3 _public_6f4d9b3
#define public_6f4d9bc _public_6f4d9bc
#define public_6f4d9f9 _public_6f4d9f9

PROC_DECLARE(0x6f4d7c0, internal_6f4d7c0, public_6f4d7c0);
extern "C" NAKED register_t __cdecl internal_6f4d7c0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6f4d7fd
        public_6f4d7d8 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_6fb32bc]
        add esp, 8
        test al, al
        je public_6f4d7f1
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f4d7f4
        public_6f4d7f1 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f4d7f4 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6f4d7d8
        public_6f4d7fd : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6f4d981
        push 0
        push esi
        mov ecx, edi
        call public_6eb3ac0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f4e4c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f4d867
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f4d867
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_6fb32bc]
        add esp, 8
        test al, al
        jne public_6f4d867
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4d88d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f4d88d
        public_6f4d867 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f4d87f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4d889
        public_6f4d87f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4d889
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f4d889 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f4d88d : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f4d965
        nop 
        lea esp, ss:[esp]
        public_6f4d8a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f4d965
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4d90b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4d8db
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f4d959
        public_6f4d8db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4d8ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f4d8ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f4d959
        public_6f4d90b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4d92c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f4d959
        public_6f4d92c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4d93a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f4d93a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f4d959 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f4d8a0
        public_6f4d965 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f4d981 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6f4d9bc
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_6f4d9b3
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6f4dfc0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f4d9b3 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        public_6f4d9bc : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6fb32bc]
        add esp, 8
        test al, al
        je public_6f4d9f9
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f4dfc0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f4d9f9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4d7c0)
    }
}

#undef public_6f4d7d8
#undef public_6f4d7f1
#undef public_6f4d7f4
#undef public_6f4d7fd
#undef public_6f4d867
#undef public_6f4d87f
#undef public_6f4d889
#undef public_6f4d88d
#undef public_6f4d8a0
#undef public_6f4d8db
#undef public_6f4d8ea
#undef public_6f4d90b
#undef public_6f4d92c
#undef public_6f4d93a
#undef public_6f4d959
#undef public_6f4d965
#undef public_6f4d981
#undef public_6f4d9b3
#undef public_6f4d9bc
#undef public_6f4d9f9
