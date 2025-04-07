#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_62458f0);

#define public_621d079 _public_621d079

PROC_DECLARE(0x621d050, internal_621d050, public_621d050);
extern "C" NAKED register_t __cdecl internal_621d050()
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
        jne public_621d079
        push esi
        push edi
/*FIXUP push offset public_6255f30 @0x621d06d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255f30
        mov ecx, ebx
        call public_623f920
        public_621d079 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621d050)
    }
}

#undef public_621d079
