#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62a3fed _public_62a3fed
#define public_62a3ff5 _public_62a3ff5
#define public_62a4000 _public_62a4000

PROC_DECLARE(0x62a3fc0, internal_62a3fc0, public_62a3fc0);
extern "C" NAKED register_t __cdecl internal_62a3fc0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_63fc294
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc298]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_62a3fed
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62a3fed
        lea eax, ss:[esp]
        jmp public_62a3ff5
        public_62a3fed : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_62a3ff5 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62a4000
        add eax, 0x10
        pop ecx
        ret 
        public_62a4000 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62a3fc0)
    }
}

#undef public_62a3fed
#undef public_62a3ff5
#undef public_62a4000
