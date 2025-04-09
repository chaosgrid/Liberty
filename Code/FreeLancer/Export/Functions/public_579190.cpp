#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579190);

PROC_DECLARE(0x579190, internal_579190, public_579190);
extern "C" NAKED register_t __cdecl internal_579190()
{
    __asm
    {
        call dword ptr ds : [public_5c6c08]
        mov dword ptr ds : [public_67c3c8], eax
        xor al, al
        mov dword ptr ds : [public_67c3cc], edx
        mov byte ptr ds : [public_67c3e0], al
        mov byte ptr ds : [public_67c3d9], al
        mov byte ptr ds : [public_67c3da], 1
        ret 
        UNREACHABLE_TRAP(0x579190)
    }
}
