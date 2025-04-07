#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62b4ea3 _public_62b4ea3
#define public_62b4ea5 _public_62b4ea5
#define public_62b4eb2 _public_62b4eb2

PROC_DECLARE(0x62b4e90, internal_62b4e90, public_62b4e90);
extern "C" NAKED register_t __cdecl internal_62b4e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x1E0
        test eax, eax
        je public_62b4ea3
        add eax, 8
        jmp public_62b4ea5
        public_62b4ea3 : nop
        xor eax, eax
        public_62b4ea5 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62b4eb2
        mov dword ptr ss : [esp+4], eax
        jmp public_6341610
        public_62b4eb2 : nop
        ret 4
        UNREACHABLE_TRAP(0x62b4e90)
    }
}

#undef public_62b4ea3
#undef public_62b4ea5
#undef public_62b4eb2
