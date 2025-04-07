#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);

#define public_427743 _public_427743
#define public_42774b _public_42774b
#define public_427752 _public_427752

PROC_DECLARE(0x427730, internal_427730, public_427730);
extern "C" NAKED register_t __cdecl internal_427730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_427752
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_427743 : nop
        test eax, eax
        je public_42774b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_42774b : nop
        add eax, 4
        dec ecx
        jne public_427743
        pop esi
        public_427752 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x427730)
    }
}

#undef public_427743
#undef public_42774b
#undef public_427752
