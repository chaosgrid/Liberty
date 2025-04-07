#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_6223309 _public_6223309

PROC_DECLARE(0x62232e0, internal_62232e0, public_62232e0);
extern "C" NAKED register_t __cdecl internal_62232e0()
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
        call public_623f960
        test eax, eax
        jne public_6223309
        push esi
        push edi
/*FIXUP push offset public_6256240 @0x62232fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256240
        mov ecx, ebx
        call public_623f920
        public_6223309 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62232e0)
    }
}

#undef public_6223309
