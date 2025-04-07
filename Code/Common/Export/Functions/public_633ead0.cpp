#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633ead0);
CLANG_FORWARD_PROC_SYMBOL(public_6340180);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6340cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6340d20);
CLANG_FORWARD_PROC_SYMBOL(public_6341200);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_633eaf0 _public_633eaf0
#define public_633eb03 _public_633eb03
#define public_633eb06 _public_633eb06
#define public_633eb0a _public_633eb0a
#define public_633eb69 _public_633eb69
#define public_633eb81 _public_633eb81
#define public_633eb8b _public_633eb8b
#define public_633eb8f _public_633eb8f
#define public_633eba0 _public_633eba0
#define public_633ebed _public_633ebed
#define public_633ebfc _public_633ebfc
#define public_633ec23 _public_633ec23
#define public_633ec50 _public_633ec50
#define public_633ec5e _public_633ec5e
#define public_633ec83 _public_633ec83
#define public_633ec8f _public_633ec8f
#define public_633ecae _public_633ecae
#define public_633ecc9 _public_633ecc9
#define public_633ecd0 _public_633ecd0
#define public_633ecf3 _public_633ecf3

PROC_DECLARE(0x633ead0, internal_633ead0, public_633ead0);
extern "C" NAKED register_t __cdecl internal_633ead0()
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
        je public_633eb0a
        lea esp, ss:[esp]
        public_633eaf0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_633eb03
        mov ebp, dword ptr ss : [ebp]
        jmp public_633eb06
        public_633eb03 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_633eb06 : nop
        cmp ebp, edx
        jne public_633eaf0
        public_633eb0a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_633ecae
        push 0
        push esi
        mov ecx, edi
        call public_6340cf0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6341200
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_633eb69
        cmp ebp, dword ptr ds : [edi+8]
        jne public_633eb69
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_633eb69
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_633eb8f
        mov dword ptr ds : [eax+8], ebx
        jmp public_633eb8f
        public_633eb69 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_633eb81
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_633eb8b
        public_633eb81 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_633eb8b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_633eb8b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_633eb8f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_633ec8f
        lea ecx, ds:[ecx]
        public_633eba0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x80]
        test cl, cl
        jne public_633ec8f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_633ec23
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x80]
        test dl, dl
        jne public_633ebed
        mov byte ptr ds : [eax+0x80], 1
        mov byte ptr ds : [ecx+0x80], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x80], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_633ec83
        public_633ebed : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_633ebfc
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_633ebfc : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x80], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x80], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_633ec83
        public_633ec23 : nop
        mov dl, byte ptr ds : [ecx+0x80]
        test dl, dl
        jne public_633ec50
        mov byte ptr ds : [eax+0x80], 1
        mov byte ptr ds : [ecx+0x80], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x80], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_633ec83
        public_633ec50 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_633ec5e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_633ec5e : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x80], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x80], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_633ec83 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_633eba0
        public_633ec8f : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x80], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_633ecae : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_633ecc9
        cmp esi, dword ptr ds : [ecx]
        je public_633ecd0
        lea ecx, ss:[esp+0x10]
        call public_6340d20
        mov edx, dword ptr ss : [esp+0x10]
        public_633ecc9 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_633ecf3
        public_633ecd0 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6340180
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
        public_633ecf3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x633ead0)
    }
}

#undef public_633eaf0
#undef public_633eb03
#undef public_633eb06
#undef public_633eb0a
#undef public_633eb69
#undef public_633eb81
#undef public_633eb8b
#undef public_633eb8f
#undef public_633eba0
#undef public_633ebed
#undef public_633ebfc
#undef public_633ec23
#undef public_633ec50
#undef public_633ec5e
#undef public_633ec83
#undef public_633ec8f
#undef public_633ecae
#undef public_633ecc9
#undef public_633ecd0
#undef public_633ecf3
