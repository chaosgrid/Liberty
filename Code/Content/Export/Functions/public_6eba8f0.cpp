#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8a20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8c40);
CLANG_FORWARD_PROC_SYMBOL(public_6eba8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2da0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eba968 _public_6eba968
#define public_6eba98d _public_6eba98d
#define public_6eba99c _public_6eba99c
#define public_6eba9ad _public_6eba9ad
#define public_6eba9c4 _public_6eba9c4
#define public_6ebaa04 _public_6ebaa04
#define public_6ebaa2f _public_6ebaa2f
#define public_6ebaa79 _public_6ebaa79
#define public_6ebaac5 _public_6ebaac5

PROC_DECLARE(0x6eba8f0, internal_6eba8f0, public_6eba8f0);
extern "C" NAKED register_t __cdecl internal_6eba8f0()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        xor ebx, ebx
        test eax, eax
        je public_6ebaa79
        mov eax, dword ptr ds : [edi+8]
        cmp dword ptr ds : [eax+0x10], ebx
        je public_6ebaa79
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [edi+4]
        je public_6ebaa79
        mov eax, dword ptr ds : [edi+0x2F4]
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x98], ebx
        mov byte ptr ss : [esp+0x9C], bl
        mov byte ptr ss : [esp+0x9D], bl
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ebaa79
        public_6eba968 : nop
        mov eax, dword ptr ds : [esi+0x90]
        cmp eax, ebx
        je public_6eba98d
        cmp dword ptr ds : [eax+0x2C], ebx
        je public_6eba98d
        cmp byte ptr ds : [esi+0x94], bl
        jne public_6eba98d
        mov ecx, dword ptr ds : [edi+8]
        call public_6f47980
        mov ebp, eax
        cmp ebp, ebx
        jne public_6eba99c
        public_6eba98d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x2F4]
        jne public_6eba968
        jmp public_6ebaa2f
        public_6eba99c : nop
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        jne public_6eba9ad
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_6eba9c4
        public_6eba9ad : nop
        push eax
        lea eax, ss:[esp+0x18]
        push 0x80
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], eax
        public_6eba9c4 : nop
        mov cl, byte ptr ds : [esi+0x95]
        mov byte ptr ss : [esp+0x9D], cl
        mov edx, dword ptr ds : [esi+0x8C]
        push ebx
        push edx
        mov ecx, ebp
        call public_6ea9fc0
        mov ebp, dword ptr ds : [esi+0x90]
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x8C], 0xFFFFFFFF
        je public_6ebaa04
        mov ecx, ebp
        call public_6eb8c40
        push ebp
        call public_6fa8fe0
        add esp, 4
        public_6ebaa04 : nop
        mov dword ptr ds : [esi+0x90], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x2F8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x2F8], eax
        public_6ebaa2f : nop
        cmp dword ptr ss : [esp+0x10], ebx
        je public_6ebaa79
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_6eb8a20
        mov ebp, dword ptr ds : [edi+0x2F4]
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ds:[edi+0x2F0]
        push edx
        push ebp
        mov ecx, esi
        call public_6ed0f20
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ed2da0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        public_6ebaa79 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        cmp dword ptr ds : [eax], ebx
        jne public_6ebaac5
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        cmp esi, ebx
        je public_6ebaac5
        lea ecx, ds:[esi+8]
        call public_6f1cd20
        mov edi, eax
        mov ebp, dword ptr ds : [edi+0x1C]
        mov ecx, ebp
        or ecx, 0x30
        mov dword ptr ds : [edi+0x1C], ecx
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ecx, esi
        call public_6f1d110
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x1C], ebp
        public_6ebaac5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x6eba8f0)
    }
}

#undef public_6eba968
#undef public_6eba98d
#undef public_6eba99c
#undef public_6eba9ad
#undef public_6eba9c4
#undef public_6ebaa04
#undef public_6ebaa2f
#undef public_6ebaa79
#undef public_6ebaac5
