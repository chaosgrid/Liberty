#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d435a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d43560, internal_6d43560, public_6d43560);
extern "C" NAKED register_t __cdecl internal_6d43560()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6d8f628], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6d435a0 @0x6d43576*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d435a0
        mov dword ptr ds : [public_6d8f62c], eax
        mov dword ptr ds : [public_6d8f630], 0
        call public_6d6013e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d43560)
    }
}
