#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1220);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee8260 _public_6ee8260
#define public_6ee8280 _public_6ee8280

PROC_DECLARE(0x6ee8250, internal_6ee8250, public_6ee8250);
extern "C" NAKED register_t __cdecl internal_6ee8250()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jbe public_6ee8260
        dec eax
        mov dword ptr ds : [esi+0x2C], eax
        public_6ee8260 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_6ee8280
        mov ecx, esi
        mov dword ptr ds : [esi+0x2C], 1
        call public_6ee1220
        push esi
        call public_6ee8ddc
        add esp, 4
        xor eax, eax
        public_6ee8280 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee8250)
    }
}

#undef public_6ee8260
#undef public_6ee8280
