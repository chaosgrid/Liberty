#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417280);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x417250, internal_417250, public_417250);
extern "C" NAKED register_t __cdecl internal_417250()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_429dcc], al
        xor eax, eax
/*FIXUP push offset _public_417280 @0x41725c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_417280
        mov dword ptr ds : [public_429dd0], eax
        mov dword ptr ds : [public_429dd4], eax
        mov dword ptr ds : [public_429dd8], eax
        call public_419410
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x417250)
    }
}
