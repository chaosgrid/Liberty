#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4278e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4278a0, internal_4278a0, public_4278a0);
extern "C" NAKED register_t __cdecl internal_4278a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_667c6c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_4278e0 @0x4278b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4278e0
        mov dword ptr ds : [public_667c70], eax
        mov dword ptr ds : [public_667c74], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4278a0)
    }
}
