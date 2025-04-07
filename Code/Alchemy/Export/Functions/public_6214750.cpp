#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214750);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_621477c _public_621477c

PROC_DECLARE(0x6214750, internal_6214750, public_6214750);
extern "C" NAKED register_t __cdecl internal_6214750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+4]
        push edi
        push ebx
        push esi
        call public_623f960
        test eax, eax
        jne public_621477c
        push edi
        push ebx
/*FIXUP push offset public_6255af4 @0x6214770*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255af4
        mov ecx, esi
        call public_623f920
        public_621477c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6214750)
    }
}

#undef public_621477c
