#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631f8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x631f8c0, internal_631f8c0, public_631f8c0);
extern "C" NAKED register_t __cdecl internal_631f8c0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_64018dc], al
        xor eax, eax
/*FIXUP push offset _public_631f8f0 @0x631f8cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631f8f0
        mov dword ptr ds : [public_64018e0], eax
        mov dword ptr ds : [public_64018e4], eax
        mov dword ptr ds : [public_64018e8], eax
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631f8c0)
    }
}
