#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c5630, internal_4c5630, public_4c5630);
extern "C" NAKED register_t __cdecl internal_4c5630()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6728c8], al
        xor eax, eax
/*FIXUP push offset _public_4c5660 @0x4c563c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c5660
        mov dword ptr ds : [public_6728cc], eax
        mov dword ptr ds : [public_6728d0], eax
        mov dword ptr ds : [public_6728d4], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4c5630)
    }
}
