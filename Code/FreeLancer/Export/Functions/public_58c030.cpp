#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58b360);
CLANG_FORWARD_PROC_SYMBOL(public_58bcb0);

#define public_58c058 _public_58c058
#define public_58c060 _public_58c060
#define public_58c07c _public_58c07c
#define public_58c099 _public_58c099
#define public_58c0a0 _public_58c0a0

PROC_DECLARE(0x58c030, internal_58c030, public_58c030);
extern "C" NAKED register_t __cdecl internal_58c030()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, edx
        sub eax, 0x1D
        je public_58c099
        sub eax, 0x26
        je public_58c060
        dec eax
        jne public_58c0a0
        test byte ptr ss : [esp+8], 1
        mov byte ptr ds : [ecx+0x3AD], 0
        je public_58c058
        mov byte ptr ds : [ecx+0x3AD], 1
        public_58c058 : nop
        mov eax, 1
        ret 0xC
        public_58c060 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_58c07c
        mov byte ptr ds : [ecx+0x3AC], 0
        call public_58bcb0
        mov eax, 1
        ret 0xC
        public_58c07c : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov byte ptr ds : [ecx+0x3AC], 1
        jbe public_58c058
        mov dword ptr ds : [ecx+0x3A8], eax
        mov eax, 1
        ret 0xC
        public_58c099 : nop
        mov byte ptr ds : [ecx+0x3A4], 0
        public_58c0a0 : nop
        mov dword ptr ss : [esp+4], edx
        jmp public_58b360
        UNREACHABLE_TRAP(0x58c030)
    }
}

#undef public_58c058
#undef public_58c060
#undef public_58c07c
#undef public_58c099
#undef public_58c0a0
