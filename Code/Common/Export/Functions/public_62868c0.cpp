#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62868e3 _public_62868e3
#define public_62868e5 _public_62868e5
#define public_62868f2 _public_62868f2

PROC_DECLARE(0x62868c0, internal_62868c0, public_62868c0);
extern "C" NAKED register_t __cdecl internal_62868c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [eax+0x90]
        test edx, edx
        je public_62868f2
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0xF0
        test eax, eax
        je public_62868e3
        add eax, 8
        jmp public_62868e5
        public_62868e3 : nop
        xor eax, eax
        public_62868e5 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62868f2
        mov dword ptr ss : [esp+4], eax
        jmp public_6341610
        public_62868f2 : nop
        ret 4
        UNREACHABLE_TRAP(0x62868c0)
    }
}

#undef public_62868e3
#undef public_62868e5
#undef public_62868f2
