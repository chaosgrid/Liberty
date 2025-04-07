#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320240);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6320210, internal_6320210, public_6320210);
extern "C" NAKED register_t __cdecl internal_6320210()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_64018b4], al
        xor eax, eax
/*FIXUP push offset _public_6320240 @0x632021c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6320240
        mov dword ptr ds : [public_64018b8], eax
        mov dword ptr ds : [public_64018bc], eax
        mov dword ptr ds : [public_64018c0], eax
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6320210)
    }
}
