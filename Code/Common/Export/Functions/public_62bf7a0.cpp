#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b40e0);

#define public_62bf7c3 _public_62bf7c3

PROC_DECLARE(0x62bf7a0, internal_62bf7a0, public_62bf7a0);
extern "C" NAKED register_t __cdecl internal_62bf7a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf7c3
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf7c3
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        jmp public_62b40e0
        public_62bf7c3 : nop
        fld dword ptr ds : [public_6399404]
        ret 4
        UNREACHABLE_TRAP(0x62bf7a0)
    }
}

#undef public_62bf7c3
