#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6f40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f6f10, internal_4f6f10, public_4f6f10);
extern "C" NAKED register_t __cdecl internal_4f6f10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_674f14], al
        xor eax, eax
/*FIXUP push offset _public_4f6f40 @0x4f6f1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f6f40
        mov dword ptr ds : [public_674f18], eax
        mov dword ptr ds : [public_674f1c], eax
        mov dword ptr ds : [public_674f20], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4f6f10)
    }
}
