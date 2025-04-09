#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x579110, internal_579110, public_579110);
extern "C" NAKED register_t __cdecl internal_579110()
{
    __asm
    {
        xor eax, eax
        mov cl, 1
/*FIXUP push offset _public_579150 @0x579114*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_579150
        mov dword ptr ds : [public_67c3b8], offset public_5e448c
        mov dword ptr ds : [public_67c3bc], eax
        mov byte ptr ds : [public_67c3d8], cl
        mov byte ptr ds : [public_67c3e0], al
        mov byte ptr ds : [public_67c3d9], cl
        mov byte ptr ds : [public_67c3da], cl
        mov byte ptr ds : [public_67c3db], al
        mov dword ptr ds : [public_67c3c0], eax
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x579110)
    }
}
