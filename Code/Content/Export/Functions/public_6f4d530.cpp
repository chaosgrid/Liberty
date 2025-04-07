#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f4d530, internal_6f4d530, public_6f4d530);
extern "C" NAKED register_t __cdecl internal_6f4d530()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6fd0c28], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6f4d570 @0x6f4d546*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4d570
        mov dword ptr ds : [public_6fd0c2c], eax
        mov dword ptr ds : [public_6fd0c30], 0
        call public_6fa9162
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f4d530)
    }
}
