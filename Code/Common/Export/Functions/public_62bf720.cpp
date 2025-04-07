#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3db0);

#define public_62bf753 _public_62bf753

PROC_DECLARE(0x62bf720, internal_62bf720, public_62bf720);
extern "C" NAKED register_t __cdecl internal_62bf720()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf753
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf753
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_62b3db0
        public_62bf753 : nop
        fld dword ptr ds : [public_6399404]
        ret 0xC
        UNREACHABLE_TRAP(0x62bf720)
    }
}

#undef public_62bf753
