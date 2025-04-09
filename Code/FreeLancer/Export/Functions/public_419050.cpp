#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419090);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x419050, internal_419050, public_419050);
extern "C" NAKED register_t __cdecl internal_419050()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x38
        mov byte ptr ds : [public_61669c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_419090 @0x419066*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419090
        mov dword ptr ds : [public_6166a0], eax
        mov dword ptr ds : [public_6166a4], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x419050)
    }
}
