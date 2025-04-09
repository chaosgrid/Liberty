#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5340b0);

#define public_548543 _public_548543
#define public_548545 _public_548545
#define public_548563 _public_548563

PROC_DECLARE(0x548520, internal_548520, public_548520);
extern "C" NAKED register_t __cdecl internal_548520()
{
    __asm
    {
        test ecx, ecx
        je public_548543
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_548543
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_548543
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_548545
        public_548543 : nop
        xor eax, eax
        public_548545 : nop
        test byte ptr ds : [eax+0xE0], 0xF
        jne public_548563
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], eax
        jmp public_5340b0
        public_548563 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x548520)
    }
}

#undef public_548543
#undef public_548545
#undef public_548563
