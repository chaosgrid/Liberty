#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_62458f0);

#define public_623b9d9 _public_623b9d9

PROC_DECLARE(0x623b9b0, internal_623b9b0, public_623b9b0);
extern "C" NAKED register_t __cdecl internal_623b9b0()
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
        jne public_623b9d9
        push esi
        push edi
/*FIXUP push offset public_6256c4c @0x623b9cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256c4c
        mov ecx, ebx
        call public_623f920
        public_623b9d9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623b9b0)
    }
}

#undef public_623b9d9
