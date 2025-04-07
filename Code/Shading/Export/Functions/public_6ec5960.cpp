#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5960);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6150);
CLANG_FORWARD_PROC_SYMBOL(public_6ec63d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec66b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6a10);
CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);

#define public_6ec5980 _public_6ec5980
#define public_6ec5993 _public_6ec5993
#define public_6ec5996 _public_6ec5996
#define public_6ec599a _public_6ec599a
#define public_6ec59f9 _public_6ec59f9
#define public_6ec5a11 _public_6ec5a11
#define public_6ec5a1b _public_6ec5a1b
#define public_6ec5a1f _public_6ec5a1f
#define public_6ec5a30 _public_6ec5a30
#define public_6ec5a6b _public_6ec5a6b
#define public_6ec5a7a _public_6ec5a7a
#define public_6ec5a9b _public_6ec5a9b
#define public_6ec5abc _public_6ec5abc
#define public_6ec5aca _public_6ec5aca
#define public_6ec5ae9 _public_6ec5ae9
#define public_6ec5af5 _public_6ec5af5
#define public_6ec5b11 _public_6ec5b11
#define public_6ec5b2c _public_6ec5b2c
#define public_6ec5b33 _public_6ec5b33
#define public_6ec5b56 _public_6ec5b56

PROC_DECLARE(0x6ec5960, internal_6ec5960, public_6ec5960);
extern "C" NAKED register_t __cdecl internal_6ec5960()
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
        je public_6ec599a
        lea esp, ss:[esp]
        public_6ec5980 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0x10]
        mov esi, ebp
        setl al
        test al, al
        je public_6ec5993
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ec5996
        public_6ec5993 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ec5996 : nop
        cmp ebp, edx
        jne public_6ec5980
        public_6ec599a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ec5b11
        push 0
        push esi
        mov ecx, edi
        call public_6ec63d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0x10
        push ebx
        push eax
        call public_6ec6a10
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ec59f9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ec59f9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0x10]
        jl public_6ec59f9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec5a1f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec5a1f
        public_6ec59f9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ec5a11
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec5a1b
        public_6ec5a11 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ec5a1b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ec5a1b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ec5a1f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6ec5af5
        lea ecx, ds:[ecx]
        public_6ec5a30 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        jne public_6ec5af5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec5a9b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6ec5a6b
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ec5ae9
        public_6ec5a6b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec5a7a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ecec60
        public_6ec5a7a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x48], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6ec55d0
        jmp public_6ec5ae9
        public_6ec5a9b : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6ec5abc
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x48], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6ec5ae9
        public_6ec5abc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ec5aca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ec55d0
        public_6ec5aca : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6ecec60
        public_6ec5ae9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ec5a30
        public_6ec5af5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6ec5b11 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6ec5b2c
        cmp esi, dword ptr ds : [ecx]
        je public_6ec5b33
        lea ecx, ss:[esp+0x10]
        call public_6ec66b0
        mov edx, dword ptr ss : [esp+0x10]
        public_6ec5b2c : nop
        mov eax, dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [ebx]
        jge public_6ec5b56
        public_6ec5b33 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ec6150
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
        public_6ec5b56 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec5960)
    }
}

#undef public_6ec5980
#undef public_6ec5993
#undef public_6ec5996
#undef public_6ec599a
#undef public_6ec59f9
#undef public_6ec5a11
#undef public_6ec5a1b
#undef public_6ec5a1f
#undef public_6ec5a30
#undef public_6ec5a6b
#undef public_6ec5a7a
#undef public_6ec5a9b
#undef public_6ec5abc
#undef public_6ec5aca
#undef public_6ec5ae9
#undef public_6ec5af5
#undef public_6ec5b11
#undef public_6ec5b2c
#undef public_6ec5b33
#undef public_6ec5b56
