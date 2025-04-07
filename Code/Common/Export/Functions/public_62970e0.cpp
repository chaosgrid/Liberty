#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629aed0);

#define public_629711a _public_629711a

PROC_DECLARE(0x62970e0, internal_62970e0, public_62970e0);
extern "C" NAKED register_t __cdecl internal_62970e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, esi
        mov bl, al
        call public_629aed0
        cmp bl, al
        je public_629711a
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_629711a
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_629711a
        mov byte ptr ds : [esi+0x2C4], 1
        public_629711a : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62970e0)
    }
}

#undef public_629711a
