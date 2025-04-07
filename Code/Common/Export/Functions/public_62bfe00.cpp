#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);

#define public_62bfe16 _public_62bfe16

PROC_DECLARE(0x62bfe00, internal_62bfe00, public_62bfe00);
extern "C" NAKED register_t __cdecl internal_62bfe00()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bfe16
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        jne public_62bfe16
        jmp public_62b5e00
        public_62bfe16 : nop
        fld dword ptr ds : [public_6399408]
        ret 
        UNREACHABLE_TRAP(0x62bfe00)
    }
}

#undef public_62bfe16
