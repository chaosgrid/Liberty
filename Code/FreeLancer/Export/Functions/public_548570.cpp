#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534190);

#define public_548593 _public_548593
#define public_548595 _public_548595
#define public_5485ab _public_5485ab

PROC_DECLARE(0x548570, internal_548570, public_548570);
extern "C" NAKED register_t __cdecl internal_548570()
{
    __asm
    {
        test ecx, ecx
        je public_548593
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_548593
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_548593
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_548595
        public_548593 : nop
        xor eax, eax
        public_548595 : nop
        test byte ptr ds : [eax+0xE0], 0xF
        jne public_5485ab
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], edx
        jmp public_534190
        public_5485ab : nop
        ret 0xC
        UNREACHABLE_TRAP(0x548570)
    }
}

#undef public_548593
#undef public_548595
#undef public_5485ab
