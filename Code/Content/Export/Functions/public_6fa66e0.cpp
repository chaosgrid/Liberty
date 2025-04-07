#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6710);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6fa66e0, internal_6fa66e0, public_6fa66e0);
extern "C" NAKED register_t __cdecl internal_6fa66e0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd3d90], al
        xor eax, eax
/*FIXUP push offset _public_6fa6710 @0x6fa66ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6fa6710
        mov dword ptr ds : [public_6fd3d94], eax
        mov dword ptr ds : [public_6fd3d98], eax
        mov dword ptr ds : [public_6fd3d9c], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6fa66e0)
    }
}
