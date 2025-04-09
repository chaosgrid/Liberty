#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc900);

#define public_53de9c _public_53de9c

PROC_DECLARE(0x53de70, internal_53de70, public_53de70);
extern "C" NAKED register_t __cdecl internal_53de70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 0x34
        dec eax
        jne public_53de9c
        push esi
        push edi
        lea esi, ds:[ecx+8]
        lea eax, ss:[esp+8]
        mov ecx, 0xD
        lea edi, ss:[esp+8]
        push eax
        rep movsd
        call public_4cc900
        add esp, 4
        pop edi
        pop esi
        public_53de9c : nop
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x53de70)
    }
}

#undef public_53de9c
