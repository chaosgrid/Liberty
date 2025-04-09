#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8b40);

PROC_DECLARE(0x4c8b40, internal_4c8b40, public_4c8b40);
extern "C" NAKED register_t __cdecl internal_4c8b40()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        xor eax, eax
        fcos 
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], 0x3F800000
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+0x1C], eax
        fld dword ptr ss : [esp+4]
        fsin 
        fld st(1)
        fstp dword ptr ds : [ecx]
        fst dword ptr ds : [ecx+8]
        fchs 
        fstp dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [ecx+0x20]
        ret 4
        UNREACHABLE_TRAP(0x4c8b40)
    }
}
