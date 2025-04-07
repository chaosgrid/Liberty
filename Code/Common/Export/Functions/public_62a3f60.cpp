#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62a4410);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62a3f8f _public_62a3f8f
#define public_62a3f97 _public_62a3f97
#define public_62a3fa9 _public_62a3fa9

PROC_DECLARE(0x62a3f60, internal_62a3f60, public_62a3f60);
extern "C" NAKED register_t __cdecl internal_62a3f60()
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
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_62a3f8f
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62a3f8f
        lea eax, ss:[esp]
        jmp public_62a3f97
        public_62a3f8f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_62a3f97 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62a3fa9
        lea ecx, ds:[eax+0x10]
        call public_62a4410
        add esp, 8
        ret 
        public_62a3fa9 : nop
        push edx
        call public_62a3bb0
        add esp, 4
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a3f60)
    }
}

#undef public_62a3f8f
#undef public_62a3f97
#undef public_62a3fa9
