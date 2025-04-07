#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4470);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6eb4440, internal_6eb4440, public_6eb4440);
extern "C" NAKED register_t __cdecl internal_6eb4440()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fcef24], al
        xor eax, eax
/*FIXUP push offset _public_6eb4470 @0x6eb444c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb4470
        mov dword ptr ds : [public_6fcef28], eax
        mov dword ptr ds : [public_6fcef2c], eax
        mov dword ptr ds : [public_6fcef30], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eb4440)
    }
}
