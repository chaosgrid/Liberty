#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb83e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb83f8 _public_6eb83f8
#define public_6eb8406 _public_6eb8406
#define public_6eb840e _public_6eb840e
#define public_6eb843d _public_6eb843d
#define public_6eb8450 _public_6eb8450
#define public_6eb846f _public_6eb846f
#define public_6eb8484 _public_6eb8484
#define public_6eb8491 _public_6eb8491
#define public_6eb84a0 _public_6eb84a0
#define public_6eb84aa _public_6eb84aa
#define public_6eb84b1 _public_6eb84b1
#define public_6eb84b9 _public_6eb84b9

PROC_DECLARE(0x6eb83e0, internal_6eb83e0, public_6eb83e0);
extern "C" NAKED register_t __cdecl internal_6eb83e0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x1C8]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        je public_6eb843d
        mov esi, dword ptr ss : [ebp]
        public_6eb83f8 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0xC], esi
        jne public_6eb8406
        cmp dword ptr ds : [ecx+0x10], 2
        jne public_6eb840e
        public_6eb8406 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6eb83f8
        jmp public_6eb843d
        public_6eb840e : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x1CC]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x1CC], eax
        public_6eb843d : nop
        mov ecx, dword ptr ds : [ebx+0x1D4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6eb84b9
        lea esp, ss:[esp]
        public_6eb8450 : nop
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ss : [ebp]
        jne public_6eb846f
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[ebx+0x1D0]
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6eb84b1
        public_6eb846f : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6eb8491
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6eb84b1
        public_6eb8484 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6eb8484
        jmp public_6eb84b1
        public_6eb8491 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eb84aa
        lea esp, ss:[esp]
        public_6eb84a0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6eb84a0
        public_6eb84aa : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6eb84b1
        mov eax, ecx
        public_6eb84b1 : nop
        cmp eax, dword ptr ds : [ebx+0x1D4]
        jne public_6eb8450
        public_6eb84b9 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb83e0)
    }
}

#undef public_6eb83f8
#undef public_6eb8406
#undef public_6eb840e
#undef public_6eb843d
#undef public_6eb8450
#undef public_6eb846f
#undef public_6eb8484
#undef public_6eb8491
#undef public_6eb84a0
#undef public_6eb84aa
#undef public_6eb84b1
#undef public_6eb84b9
