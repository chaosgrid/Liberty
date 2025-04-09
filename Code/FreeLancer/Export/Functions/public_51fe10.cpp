#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51fe50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x51fe10, internal_51fe10, public_51fe10);
extern "C" NAKED register_t __cdecl internal_51fe10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6753c0], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_51fe50 @0x51fe26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_51fe50
        mov dword ptr ds : [public_6753c4], eax
        mov dword ptr ds : [public_6753c8], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x51fe10)
    }
}
