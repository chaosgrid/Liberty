#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a640);
CLANG_FORWARD_PROC_SYMBOL(public_626b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_626ba60);

#define public_626a660 _public_626a660
#define public_626a673 _public_626a673
#define public_626a676 _public_626a676
#define public_626a67a _public_626a67a
#define public_626a6b3 _public_626a6b3
#define public_626a6c0 _public_626a6c0
#define public_626a6c8 _public_626a6c8
#define public_626a6ec _public_626a6ec

PROC_DECLARE(0x626a640, internal_626a640, public_626a640);
extern "C" NAKED register_t __cdecl internal_626a640()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_626a67a
        lea esp, ss:[esp]
        public_626a660 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_626a673
        mov esi, dword ptr ds : [esi]
        jmp public_626a676
        public_626a673 : nop
        mov esi, dword ptr ds : [esi+8]
        public_626a676 : nop
        cmp esi, ecx
        jne public_626a660
        public_626a67a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_626a6c8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_626a6c0
        cmp edi, dword ptr ds : [edx]
        jne public_626a6b3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_626b7b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_626a6b3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_626ba60
        mov ecx, dword ptr ss : [esp+0x1C]
        public_626a6c0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_626a6ec
        public_626a6c8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_626b7b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_626a6ec : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x626a640)
    }
}

#undef public_626a660
#undef public_626a673
#undef public_626a676
#undef public_626a67a
#undef public_626a6b3
#undef public_626a6c0
#undef public_626a6c8
#undef public_626a6ec
