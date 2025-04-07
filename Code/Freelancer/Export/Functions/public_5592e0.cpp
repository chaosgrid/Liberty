#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559320);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5592e0, internal_5592e0, public_5592e0);
extern "C" NAKED register_t __cdecl internal_5592e0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_679a10], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_559320 @0x5592f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_559320
        mov dword ptr ds : [public_679a14], eax
        mov dword ptr ds : [public_679a18], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5592e0)
    }
}
