#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a820);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x45a7e0, internal_45a7e0, public_45a7e0);
extern "C" NAKED register_t __cdecl internal_45a7e0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x10
        mov byte ptr ds : [public_66d338], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_45a820 @0x45a7f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_45a820
        mov dword ptr ds : [public_66d33c], eax
        mov dword ptr ds : [public_66d340], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x45a7e0)
    }
}
