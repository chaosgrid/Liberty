#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62715ea _public_62715ea
#define public_62715f2 _public_62715f2
#define public_6271607 _public_6271607

PROC_DECLARE(0x62715b0, internal_62715b0, public_62715b0);
extern "C" NAKED register_t __cdecl internal_62715b0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fbb80
        xor esi, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fbb84]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_62715ea
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62715ea
        lea eax, ss:[esp+4]
        jmp public_62715f2
        public_62715ea : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_62715f2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6271607
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6271607
        mov eax, dword ptr ds : [eax+0x50]
        pop esi
        add esp, 8
        ret 
        public_6271607 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62715b0)
    }
}

#undef public_62715ea
#undef public_62715f2
#undef public_6271607
