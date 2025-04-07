#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cffd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6cffd20, internal_6cffd20, public_6cffd20);
extern "C" NAKED register_t __cdecl internal_6cffd20()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6d8d8f4], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6cffd60 @0x6cffd36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cffd60
        mov dword ptr ds : [public_6d8d8f8], eax
        mov dword ptr ds : [public_6d8d8fc], 0
        call public_6d6013e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cffd20)
    }
}
