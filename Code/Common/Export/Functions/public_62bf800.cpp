#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4250);

#define public_62bf82b _public_62bf82b

PROC_DECLARE(0x62bf800, internal_62bf800, public_62bf800);
extern "C" NAKED register_t __cdecl internal_62bf800()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf82b
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf82b
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], eax
        jmp public_62b4250
        public_62bf82b : nop
        fld dword ptr ds : [public_6399404]
        ret 8
        UNREACHABLE_TRAP(0x62bf800)
    }
}

#undef public_62bf82b
