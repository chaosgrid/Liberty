#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b400);
CLANG_FORWARD_PROC_SYMBOL(public_46e610);

#define public_46b430 _public_46b430
#define public_46b438 _public_46b438
#define public_46b446 _public_46b446

PROC_DECLARE(0x46b400, internal_46b400, public_46b400);
extern "C" NAKED register_t __cdecl internal_46b400()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [public_66da7c]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_46e610
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_46b430
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        ja public_46b430
        lea eax, ss:[esp+4]
        jmp public_46b438
        public_46b430 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_46b438 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_46b446
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        public_46b446 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46b400)
    }
}

#undef public_46b430
#undef public_46b438
#undef public_46b446
