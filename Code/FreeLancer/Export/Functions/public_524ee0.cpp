#include "FreeLancer-PCH.h"


#define public_524f08 _public_524f08

PROC_DECLARE(0x524ee0, internal_524ee0, public_524ee0);
extern "C" NAKED register_t __cdecl internal_524ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0x1003
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c67ec]
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi+0x10], eax
        je public_524f08
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c67e8]
        public_524f08 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x524ee0)
    }
}

#undef public_524f08
