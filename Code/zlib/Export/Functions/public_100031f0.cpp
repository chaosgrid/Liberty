#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10002d20);
CLANG_FORWARD_PROC_SYMBOL(public_1000a400);

#define public_1000322e _public_1000322e
#define public_10003235 _public_10003235
#define public_10003249 _public_10003249

PROC_DECLARE(0x100031f0, internal_100031f0, public_100031f0);
extern "C" NAKED register_t __cdecl internal_100031f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_10003249
        cmp byte ptr ds : [esi+0x5C], 0x77
        jne public_10003249
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_10003235
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [esi+0x48]
        push ecx
        push 0x4000
        push 1
        push eax
        mov dword ptr ds : [esi+0xC], eax
        call public_1000a400
        add esp, 0x10
        cmp eax, 0x4000
        je public_1000322e
        mov dword ptr ds : [esi+0x38], 0xFFFFFFFF
        public_1000322e : nop
        mov dword ptr ds : [esi+0x10], 0x4000
        public_10003235 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push eax
        push esi
        call public_10002d20
        pop esi
        ret 0xC
        public_10003249 : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x100031f0)
    }
}

#undef public_1000322e
#undef public_10003235
#undef public_10003249
