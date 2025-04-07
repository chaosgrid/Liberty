#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_62458f0);

#define public_621c10c _public_621c10c

PROC_DECLARE(0x621c0e0, internal_621c0e0, public_621c0e0);
extern "C" NAKED register_t __cdecl internal_621c0e0()
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
        call public_62458f0
        test eax, eax
        jne public_621c10c
        push edi
        push ebx
/*FIXUP push offset public_6255e28 @0x621c100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255e28
        mov ecx, esi
        call public_623f920
        public_621c10c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621c0e0)
    }
}

#undef public_621c10c
