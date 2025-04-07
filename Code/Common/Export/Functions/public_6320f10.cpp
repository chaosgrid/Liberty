#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f670);

#define public_6320f2b _public_6320f2b
#define public_6320f5c _public_6320f5c
#define public_6320f64 _public_6320f64
#define public_6320f6b _public_6320f6b
#define public_6320f76 _public_6320f76

PROC_DECLARE(0x6320f10, internal_6320f10, public_6320f10);
extern "C" NAKED register_t __cdecl internal_6320f10()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_64018c8]
        mov eax, dword ptr ds : [public_64018d8]
        sub esp, 8
        cmp ecx, eax
        je public_6320f2b
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ss : [esp+0xC]
        je public_6320f6b
        public_6320f2b : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_64018c4
        call public_627f670
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [public_64018c8]
        cmp eax, ecx
        je public_6320f5c
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6320f5c
        lea eax, ss:[esp]
        jmp public_6320f64
        public_6320f5c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6320f64 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6320f6b : nop
        cmp eax, ecx
        je public_6320f76
        mov eax, dword ptr ds : [eax+0x18]
        add esp, 8
        ret 
        public_6320f76 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6320f10)
    }
}

#undef public_6320f2b
#undef public_6320f5c
#undef public_6320f64
#undef public_6320f6b
#undef public_6320f76
