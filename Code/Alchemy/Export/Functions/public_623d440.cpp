#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_623d469 _public_623d469

PROC_DECLARE(0x623d440, internal_623d440, public_623d440);
extern "C" NAKED register_t __cdecl internal_623d440()
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
        jne public_623d469
        push esi
        push edi
/*FIXUP push offset public_6256ccc @0x623d45d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256ccc
        mov ecx, ebx
        call public_623f920
        public_623d469 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623d440)
    }
}

#undef public_623d469
