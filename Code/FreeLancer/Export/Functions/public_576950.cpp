#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x576950, internal_576950, public_576950);
extern "C" NAKED register_t __cdecl internal_576950()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x28
        mov byte ptr ds : [public_67c254], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_576990 @0x576966*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_576990
        mov dword ptr ds : [public_67c258], eax
        mov dword ptr ds : [public_67c25c], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x576950)
    }
}
