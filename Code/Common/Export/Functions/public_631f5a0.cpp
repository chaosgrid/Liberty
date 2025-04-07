#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_631f5cf _public_631f5cf
#define public_631f5d7 _public_631f5d7
#define public_631f5e4 _public_631f5e4

PROC_DECLARE(0x631f5a0, internal_631f5a0, public_631f5a0);
extern "C" NAKED register_t __cdecl internal_631f5a0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_64018ec
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_631f5cf
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631f5cf
        lea eax, ss:[esp]
        jmp public_631f5d7
        public_631f5cf : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_631f5d7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_631f5e4
        mov eax, dword ptr ds : [eax+0x28]
        add esp, 8
        ret 
        public_631f5e4 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631f5a0)
    }
}

#undef public_631f5cf
#undef public_631f5d7
#undef public_631f5e4
