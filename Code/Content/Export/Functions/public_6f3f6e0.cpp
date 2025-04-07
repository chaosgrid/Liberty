#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3f700 _public_6f3f700
#define public_6f3f713 _public_6f3f713
#define public_6f3f716 _public_6f3f716
#define public_6f3f71a _public_6f3f71a
#define public_6f3f779 _public_6f3f779
#define public_6f3f791 _public_6f3f791
#define public_6f3f79b _public_6f3f79b
#define public_6f3f79f _public_6f3f79f
#define public_6f3f7b0 _public_6f3f7b0
#define public_6f3f7eb _public_6f3f7eb
#define public_6f3f7fa _public_6f3f7fa
#define public_6f3f81b _public_6f3f81b
#define public_6f3f83c _public_6f3f83c
#define public_6f3f84a _public_6f3f84a
#define public_6f3f869 _public_6f3f869
#define public_6f3f875 _public_6f3f875
#define public_6f3f891 _public_6f3f891
#define public_6f3f8ac _public_6f3f8ac
#define public_6f3f8b3 _public_6f3f8b3
#define public_6f3f8d6 _public_6f3f8d6

PROC_DECLARE(0x6f3f6e0, internal_6f3f6e0, public_6f3f6e0);
extern "C" NAKED register_t __cdecl internal_6f3f6e0()
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
        je public_6f3f71a
        lea esp, ss:[esp]
        public_6f3f700 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3f713
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3f716
        public_6f3f713 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3f716 : nop
        cmp ebp, edx
        jne public_6f3f700
        public_6f3f71a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3f891
        push 0
        push esi
        mov ecx, edi
        call public_6f6a2c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f6a670
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3f779
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3f779
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3f779
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3f79f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3f79f
        public_6f3f779 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3f791
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3f79b
        public_6f3f791 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f79b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3f79b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3f79f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3f875
        lea ecx, ds:[ecx]
        public_6f3f7b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6f3f875
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3f81b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f3f7eb
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3f869
        public_6f3f7eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3f7fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3f7fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3f869
        public_6f3f81b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f3f83c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3f869
        public_6f3f83c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f84a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3f84a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3f869 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3f7b0
        public_6f3f875 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3f891 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3f8ac
        cmp esi, dword ptr ds : [ecx]
        je public_6f3f8b3
        lea ecx, ss:[esp+0x10]
        call public_6f2ef20
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3f8ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3f8d6
        public_6f3f8b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f42af0
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
        public_6f3f8d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3f6e0)
    }
}

#undef public_6f3f700
#undef public_6f3f713
#undef public_6f3f716
#undef public_6f3f71a
#undef public_6f3f779
#undef public_6f3f791
#undef public_6f3f79b
#undef public_6f3f79f
#undef public_6f3f7b0
#undef public_6f3f7eb
#undef public_6f3f7fa
#undef public_6f3f81b
#undef public_6f3f83c
#undef public_6f3f84a
#undef public_6f3f869
#undef public_6f3f875
#undef public_6f3f891
#undef public_6f3f8ac
#undef public_6f3f8b3
#undef public_6f3f8d6
