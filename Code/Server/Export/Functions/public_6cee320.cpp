#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6cee350);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6cee320, internal_6cee320, public_6cee320);
extern "C" NAKED register_t __cdecl internal_6cee320()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8d6fc
        call public_6ce3730
/*FIXUP push offset _public_6cee350 @0x6cee335*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cee350
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cee320)
    }
}
