#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100091a0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

#define public_100094e2 _public_100094e2
#define public_100094f2 _public_100094f2

PROC_DECLARE(0x100094d0, internal_100094d0, public_100094d0);
extern "C" NAKED register_t __cdecl internal_100094d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_100094e2
        mov eax, 0xFFFFFF9A
        pop esi
        ret 4
        public_100094e2 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        test eax, eax
        je public_100094f2
        push esi
        call public_100091a0
        public_100094f2 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        call dword ptr ds : [esi+0x14]
        push esi
        call public_1000a418
        add esp, 4
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x100094d0)
    }
}

#undef public_100094e2
#undef public_100094f2
