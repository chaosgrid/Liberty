#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1740);

#define public_62bf98e _public_62bf98e

PROC_DECLARE(0x62bf960, internal_62bf960, public_62bf960);
extern "C" NAKED register_t __cdecl internal_62bf960()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bf98e
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bf98e
        push esi
        xor esi, esi
        call public_62b1740
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        public_62bf98e : nop
        ret 4
        UNREACHABLE_TRAP(0x62bf960)
    }
}

#undef public_62bf98e
