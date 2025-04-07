#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f215d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f215f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f420);
CLANG_FORWARD_PROC_SYMBOL(public_6f42490);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f468e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3f440 _public_6f3f440
#define public_6f3f453 _public_6f3f453
#define public_6f3f456 _public_6f3f456
#define public_6f3f45a _public_6f3f45a
#define public_6f3f4b9 _public_6f3f4b9
#define public_6f3f4d1 _public_6f3f4d1
#define public_6f3f4db _public_6f3f4db
#define public_6f3f4df _public_6f3f4df
#define public_6f3f4f0 _public_6f3f4f0
#define public_6f3f52b _public_6f3f52b
#define public_6f3f53a _public_6f3f53a
#define public_6f3f55b _public_6f3f55b
#define public_6f3f57c _public_6f3f57c
#define public_6f3f58a _public_6f3f58a
#define public_6f3f5a9 _public_6f3f5a9
#define public_6f3f5b5 _public_6f3f5b5
#define public_6f3f5d1 _public_6f3f5d1
#define public_6f3f5ec _public_6f3f5ec
#define public_6f3f5f3 _public_6f3f5f3
#define public_6f3f616 _public_6f3f616

PROC_DECLARE(0x6f3f420, internal_6f3f420, public_6f3f420);
extern "C" NAKED register_t __cdecl internal_6f3f420()
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
        je public_6f3f45a
        lea esp, ss:[esp]
        public_6f3f440 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3f453
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3f456
        public_6f3f453 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3f456 : nop
        cmp ebp, edx
        jne public_6f3f440
        public_6f3f45a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3f5d1
        push 0
        push esi
        mov ecx, edi
        call public_6f215d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f468e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3f4b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3f4b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3f4b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3f4df
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3f4df
        public_6f3f4b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3f4d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3f4db
        public_6f3f4d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f4db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3f4db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3f4df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3f5b5
        lea ecx, ds:[ecx]
        public_6f3f4f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x2C]
        test cl, cl
        jne public_6f3f5b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3f55b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f3f52b
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3f5a9
        public_6f3f52b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3f53a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3f53a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3f5a9
        public_6f3f55b : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f3f57c
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3f5a9
        public_6f3f57c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f58a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3f58a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3f5a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3f4f0
        public_6f3f5b5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3f5d1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3f5ec
        cmp esi, dword ptr ds : [ecx]
        je public_6f3f5f3
        lea ecx, ss:[esp+0x10]
        call public_6f215f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3f5ec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3f616
        public_6f3f5f3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f42490
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
        public_6f3f616 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3f420)
    }
}

#undef public_6f3f440
#undef public_6f3f453
#undef public_6f3f456
#undef public_6f3f45a
#undef public_6f3f4b9
#undef public_6f3f4d1
#undef public_6f3f4db
#undef public_6f3f4df
#undef public_6f3f4f0
#undef public_6f3f52b
#undef public_6f3f53a
#undef public_6f3f55b
#undef public_6f3f57c
#undef public_6f3f58a
#undef public_6f3f5a9
#undef public_6f3f5b5
#undef public_6f3f5d1
#undef public_6f3f5ec
#undef public_6f3f5f3
#undef public_6f3f616
