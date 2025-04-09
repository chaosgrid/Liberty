#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x552da0, internal_552da0, public_552da0);
extern "C" NAKED register_t __cdecl internal_552da0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6798c4], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_552de0 @0x552db6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_552de0
        mov dword ptr ds : [public_6798c8], eax
        mov dword ptr ds : [public_6798cc], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x552da0)
    }
}
