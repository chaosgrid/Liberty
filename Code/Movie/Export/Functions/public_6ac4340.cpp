#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4340);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);

#define public_6ac4362 _public_6ac4362
#define public_6ac4381 _public_6ac4381

PROC_DECLARE(0x6ac4340, internal_6ac4340, public_6ac4340);
extern "C" NAKED register_t __cdecl internal_6ac4340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push edi
        mov ebx, dword ptr ds : [eax+0x100]
        xor edi, edi
        test ebx, ebx
        jbe public_6ac4381
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ebp
        push esi
        sub edx, eax
        mov esi, ebx
        public_6ac4362 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ecx
        or edi, ecx
        add eax, 4
        dec esi
        jne public_6ac4362
        test edi, edi
        pop esi
        je public_6ac4381
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push ebp
        push ecx
        call public_6ac89d0
        public_6ac4381 : nop
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ac4340)
    }
}

#undef public_6ac4362
#undef public_6ac4381
