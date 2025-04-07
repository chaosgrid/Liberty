#include "ReadFile-PCH.h"


#define public_6b71dde _public_6b71dde
#define public_6b71dec _public_6b71dec
#define public_6b71e13 _public_6b71e13

PROC_DECLARE(0x6b71dd0, internal_6b71dd0, public_6b71dd0);
extern "C" NAKED register_t __cdecl internal_6b71dd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        dec eax
        lea esi, ds:[ecx+0x20]
        cmp eax, 4
        jb public_6b71dec
        public_6b71dde : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_6b71e13
        sub eax, 4
        cmp eax, 4
        jae public_6b71dde
        public_6b71dec : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        sub edx, eax
        lea edx, ds:[edx+edx*2]
        lea eax, ds:[esi+edx*4+4]
        test eax, eax
        je public_6b71e13
        cmp dword ptr ds : [eax], 0
        je public_6b71e13
        mov dword ptr ds : [eax], 0
        mov eax, 1
        pop esi
        ret 4
        public_6b71e13 : nop
        mov dword ptr ds : [ecx+0x474], 6
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b71dd0)
    }
}

#undef public_6b71dde
#undef public_6b71dec
#undef public_6b71e13
