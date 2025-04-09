#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42bf90);

#define public_42bf87 _public_42bf87

PROC_DECLARE(0x42bf70, internal_42bf70, public_42bf70);
extern "C" NAKED register_t __cdecl internal_42bf70()
{
    __asm
    {
        push esi
        mov esi, ecx
        test dword ptr ds : [esi+0x18], 0x20000000
        jne public_42bf87
        mov eax, dword ptr ds : [public_667ce4]
        push eax
        call public_42bf90
        public_42bf87 : nop
        mov eax, dword ptr ds : [esi+0x24]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42bf70)
    }
}

#undef public_42bf87
