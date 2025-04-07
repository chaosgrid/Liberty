#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d7538 _public_62d7538
#define public_62d7559 _public_62d7559

PROC_DECLARE(0x62d7510, internal_62d7510, public_62d7510);
extern "C" NAKED register_t __cdecl internal_62d7510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62d7538
        mov dword ptr ds : [ecx+0xA0], 1
        mov edx, dword ptr ds : [ecx+0x14]
        add ecx, 0x14
        add eax, 8
        cmp eax, edx
        je public_62d7559
        mov dword ptr ss : [esp+4], eax
        jmp public_6341610
        public_62d7538 : nop
        mov dword ptr ds : [ecx+0xA0], 0
        mov eax, dword ptr ds : [ecx+0x14]
        add ecx, 0x14
        test eax, eax
        je public_62d7559
        mov dword ptr ss : [esp+4], 0
        jmp public_6341610
        public_62d7559 : nop
        ret 4
        UNREACHABLE_TRAP(0x62d7510)
    }
}

#undef public_62d7538
#undef public_62d7559
