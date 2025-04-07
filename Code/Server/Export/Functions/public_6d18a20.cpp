#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d18a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d18a20, internal_6d18a20, public_6d18a20);
extern "C" NAKED register_t __cdecl internal_6d18a20()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x10
        mov byte ptr ds : [public_6d8f5bc], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6d18a60 @0x6d18a36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d18a60
        mov dword ptr ds : [public_6d8f5c0], eax
        mov dword ptr ds : [public_6d8f5c4], 0
        call public_6d6013e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d18a20)
    }
}
