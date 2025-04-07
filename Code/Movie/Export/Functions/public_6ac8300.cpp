#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8300);
CLANG_FORWARD_PROC_SYMBOL(public_6aca450);

#define public_6ac8321 _public_6ac8321
#define public_6ac833b _public_6ac833b

PROC_DECLARE(0x6ac8300, internal_6ac8300, public_6ac8300);
extern "C" NAKED register_t __cdecl internal_6ac8300()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        cmp edi, ebx
        jae public_6ac8321
        mov eax, ebx
        pop edi
        mov dword ptr ds : [public_6ae097c], 0x2D
        pop ebx
        pop ebp
        ret 8
        public_6ac8321 : nop
        sub edi, ebx
        push esi
        mov eax, edi
        or al, 1
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+0xC]
        bsr eax, eax
        add eax, 1
        mov esi, 0x20
        sub esi, eax
        public_6ac833b : nop
        lea ecx, ss:[ebp+0xC]
        push 4
        push ecx
        call public_6aca450
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, esi
        shr eax, cl
        cmp eax, edi
        ja public_6ac833b
        pop esi
        add eax, ebx
        pop edi
        pop ebx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ac8300)
    }
}

#undef public_6ac8321
#undef public_6ac833b
