#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c100);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d880);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ec80);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ee90);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f840);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fd10);

#define public_6f3c118 _public_6f3c118
#define public_6f3c129 _public_6f3c129
#define public_6f3c145 _public_6f3c145
#define public_6f3c148 _public_6f3c148
#define public_6f3c14d _public_6f3c14d
#define public_6f3c1b4 _public_6f3c1b4
#define public_6f3c1cd _public_6f3c1cd
#define public_6f3c1d7 _public_6f3c1d7
#define public_6f3c1db _public_6f3c1db
#define public_6f3c1f0 _public_6f3c1f0
#define public_6f3c22b _public_6f3c22b
#define public_6f3c23a _public_6f3c23a
#define public_6f3c25b _public_6f3c25b
#define public_6f3c27c _public_6f3c27c
#define public_6f3c28a _public_6f3c28a
#define public_6f3c2a9 _public_6f3c2a9
#define public_6f3c2b5 _public_6f3c2b5
#define public_6f3c2d1 _public_6f3c2d1
#define public_6f3c2ea _public_6f3c2ea
#define public_6f3c2f3 _public_6f3c2f3
#define public_6f3c30c _public_6f3c30c
#define public_6f3c327 _public_6f3c327

PROC_DECLARE(0x6f3c100, internal_6f3c100, public_6f3c100);
extern "C" NAKED register_t __cdecl internal_6f3c100()
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
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_6f3c14d
        public_6f3c118 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, esi
        jne public_6f3c129
        mov eax, offset public_6f5af04
        public_6f3c129 : nop
        push ecx
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push 0
        mov ecx, ebx
        call public_6f3fd10
        test eax, eax
        setl al
        test al, al
        je public_6f3c145
        mov esi, dword ptr ds : [esi]
        jmp public_6f3c148
        public_6f3c145 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f3c148 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f3c118
        public_6f3c14d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6f3c2d1
        push 0
        push ebp
        mov ecx, edi
        call public_6f3ed30
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f3f840
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp ebp, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3c1b4
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f3c1b4
        lea eax, ss:[ebp+0xC]
        push eax
        mov ecx, ebx
        call public_6f3fcc0
        test eax, eax
        jl public_6f3c1b4
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_6f3c1db
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3c1db
        public_6f3c1b4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, eax
        jne public_6f3c1cd
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3c1d7
        public_6f3c1cd : nop
        cmp ebp, dword ptr ds : [eax]
        jne public_6f3c1d7
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3c1d7 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3c1db : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3c2b5
        lea esp, ss:[esp]
        public_6f3c1f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x2C]
        test cl, cl
        jne public_6f3c2b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3c25b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f3c22b
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3c2a9
        public_6f3c22b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3c23a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3ec80
        public_6f3c23a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f3ecd0
        jmp public_6f3c2a9
        public_6f3c25b : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f3c27c
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3c2a9
        public_6f3c27c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3c28a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3ecd0
        public_6f3c28a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f3ec80
        public_6f3c2a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3c1f0
        public_6f3c2b5 : nop
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
        public_6f3c2d1 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f3c2f3
        mov ecx, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [ecx]
        jne public_6f3c2ea
        push ebx
        push ebp
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        jmp public_6f3c30c
        public_6f3c2ea : nop
        lea ecx, ss:[esp+0x10]
        call public_6f3ee90
        public_6f3c2f3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+0xC]
        push ebx
        call public_6f3fcc0
        test eax, eax
        jge public_6f3c327
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        public_6f3c30c : nop
        mov ecx, edi
        call public_6f3d880
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3c327 : nop
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 0
        call public_6f3d0f0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3c100)
    }
}

#undef public_6f3c118
#undef public_6f3c129
#undef public_6f3c145
#undef public_6f3c148
#undef public_6f3c14d
#undef public_6f3c1b4
#undef public_6f3c1cd
#undef public_6f3c1d7
#undef public_6f3c1db
#undef public_6f3c1f0
#undef public_6f3c22b
#undef public_6f3c23a
#undef public_6f3c25b
#undef public_6f3c27c
#undef public_6f3c28a
#undef public_6f3c2a9
#undef public_6f3c2b5
#undef public_6f3c2d1
#undef public_6f3c2ea
#undef public_6f3c2f3
#undef public_6f3c30c
#undef public_6f3c327
