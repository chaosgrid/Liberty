#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1660);

#define public_62bfaae _public_62bfaae

PROC_DECLARE(0x62bfa80, internal_62bfa80, public_62bfa80);
extern "C" NAKED register_t __cdecl internal_62bfa80()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfaae
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bfaae
        push esi
        xor esi, esi
        call public_62b1660
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx], al
        mov eax, esi
        pop esi
        public_62bfaae : nop
        ret 4
        UNREACHABLE_TRAP(0x62bfa80)
    }
}

#undef public_62bfaae
