#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3fb0);

#define public_62bf793 _public_62bf793

PROC_DECLARE(0x62bf760, internal_62bf760, public_62bf760);
extern "C" NAKED register_t __cdecl internal_62bf760()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf793
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf793
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_62b3fb0
        public_62bf793 : nop
        fld dword ptr ds : [public_6399404]
        ret 0xC
        UNREACHABLE_TRAP(0x62bf760)
    }
}

#undef public_62bf793
