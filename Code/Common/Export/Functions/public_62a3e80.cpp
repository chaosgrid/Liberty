#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7500);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62a3eaf _public_62a3eaf
#define public_62a3eb7 _public_62a3eb7
#define public_62a3edb _public_62a3edb
#define public_62a3ee4 _public_62a3ee4

PROC_DECLARE(0x62a3e80, internal_62a3e80, public_62a3e80);
extern "C" NAKED register_t __cdecl internal_62a3e80()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fc294
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc298]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_62a3eaf
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62a3eaf
        lea eax, ss:[esp]
        jmp public_62a3eb7
        public_62a3eaf : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_62a3eb7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62a3ee4
        dec dword ptr ds : [eax+0x10]
        jne public_62a3edb
        push eax
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_63fc294
        call public_62a7500
        mov eax, 1
        add esp, 8
        ret 
        public_62a3edb : nop
        mov eax, 2
        add esp, 8
        ret 
        public_62a3ee4 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a3e80)
    }
}

#undef public_62a3eaf
#undef public_62a3eb7
#undef public_62a3edb
#undef public_62a3ee4
