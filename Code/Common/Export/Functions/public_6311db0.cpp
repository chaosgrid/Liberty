#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7f40);
CLANG_FORWARD_PROC_SYMBOL(public_62a7f60);
CLANG_FORWARD_PROC_SYMBOL(public_6311db0);
CLANG_FORWARD_PROC_SYMBOL(public_63123e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312680);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6311dd0 _public_6311dd0
#define public_6311de3 _public_6311de3
#define public_6311de6 _public_6311de6
#define public_6311dea _public_6311dea
#define public_6311e49 _public_6311e49
#define public_6311e61 _public_6311e61
#define public_6311e6b _public_6311e6b
#define public_6311e6f _public_6311e6f
#define public_6311e80 _public_6311e80
#define public_6311ebb _public_6311ebb
#define public_6311eca _public_6311eca
#define public_6311eeb _public_6311eeb
#define public_6311f0c _public_6311f0c
#define public_6311f1a _public_6311f1a
#define public_6311f39 _public_6311f39
#define public_6311f45 _public_6311f45
#define public_6311f61 _public_6311f61
#define public_6311f7c _public_6311f7c
#define public_6311f83 _public_6311f83
#define public_6311fa6 _public_6311fa6

PROC_DECLARE(0x6311db0, internal_6311db0, public_6311db0);
extern "C" NAKED register_t __cdecl internal_6311db0()
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
        je public_6311dea
        lea esp, ss:[esp]
        public_6311dd0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6311de3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6311de6
        public_6311de3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6311de6 : nop
        cmp ebp, edx
        jne public_6311dd0
        public_6311dea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6311f61
        push 0
        push esi
        mov ecx, edi
        call public_62a7f40
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6312680
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6311e49
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6311e49
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6311e49
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6311e6f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6311e6f
        public_6311e49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6311e61
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6311e6b
        public_6311e61 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6311e6b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6311e6b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6311e6f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6311f45
        lea ecx, ds:[ecx]
        public_6311e80 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x28]
        test cl, cl
        jne public_6311f45
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6311eeb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6311ebb
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6311f39
        public_6311ebb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6311eca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_6311eca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x28], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6311f39
        public_6311eeb : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6311f0c
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x28], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6311f39
        public_6311f0c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6311f1a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_6311f1a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6311f39 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6311e80
        public_6311f45 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6311f61 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6311f7c
        cmp esi, dword ptr ds : [ecx]
        je public_6311f83
        lea ecx, ss:[esp+0x10]
        call public_62a7f60
        mov edx, dword ptr ss : [esp+0x10]
        public_6311f7c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6311fa6
        public_6311f83 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_63123e0
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
        public_6311fa6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6311db0)
    }
}

#undef public_6311dd0
#undef public_6311de3
#undef public_6311de6
#undef public_6311dea
#undef public_6311e49
#undef public_6311e61
#undef public_6311e6b
#undef public_6311e6f
#undef public_6311e80
#undef public_6311ebb
#undef public_6311eca
#undef public_6311eeb
#undef public_6311f0c
#undef public_6311f1a
#undef public_6311f39
#undef public_6311f45
#undef public_6311f61
#undef public_6311f7c
#undef public_6311f83
#undef public_6311fa6
