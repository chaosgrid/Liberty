#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576a50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x576a10, internal_576a10, public_576a10);
extern "C" NAKED register_t __cdecl internal_576a10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x24
        mov byte ptr ds : [public_67c224], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_576a50 @0x576a26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_576a50
        mov dword ptr ds : [public_67c228], eax
        mov dword ptr ds : [public_67c22c], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x576a10)
    }
}
