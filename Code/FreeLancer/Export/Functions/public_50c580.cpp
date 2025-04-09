#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x50c580, internal_50c580, public_50c580);
extern "C" NAKED register_t __cdecl internal_50c580()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_67517c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_50c5c0 @0x50c596*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_50c5c0
        mov dword ptr ds : [public_675180], eax
        mov dword ptr ds : [public_675184], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x50c580)
    }
}
