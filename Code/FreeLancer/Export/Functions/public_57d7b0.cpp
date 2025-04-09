#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57d7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x57d7b0, internal_57d7b0, public_57d7b0);
extern "C" NAKED register_t __cdecl internal_57d7b0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_67c3fc], al
        xor eax, eax
/*FIXUP push offset _public_57d7e0 @0x57d7bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_57d7e0
        mov dword ptr ds : [public_67c400], eax
        mov dword ptr ds : [public_67c404], eax
        mov dword ptr ds : [public_67c408], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x57d7b0)
    }
}
