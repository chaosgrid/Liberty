#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5f90);

#define public_62b5fa6 _public_62b5fa6

PROC_DECLARE(0x62b5f90, internal_62b5f90, public_62b5f90);
extern "C" NAKED register_t __cdecl internal_62b5f90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xAC]
        cmp eax, dword ptr ss : [esp+4]
        jne public_62b5fa6
        mov dword ptr ds : [ecx+0xAC], 0
        public_62b5fa6 : nop
        ret 4
        UNREACHABLE_TRAP(0x62b5f90)
    }
}

#undef public_62b5fa6
