#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4550);
CLANG_FORWARD_PROC_SYMBOL(public_6ac85c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);

#define public_6ac4590 _public_6ac4590

PROC_DECLARE(0x6ac4550, internal_6ac4550, public_6ac4550);
extern "C" NAKED register_t __cdecl internal_6ac4550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x100]
        push edi
        push ebx
        push eax
        push ecx
        call public_6ac89d0
        mov esi, eax
        test esi, esi
        je public_6ac4590
        push edi
        push ebx
        push ebp
        push ebx
        call public_6ac85c0
        sub esi, eax
        je public_6ac4590
        mov dword ptr ds : [public_6ae097c], 0x1D
        public_6ac4590 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac4550)
    }
}

#undef public_6ac4590
