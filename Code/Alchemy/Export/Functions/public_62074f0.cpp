#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a4c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6207518 _public_6207518
#define public_6207526 _public_6207526

PROC_DECLARE(0x62074f0, internal_62074f0, public_62074f0);
extern "C" NAKED register_t __cdecl internal_62074f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        lea esi, ds:[eax+8]
        mov ecx, esi
        call public_620a4c0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6207526
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6207518
        push eax
        call public_62460e0
        add esp, 4
        public_6207518 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0x10], 0
        public_6207526 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62074f0)
    }
}

#undef public_6207518
#undef public_6207526
