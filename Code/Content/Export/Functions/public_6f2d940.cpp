#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d940);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6f42d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f2d960 _public_6f2d960
#define public_6f2d973 _public_6f2d973
#define public_6f2d976 _public_6f2d976
#define public_6f2d97a _public_6f2d97a
#define public_6f2d9d9 _public_6f2d9d9
#define public_6f2d9f1 _public_6f2d9f1
#define public_6f2d9fb _public_6f2d9fb
#define public_6f2d9ff _public_6f2d9ff
#define public_6f2da10 _public_6f2da10
#define public_6f2da4b _public_6f2da4b
#define public_6f2da5a _public_6f2da5a
#define public_6f2da7b _public_6f2da7b
#define public_6f2da9c _public_6f2da9c
#define public_6f2daaa _public_6f2daaa
#define public_6f2dac9 _public_6f2dac9
#define public_6f2dad5 _public_6f2dad5
#define public_6f2daf1 _public_6f2daf1
#define public_6f2db0c _public_6f2db0c
#define public_6f2db13 _public_6f2db13
#define public_6f2db36 _public_6f2db36

PROC_DECLARE(0x6f2d940, internal_6f2d940, public_6f2d940);
extern "C" NAKED register_t __cdecl internal_6f2d940()
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
        je public_6f2d97a
        lea esp, ss:[esp]
        public_6f2d960 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f2d973
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f2d976
        public_6f2d973 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f2d976 : nop
        cmp ebp, edx
        jne public_6f2d960
        public_6f2d97a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f2daf1
        push 0
        push esi
        mov ecx, edi
        call public_6eee2d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eee7a0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f2d9d9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f2d9d9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f2d9d9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d9ff
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2d9ff
        public_6f2d9d9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f2d9f1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2d9fb
        public_6f2d9f1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d9fb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f2d9fb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f2d9ff : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f2dad5
        lea ecx, ds:[ecx]
        public_6f2da10 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6f2dad5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2da7b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2da4b
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f2dac9
        public_6f2da4b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2da5a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f2da5a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f2dac9
        public_6f2da7b : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2da9c
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f2dac9
        public_6f2da9c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2daaa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f2daaa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f2dac9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f2da10
        public_6f2dad5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f2daf1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f2db0c
        cmp esi, dword ptr ds : [ecx]
        je public_6f2db13
        lea ecx, ss:[esp+0x10]
        call public_6f2ef80
        mov edx, dword ptr ss : [esp+0x10]
        public_6f2db0c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f2db36
        public_6f2db13 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f42d80
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
        public_6f2db36 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2d940)
    }
}

#undef public_6f2d960
#undef public_6f2d973
#undef public_6f2d976
#undef public_6f2d97a
#undef public_6f2d9d9
#undef public_6f2d9f1
#undef public_6f2d9fb
#undef public_6f2d9ff
#undef public_6f2da10
#undef public_6f2da4b
#undef public_6f2da5a
#undef public_6f2da7b
#undef public_6f2da9c
#undef public_6f2daaa
#undef public_6f2dac9
#undef public_6f2dad5
#undef public_6f2daf1
#undef public_6f2db0c
#undef public_6f2db13
#undef public_6f2db36
