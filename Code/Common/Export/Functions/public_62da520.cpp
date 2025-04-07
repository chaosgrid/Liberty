#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62da533 _public_62da533

PROC_DECLARE(0x62da520, internal_62da520, public_62da520);
extern "C" NAKED register_t __cdecl internal_62da520()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62da533
        mov eax, 3
        pop esi
        ret 4
        public_62da533 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 1
        add ecx, 0x18
        call public_62e9120
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0x3F800000
        add ecx, 0x18
        call public_62e89a0
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62da520)
    }
}

#undef public_62da533
