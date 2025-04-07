#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53500);

#define public_6f53515 _public_6f53515
#define public_6f53521 _public_6f53521
#define public_6f53524 _public_6f53524

PROC_DECLARE(0x6f53500, internal_6f53500, public_6f53500);
extern "C" NAKED register_t __cdecl internal_6f53500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x14]
        dec eax
        js public_6f53521
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ds:[ecx+eax*4+0x124]
        public_6f53515 : nop
        cmp edx, dword ptr ds : [ecx]
        je public_6f53524
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6f53515
        public_6f53521 : nop
        or eax, 0xFFFFFFFF
        public_6f53524 : nop
        ret 
        UNREACHABLE_TRAP(0x6f53500)
    }
}

#undef public_6f53515
#undef public_6f53521
#undef public_6f53524
