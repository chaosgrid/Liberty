#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3350);
CLANG_FORWARD_PROC_SYMBOL(public_65f33c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f5cb0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6350);
CLANG_FORWARD_PROC_SYMBOL(public_65f65a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f65c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6670);

#define public_65f5cd0 _public_65f5cd0
#define public_65f5ce3 _public_65f5ce3
#define public_65f5ce6 _public_65f5ce6
#define public_65f5cea _public_65f5cea
#define public_65f5d49 _public_65f5d49
#define public_65f5d61 _public_65f5d61
#define public_65f5d6b _public_65f5d6b
#define public_65f5d6f _public_65f5d6f
#define public_65f5d80 _public_65f5d80
#define public_65f5dbb _public_65f5dbb
#define public_65f5dca _public_65f5dca
#define public_65f5deb _public_65f5deb
#define public_65f5e0c _public_65f5e0c
#define public_65f5e1a _public_65f5e1a
#define public_65f5e39 _public_65f5e39
#define public_65f5e45 _public_65f5e45
#define public_65f5e61 _public_65f5e61
#define public_65f5e7c _public_65f5e7c
#define public_65f5e83 _public_65f5e83
#define public_65f5ea6 _public_65f5ea6

PROC_DECLARE(0x65f5cb0, internal_65f5cb0, public_65f5cb0);
extern "C" NAKED register_t __cdecl internal_65f5cb0()
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
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_65f5cea
        lea esp, ss:[esp]
        public_65f5cd0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_65f5ce3
        mov ebp, dword ptr ss : [ebp]
        jmp public_65f5ce6
        public_65f5ce3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_65f5ce6 : nop
        cmp ebp, edx
        jne public_65f5cd0
        public_65f5cea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_65f5e61
        push 0
        push esi
        mov ecx, edi
        call public_65f65a0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_65f6670
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_65f5d49
        cmp ebp, dword ptr ds : [edi+8]
        jne public_65f5d49
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_65f5d49
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_65f5d6f
        mov dword ptr ds : [eax+8], ebx
        jmp public_65f5d6f
        public_65f5d49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_65f5d61
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f5d6b
        public_65f5d61 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_65f5d6b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_65f5d6b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_65f5d6f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_65f5e45
        lea ecx, ds:[ecx]
        public_65f5d80 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_65f5e45
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_65f5deb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_65f5dbb
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_65f5e39
        public_65f5dbb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_65f5dca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_65f3350
        public_65f5dca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x18], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_65f33c0
        jmp public_65f5e39
        public_65f5deb : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_65f5e0c
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_65f5e39
        public_65f5e0c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_65f5e1a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_65f33c0
        public_65f5e1a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_65f3350
        public_65f5e39 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_65f5d80
        public_65f5e45 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_65f5e61 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_65f5e7c
        cmp esi, dword ptr ds : [ecx]
        je public_65f5e83
        lea ecx, ss:[esp+0x10]
        call public_65f65c0
        mov edx, dword ptr ss : [esp+0x10]
        public_65f5e7c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_65f5ea6
        public_65f5e83 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_65f6350
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_65f5ea6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65f5cb0)
    }
}

#undef public_65f5cd0
#undef public_65f5ce3
#undef public_65f5ce6
#undef public_65f5cea
#undef public_65f5d49
#undef public_65f5d61
#undef public_65f5d6b
#undef public_65f5d6f
#undef public_65f5d80
#undef public_65f5dbb
#undef public_65f5dca
#undef public_65f5deb
#undef public_65f5e0c
#undef public_65f5e1a
#undef public_65f5e39
#undef public_65f5e45
#undef public_65f5e61
#undef public_65f5e7c
#undef public_65f5e83
#undef public_65f5ea6
