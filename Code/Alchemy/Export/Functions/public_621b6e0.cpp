#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_62458f0);

#define public_621b709 _public_621b709

PROC_DECLARE(0x621b6e0, internal_621b6e0, public_621b6e0);
extern "C" NAKED register_t __cdecl internal_621b6e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebx
        call public_62458f0
        test eax, eax
        jne public_621b709
        push esi
        push edi
/*FIXUP push offset public_6255e28 @0x621b6fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255e28
        mov ecx, ebx
        call public_623f920
        public_621b709 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621b6e0)
    }
}

#undef public_621b709
