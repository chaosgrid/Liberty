#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1790);

#define public_62c1066 _public_62c1066

PROC_DECLARE(0x62c1040, internal_62c1040, public_62c1040);
extern "C" NAKED register_t __cdecl internal_62c1040()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62c1066
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c1066
        call public_62b1790
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx], al
        xor eax, eax
        ret 4
        public_62c1066 : nop
        mov edx, dword ptr ss : [esp+4]
        mov byte ptr ds : [edx], 0
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62c1040)
    }
}

#undef public_62c1066
