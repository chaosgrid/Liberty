#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be390);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62be350, internal_62be350, public_62be350);
extern "C" NAKED register_t __cdecl internal_62be350()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x110
        mov byte ptr ds : [public_63fc4c4], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_62be390 @0x62be369*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62be390
        mov dword ptr ds : [public_63fc4c8], eax
        mov dword ptr ds : [public_63fc4cc], 0
        call public_6391f9e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62be350)
    }
}
