#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6311580);

#define public_63115b0 _public_63115b0
#define public_63115b8 _public_63115b8
#define public_63115c4 _public_63115c4

PROC_DECLARE(0x6311580, internal_6311580, public_6311580);
extern "C" NAKED register_t __cdecl internal_6311580()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fd2a8
        xor esi, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fd2ac]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_63115b0
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63115b0
        lea eax, ss:[esp+4]
        jmp public_63115b8
        public_63115b0 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_63115b8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_63115c4
        add eax, 0x10
        pop esi
        pop ecx
        ret 
        public_63115c4 : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6311580)
    }
}

#undef public_63115b0
#undef public_63115b8
#undef public_63115c4
