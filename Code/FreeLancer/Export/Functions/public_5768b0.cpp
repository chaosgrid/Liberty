#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5768f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5768b0, internal_5768b0, public_5768b0);
extern "C" NAKED register_t __cdecl internal_5768b0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x10
        mov byte ptr ds : [public_67c260], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5768f0 @0x5768c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5768f0
        mov dword ptr ds : [public_67c264], eax
        mov dword ptr ds : [public_67c268], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5768b0)
    }
}
