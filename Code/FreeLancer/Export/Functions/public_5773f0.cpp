#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5773f0, internal_5773f0, public_5773f0);
extern "C" NAKED register_t __cdecl internal_5773f0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_67c218], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_577430 @0x577406*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_577430
        mov dword ptr ds : [public_67c21c], eax
        mov dword ptr ds : [public_67c220], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5773f0)
    }
}
