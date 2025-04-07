#include "Common-PCH.h"


#define public_62bbbe4 _public_62bbbe4
#define public_62bbbf3 _public_62bbbf3
#define public_62bbbf8 _public_62bbbf8

PROC_DECLARE(0x62bbbd0, internal_62bbbd0, public_62bbbd0);
extern "C" NAKED register_t __cdecl internal_62bbbd0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        fld dword ptr ds : [public_6399404]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_62bbbf8
        mov dx, word ptr ss : [esp+4]
        public_62bbbe4 : nop
        cmp word ptr ds : [eax+8], dx
        je public_62bbbf3
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62bbbe4
        ret 4
        public_62bbbf3 : nop
        fstp st(0)
        fld dword ptr ds : [eax+0xC]
        public_62bbbf8 : nop
        ret 4
        UNREACHABLE_TRAP(0x62bbbd0)
    }
}

#undef public_62bbbe4
#undef public_62bbbf3
#undef public_62bbbf8
