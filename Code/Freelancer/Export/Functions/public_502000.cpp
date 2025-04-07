#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502040);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x502000, internal_502000, public_502000);
extern "C" NAKED register_t __cdecl internal_502000()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x70
        mov byte ptr ds : [public_674fd4], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_502040 @0x502016*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502040
        mov dword ptr ds : [public_674fd8], eax
        mov dword ptr ds : [public_674fdc], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x502000)
    }
}
