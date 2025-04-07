#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633df60);
CLANG_FORWARD_PROC_SYMBOL(public_63408f0);
CLANG_FORWARD_PROC_SYMBOL(public_6340db0);

#define public_633df80 _public_633df80
#define public_633df93 _public_633df93
#define public_633df96 _public_633df96
#define public_633df9a _public_633df9a
#define public_633dfd3 _public_633dfd3
#define public_633dfe0 _public_633dfe0
#define public_633dfe8 _public_633dfe8
#define public_633e00c _public_633e00c

PROC_DECLARE(0x633df60, internal_633df60, public_633df60);
extern "C" NAKED register_t __cdecl internal_633df60()
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
        je public_633df9a
        lea esp, ss:[esp]
        public_633df80 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_633df93
        mov esi, dword ptr ds : [esi]
        jmp public_633df96
        public_633df93 : nop
        mov esi, dword ptr ds : [esi+8]
        public_633df96 : nop
        cmp esi, ecx
        jne public_633df80
        public_633df9a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_633dfe8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_633dfe0
        cmp edi, dword ptr ds : [edx]
        jne public_633dfd3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_63408f0
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
        public_633dfd3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6340db0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_633dfe0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_633e00c
        public_633dfe8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_63408f0
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
        public_633e00c : nop
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
        UNREACHABLE_TRAP(0x633df60)
    }
}

#undef public_633df80
#undef public_633df93
#undef public_633df96
#undef public_633df9a
#undef public_633dfd3
#undef public_633dfe0
#undef public_633dfe8
#undef public_633e00c
