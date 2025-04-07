#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630e510);
CLANG_FORWARD_PROC_SYMBOL(public_631f3f0);

#define public_631f43c _public_631f43c
#define public_631f444 _public_631f444
#define public_631f451 _public_631f451

PROC_DECLARE(0x631f3f0, internal_631f3f0, public_631f3f0);
extern "C" NAKED register_t __cdecl internal_631f3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        test ecx, ecx
        je public_631f451
        add eax, 4
        push eax
        call public_630e510
        add esp, 4
        movzx eax, ax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_64018ec
        mov dword ptr ss : [esp+0x10], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_631f43c
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631f43c
        lea eax, ss:[esp]
        jmp public_631f444
        public_631f43c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_631f444 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_631f451
        mov eax, dword ptr ds : [eax+0xC]
        add esp, 8
        ret 
        public_631f451 : nop
        or eax, 0xFFFFFFFF
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631f3f0)
    }
}

#undef public_631f43c
#undef public_631f444
#undef public_631f451
