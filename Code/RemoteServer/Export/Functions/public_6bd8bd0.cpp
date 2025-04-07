#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd56d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd8c36 _public_6bd8c36
#define public_6bd8c41 _public_6bd8c41
#define public_6bd8c49 _public_6bd8c49
#define public_6bd8c54 _public_6bd8c54
#define public_6bd8c62 _public_6bd8c62
#define public_6bd8c79 _public_6bd8c79
#define public_6bd8c8f _public_6bd8c8f
#define public_6bd8c97 _public_6bd8c97
#define public_6bd8c9f _public_6bd8c9f
#define public_6bd8ca7 _public_6bd8ca7
#define public_6bd8caf _public_6bd8caf
#define public_6bd8cbb _public_6bd8cbb
#define public_6bd8cc3 _public_6bd8cc3
#define public_6bd8cd0 _public_6bd8cd0
#define public_6bd8cde _public_6bd8cde
#define public_6bd8cf0 _public_6bd8cf0
#define public_6bd8d08 _public_6bd8d08
#define public_6bd8d1d _public_6bd8d1d
#define public_6bd8d31 _public_6bd8d31
#define public_6bd8d45 _public_6bd8d45
#define public_6bd8d4d _public_6bd8d4d
#define public_6bd8d53 _public_6bd8d53
#define public_6bd8d79 _public_6bd8d79
#define public_6bd8d7c _public_6bd8d7c
#define public_6bd8d8d _public_6bd8d8d

PROC_DECLARE(0x6bd8bd0, internal_6bd8bd0, public_6bd8bd0);
extern "C" NAKED register_t __cdecl internal_6bd8bd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x1D
        xor esi, esi
        push 1
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], esi
        call public_6be1750
        test eax, eax
        jne public_6bd8d8d
        mov edx, dword ptr ss : [esp+8]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+0x20], ecx
        mov ax, word ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx+0x24], ax
        mov edx, dword ptr ss : [esp+0x10]
        add edi, 8
        lea ebp, ds:[edx+0x28]
        cmp ebp, edi
        je public_6bd8d7c
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_6bd8c36
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6bd8c36 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6bd8c41
        xor ecx, ecx
        jmp public_6bd8c49
        public_6bd8c41 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6bd8c49 : nop
        cmp esi, ecx
        ja public_6bd8c8f
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6bd8c62
        public_6bd8c54 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6bd8c54
        public_6bd8c62 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6bd8c79
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6bd8d7c
        public_6bd8c79 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6bd8d7c
        public_6bd8c8f : nop
        test eax, eax
        jne public_6bd8c97
        xor esi, esi
        jmp public_6bd8c9f
        public_6bd8c97 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6bd8c9f : nop
        test edx, edx
        jne public_6bd8ca7
        xor ecx, ecx
        jmp public_6bd8caf
        public_6bd8ca7 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6bd8caf : nop
        cmp esi, ecx
        ja public_6bd8d31
        test edx, edx
        jne public_6bd8cbb
        xor ecx, ecx
        jmp public_6bd8cc3
        public_6bd8cbb : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6bd8cc3 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6bd8cde
        lea ebx, ds:[ebx]
        public_6bd8cd0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6bd8cd0
        public_6bd8cde : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, ecx
        je public_6bd8d08
        mov edi, edi
        public_6bd8cf0 : nop
        push esi
        push ebx
        call public_6bd90f0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6bd8cf0
        public_6bd8d08 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6bd8d1d
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_6bd8d79
        public_6bd8d1d : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_6bd8d79
        public_6bd8d31 : nop
        push edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6bd8d45
        xor eax, eax
        jmp public_6bd8d4d
        public_6bd8d45 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6bd8d4d : nop
        test eax, eax
        jge public_6bd8d53
        xor eax, eax
        public_6bd8d53 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6c09d26
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6bd56d0
        mov dword ptr ss : [ebp+0xC], eax
        public_6bd8d79 : nop
        mov dword ptr ss : [ebp+8], eax
        public_6bd8d7c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        pop edi
        pop ebp
        public_6bd8d8d : nop
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6bd8bd0)
    }
}

#undef public_6bd8c36
#undef public_6bd8c41
#undef public_6bd8c49
#undef public_6bd8c54
#undef public_6bd8c62
#undef public_6bd8c79
#undef public_6bd8c8f
#undef public_6bd8c97
#undef public_6bd8c9f
#undef public_6bd8ca7
#undef public_6bd8caf
#undef public_6bd8cbb
#undef public_6bd8cc3
#undef public_6bd8cd0
#undef public_6bd8cde
#undef public_6bd8cf0
#undef public_6bd8d08
#undef public_6bd8d1d
#undef public_6bd8d31
#undef public_6bd8d45
#undef public_6bd8d4d
#undef public_6bd8d53
#undef public_6bd8d79
#undef public_6bd8d7c
#undef public_6bd8d8d
