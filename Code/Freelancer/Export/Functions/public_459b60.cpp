#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_459b60);
CLANG_FORWARD_PROC_SYMBOL(public_459db0);
CLANG_FORWARD_PROC_SYMBOL(public_45a000);
CLANG_FORWARD_PROC_SYMBOL(public_45a020);
CLANG_FORWARD_PROC_SYMBOL(public_45a080);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_459b80 _public_459b80
#define public_459b93 _public_459b93
#define public_459b96 _public_459b96
#define public_459b9a _public_459b9a
#define public_459bf9 _public_459bf9
#define public_459c11 _public_459c11
#define public_459c1b _public_459c1b
#define public_459c1f _public_459c1f
#define public_459c30 _public_459c30
#define public_459c6b _public_459c6b
#define public_459c7a _public_459c7a
#define public_459c9b _public_459c9b
#define public_459cbc _public_459cbc
#define public_459cca _public_459cca
#define public_459ce9 _public_459ce9
#define public_459cf5 _public_459cf5
#define public_459d11 _public_459d11
#define public_459d2c _public_459d2c
#define public_459d33 _public_459d33
#define public_459d56 _public_459d56

PROC_DECLARE(0x459b60, internal_459b60, public_459b60);
extern "C" NAKED register_t __cdecl internal_459b60()
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
        je public_459b9a
        lea esp, ss:[esp]
        public_459b80 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_459b93
        mov ebp, dword ptr ss : [ebp]
        jmp public_459b96
        public_459b93 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_459b96 : nop
        cmp ebp, edx
        jne public_459b80
        public_459b9a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_459d11
        push 0
        push esi
        mov ecx, edi
        call public_45a000
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_45a080
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_459bf9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_459bf9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_459bf9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_459c1f
        mov dword ptr ds : [eax+8], ebx
        jmp public_459c1f
        public_459bf9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_459c11
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_459c1b
        public_459c11 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_459c1b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_459c1b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_459c1f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_459cf5
        lea ecx, ds:[ecx]
        public_459c30 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_459cf5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_459c9b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_459c6b
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_459ce9
        public_459c6b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_459c7a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_459c7a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_459ce9
        public_459c9b : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_459cbc
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_459ce9
        public_459cbc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_459cca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_459cca : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_459ce9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_459c30
        public_459cf5 : nop
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
        public_459d11 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_459d2c
        cmp esi, dword ptr ds : [ecx]
        je public_459d33
        lea ecx, ss:[esp+0x10]
        call public_45a020
        mov edx, dword ptr ss : [esp+0x10]
        public_459d2c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_459d56
        public_459d33 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_459db0
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
        public_459d56 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x459b60)
    }
}

#undef public_459b80
#undef public_459b93
#undef public_459b96
#undef public_459b9a
#undef public_459bf9
#undef public_459c11
#undef public_459c1b
#undef public_459c1f
#undef public_459c30
#undef public_459c6b
#undef public_459c7a
#undef public_459c9b
#undef public_459cbc
#undef public_459cca
#undef public_459ce9
#undef public_459cf5
#undef public_459d11
#undef public_459d2c
#undef public_459d33
#undef public_459d56
