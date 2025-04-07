#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_633c51f _public_633c51f
#define public_633c527 _public_633c527
#define public_633c549 _public_633c549

PROC_DECLARE(0x633c4f0, internal_633c4f0, public_633c4f0);
extern "C" NAKED register_t __cdecl internal_633c4f0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a828
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a82c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_633c51f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c51f
        lea eax, ss:[esp]
        jmp public_633c527
        public_633c51f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_633c527 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c549
        mov ecx, dword ptr ds : [eax+0x98]
        test ecx, ecx
        jbe public_633c549
        mov eax, dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0xC10]
        add esp, 8
        ret 
        public_633c549 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c4f0)
    }
}

#undef public_633c51f
#undef public_633c527
#undef public_633c549
