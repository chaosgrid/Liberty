#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6c40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6c90);

#define public_6ac6c87 _public_6ac6c87

PROC_DECLARE(0x6ac6c40, internal_6ac6c40, public_6ac6c40);
extern "C" NAKED register_t __cdecl internal_6ac6c40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        mov eax, dword ptr ds : [eax]
        lea ecx, ds:[eax+eax*4]
        lea ebx, ds:[edi+ecx*4]
        push ebx
        push edx
        call public_6ac6bb0
        test eax, eax
        je public_6ac6c87
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push esi
        push eax
        push ebx
        push ecx
        call public_6ac6c90
        test eax, eax
        je public_6ac6c87
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 0x14
        public_6ac6c87 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ac6c40)
    }
}

#undef public_6ac6c87
