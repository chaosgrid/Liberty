#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63227e0);
CLANG_FORWARD_PROC_SYMBOL(public_6323af0);
CLANG_FORWARD_PROC_SYMBOL(public_6323dc0);

#define public_6322800 _public_6322800
#define public_6322813 _public_6322813
#define public_6322816 _public_6322816
#define public_632281a _public_632281a
#define public_6322853 _public_6322853
#define public_6322860 _public_6322860
#define public_6322868 _public_6322868
#define public_632288c _public_632288c

PROC_DECLARE(0x63227e0, internal_63227e0, public_63227e0);
extern "C" NAKED register_t __cdecl internal_63227e0()
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
        je public_632281a
        lea esp, ss:[esp]
        public_6322800 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setl al
        test al, al
        je public_6322813
        mov esi, dword ptr ds : [esi]
        jmp public_6322816
        public_6322813 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6322816 : nop
        cmp esi, ecx
        jne public_6322800
        public_632281a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6322868
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6322860
        cmp edi, dword ptr ds : [edx]
        jne public_6322853
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6323af0
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
        public_6322853 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6323dc0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6322860 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jge public_632288c
        public_6322868 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6323af0
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
        public_632288c : nop
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
        UNREACHABLE_TRAP(0x63227e0)
    }
}

#undef public_6322800
#undef public_6322813
#undef public_6322816
#undef public_632281a
#undef public_6322853
#undef public_6322860
#undef public_6322868
#undef public_632288c
