#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4ee0);

#define public_62c1121 _public_62c1121

PROC_DECLARE(0x62c1100, internal_62c1100, public_62c1100);
extern "C" NAKED register_t __cdecl internal_62c1100()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62c1121
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c1121
        call public_62b4ee0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        public_62c1121 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62c1100)
    }
}

#undef public_62c1121
