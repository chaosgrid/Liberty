#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540b70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x540b30, internal_540b30, public_540b30);
extern "C" NAKED register_t __cdecl internal_540b30()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_678a30], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_540b70 @0x540b46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_540b70
        mov dword ptr ds : [public_678a34], eax
        mov dword ptr ds : [public_678a38], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x540b30)
    }
}
