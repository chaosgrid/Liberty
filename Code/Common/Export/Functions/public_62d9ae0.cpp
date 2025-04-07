#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d9ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d9af0 _public_62d9af0
#define public_62d9af2 _public_62d9af2
#define public_62d9aff _public_62d9aff

PROC_DECLARE(0x62d9ae0, internal_62d9ae0, public_62d9ae0);
extern "C" NAKED register_t __cdecl internal_62d9ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x14
        test eax, eax
        je public_62d9af0
        add eax, 8
        jmp public_62d9af2
        public_62d9af0 : nop
        xor eax, eax
        public_62d9af2 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62d9aff
        mov dword ptr ss : [esp+4], eax
        jmp public_6341610
        public_62d9aff : nop
        ret 4
        UNREACHABLE_TRAP(0x62d9ae0)
    }
}

#undef public_62d9af0
#undef public_62d9af2
#undef public_62d9aff
