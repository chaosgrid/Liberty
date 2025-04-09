#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x555d10, internal_555d10, public_555d10);
extern "C" NAKED register_t __cdecl internal_555d10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_679998], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_555d50 @0x555d26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_555d50
        mov dword ptr ds : [public_67999c], eax
        mov dword ptr ds : [public_6799a0], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x555d10)
    }
}
