#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46add0);
CLANG_FORWARD_PROC_SYMBOL(public_4b9b20);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);

#define public_53e234 _public_53e234
#define public_53e247 _public_53e247

PROC_DECLARE(0x53e200, internal_53e200, public_53e200);
extern "C" NAKED register_t __cdecl internal_53e200()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push edi
        call public_46add0
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        cmp eax, edi
        jne public_53e234
        call public_4c4670
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push esi
        push eax
        call dword ptr ds : [public_5c6a74]
        add esp, 8
        public_53e234 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_53e247
        push esi
        call public_4b9b20
        add esp, 4
        public_53e247 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x53e200)
    }
}

#undef public_53e234
#undef public_53e247
