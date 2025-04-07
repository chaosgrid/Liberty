#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef380, internal_62ef380, public_62ef380);
extern "C" NAKED register_t __cdecl internal_62ef380()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_63fcafc], al
        xor eax, eax
/*FIXUP push offset _public_62ef3b0 @0x62ef38c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef3b0
        mov dword ptr ds : [public_63fcb00], eax
        mov dword ptr ds : [public_63fcb04], eax
        mov dword ptr ds : [public_63fcb08], eax
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62ef380)
    }
}
