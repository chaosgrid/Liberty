#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d000d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d00090, internal_6d00090, public_6d00090);
extern "C" NAKED register_t __cdecl internal_6d00090()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6d8d8e0], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6d000d0 @0x6d000a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d000d0
        mov dword ptr ds : [public_6d8d8e4], eax
        mov dword ptr ds : [public_6d8d8e8], 0
        call public_6d6013e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d00090)
    }
}
