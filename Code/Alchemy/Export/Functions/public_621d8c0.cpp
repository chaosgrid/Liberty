#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_62458f0);

#define public_621d8ec _public_621d8ec

PROC_DECLARE(0x621d8c0, internal_621d8c0, public_621d8c0);
extern "C" NAKED register_t __cdecl internal_621d8c0()
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
        jne public_621d8ec
        push edi
        push ebx
/*FIXUP push offset public_6255f30 @0x621d8e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255f30
        mov ecx, esi
        call public_623f920
        public_621d8ec : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621d8c0)
    }
}

#undef public_621d8ec
