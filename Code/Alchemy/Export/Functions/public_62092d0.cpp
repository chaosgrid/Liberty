#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a380);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62092f8 _public_62092f8
#define public_6209306 _public_6209306

PROC_DECLARE(0x62092d0, internal_62092d0, public_62092d0);
extern "C" NAKED register_t __cdecl internal_62092d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        lea esi, ds:[eax+8]
        mov ecx, esi
        call public_620a380
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6209306
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62092f8
        push eax
        call public_62460e0
        add esp, 4
        public_62092f8 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0x10], 0
        public_6209306 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62092d0)
    }
}

#undef public_62092f8
#undef public_6209306
