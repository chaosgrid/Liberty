#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece990);
CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);
CLANG_FORWARD_PROC_SYMBOL(public_6eced20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecef70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecef90);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf230);

#define public_6ece9b0 _public_6ece9b0
#define public_6ece9c3 _public_6ece9c3
#define public_6ece9c6 _public_6ece9c6
#define public_6ece9ca _public_6ece9ca
#define public_6ecea29 _public_6ecea29
#define public_6ecea41 _public_6ecea41
#define public_6ecea4b _public_6ecea4b
#define public_6ecea4f _public_6ecea4f
#define public_6ecea60 _public_6ecea60
#define public_6ecea9b _public_6ecea9b
#define public_6eceaaa _public_6eceaaa
#define public_6eceacb _public_6eceacb
#define public_6eceaec _public_6eceaec
#define public_6eceafa _public_6eceafa
#define public_6eceb19 _public_6eceb19
#define public_6eceb25 _public_6eceb25
#define public_6eceb41 _public_6eceb41
#define public_6eceb5c _public_6eceb5c
#define public_6eceb63 _public_6eceb63
#define public_6eceb86 _public_6eceb86

PROC_DECLARE(0x6ece990, internal_6ece990, public_6ece990);
extern "C" NAKED register_t __cdecl internal_6ece990()
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
        je public_6ece9ca
        lea esp, ss:[esp]
        public_6ece9b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6ece9c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ece9c6
        public_6ece9c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ece9c6 : nop
        cmp ebp, edx
        jne public_6ece9b0
        public_6ece9ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eceb41
        push 0
        push esi
        mov ecx, edi
        call public_6ecef70
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ecf230
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ecea29
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ecea29
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6ecea29
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecea4f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ecea4f
        public_6ecea29 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ecea41
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecea4b
        public_6ecea41 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ecea4b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ecea4b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ecea4f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eceb25
        lea ecx, ds:[ecx]
        public_6ecea60 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6eceb25
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eceacb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ecea9b
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eceb19
        public_6ecea9b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eceaaa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ecec60
        public_6eceaaa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6ec55d0
        jmp public_6eceb19
        public_6eceacb : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6eceaec
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eceb19
        public_6eceaec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eceafa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ec55d0
        public_6eceafa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6ecec60
        public_6eceb19 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ecea60
        public_6eceb25 : nop
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
        public_6eceb41 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eceb5c
        cmp esi, dword ptr ds : [ecx]
        je public_6eceb63
        lea ecx, ss:[esp+0x10]
        call public_6ecef90
        mov edx, dword ptr ss : [esp+0x10]
        public_6eceb5c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eceb86
        public_6eceb63 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eced20
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
        public_6eceb86 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ece990)
    }
}

#undef public_6ece9b0
#undef public_6ece9c3
#undef public_6ece9c6
#undef public_6ece9ca
#undef public_6ecea29
#undef public_6ecea41
#undef public_6ecea4b
#undef public_6ecea4f
#undef public_6ecea60
#undef public_6ecea9b
#undef public_6eceaaa
#undef public_6eceacb
#undef public_6eceaec
#undef public_6eceafa
#undef public_6eceb19
#undef public_6eceb25
#undef public_6eceb41
#undef public_6eceb5c
#undef public_6eceb63
#undef public_6eceb86
