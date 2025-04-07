#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3040);

#define public_62c0356 _public_62c0356

PROC_DECLARE(0x62c0330, internal_62c0330, public_62c0330);
extern "C" NAKED register_t __cdecl internal_62c0330()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62c0356
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c0356
        call public_62b3040
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        ret 4
        public_62c0356 : nop
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x62c0330)
    }
}

#undef public_62c0356
