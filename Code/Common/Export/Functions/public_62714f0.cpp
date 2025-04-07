#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62714f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_6271533 _public_6271533
#define public_627153b _public_627153b
#define public_6271549 _public_6271549

PROC_DECLARE(0x62714f0, internal_62714f0, public_62714f0);
extern "C" NAKED register_t __cdecl internal_62714f0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push eax
        call public_630d3f0
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fbb80
        mov dword ptr ss : [esp+0x14], eax
        xor esi, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fbb84]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_6271533
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6271533
        lea eax, ss:[esp+4]
        jmp public_627153b
        public_6271533 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_627153b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6271549
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        add esp, 8
        ret 
        public_6271549 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62714f0)
    }
}

#undef public_6271533
#undef public_627153b
#undef public_6271549
