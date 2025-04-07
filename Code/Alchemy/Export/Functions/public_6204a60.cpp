#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_6204a89 _public_6204a89

PROC_DECLARE(0x6204a60, internal_6204a60, public_6204a60);
extern "C" NAKED register_t __cdecl internal_6204a60()
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
        call public_6244320
        test eax, eax
        jne public_6204a89
        push esi
        push edi
/*FIXUP push offset public_62555c0 @0x6204a7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62555c0
        mov ecx, ebx
        call public_623f920
        public_6204a89 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6204a60)
    }
}

#undef public_6204a89
