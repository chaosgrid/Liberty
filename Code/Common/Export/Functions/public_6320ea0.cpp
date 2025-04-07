#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f670);

#define public_6320eb9 _public_6320eb9
#define public_6320eea _public_6320eea
#define public_6320ef2 _public_6320ef2
#define public_6320ef9 _public_6320ef9
#define public_6320f08 _public_6320f08

PROC_DECLARE(0x6320ea0, internal_6320ea0, public_6320ea0);
extern "C" NAKED register_t __cdecl internal_6320ea0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [public_64018c8]
        mov eax, dword ptr ds : [public_64018d8]
        cmp ecx, eax
        je public_6320eb9
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ss : [esp+8]
        je public_6320ef9
        public_6320eb9 : nop
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_64018c4
        call public_627f670
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [public_64018c8]
        cmp eax, ecx
        je public_6320eea
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6320eea
        lea eax, ss:[esp]
        jmp public_6320ef2
        public_6320eea : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6320ef2 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6320ef9 : nop
        cmp eax, ecx
        je public_6320f08
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        pop ecx
        ret 
        public_6320f08 : nop
        mov eax, 0xFFFFFFFE
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6320ea0)
    }
}

#undef public_6320eb9
#undef public_6320eea
#undef public_6320ef2
#undef public_6320ef9
#undef public_6320f08
