#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec860);
CLANG_FORWARD_PROC_SYMBOL(public_6f49a30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f49a00, internal_6f49a00, public_6f49a00);
extern "C" NAKED register_t __cdecl internal_6f49a00()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0bbc
        call public_6eec860
/*FIXUP push offset _public_6f49a30 @0x6f49a15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f49a30
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f49a00)
    }
}
