#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ec80);

#define public_51ec98 _public_51ec98
#define public_51eca3 _public_51eca3

PROC_DECLARE(0x51ec80, internal_51ec80, public_51ec80);
extern "C" NAKED register_t __cdecl internal_51ec80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xC
        je public_51eca3
        cmp eax, 0x10
        je public_51ec98
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c71cc]
        public_51ec98 : nop
        mov ecx, offset public_675350
        jmp dword ptr ds : [public_5c60c0]
        public_51eca3 : nop
        mov ecx, offset public_675340
        jmp dword ptr ds : [public_5c60c0]
        UNREACHABLE_TRAP(0x51ec80)
    }
}

#undef public_51ec98
#undef public_51eca3
