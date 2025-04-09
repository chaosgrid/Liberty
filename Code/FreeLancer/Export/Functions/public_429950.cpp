#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429950);

#define public_429973 _public_429973
#define public_42998a _public_42998a

PROC_DECLARE(0x429950, internal_429950, public_429950);
extern "C" NAKED register_t __cdecl internal_429950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_42998a
        mov ecx, 2
        cmp eax, ecx
        jne public_429973
        mov eax, dword ptr ss : [esp+4]
        test byte ptr ds : [eax+0xC], cl
        jne public_42998a
        fld dword ptr ds : [public_667c9c]
        ret 8
        public_429973 : nop
        cmp eax, 1
        jne public_42998a
        mov edx, dword ptr ss : [esp+4]
        test byte ptr ds : [edx+0xC], cl
        je public_42998a
        fld dword ptr ds : [public_5ca238]
        ret 8
        public_42998a : nop
        fld dword ptr ds : [public_5c7474]
        ret 8
        UNREACHABLE_TRAP(0x429950)
    }
}

#undef public_429973
#undef public_42998a
