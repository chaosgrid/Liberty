#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77250);
CLANG_FORWARD_PROC_SYMBOL(public_6b77b20);

#define public_6b77b36 _public_6b77b36
#define public_6b77b5d _public_6b77b5d

PROC_DECLARE(0x6b77b20, internal_6b77b20, public_6b77b20);
extern "C" NAKED register_t __cdecl internal_6b77b20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x128]
        test eax, eax
        jbe public_6b77b36
        dec eax
        mov dword ptr ds : [esi+0x128], eax
        public_6b77b36 : nop
        mov eax, dword ptr ds : [esi+0x128]
        test eax, eax
        jne public_6b77b5d
        mov ecx, esi
        mov dword ptr ds : [esi+0x128], 1
        call public_6b77250
        push esi
        call dword ptr ds : [public_6b79070]
        add esp, 4
        xor eax, eax
        public_6b77b5d : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b77b20)
    }
}

#undef public_6b77b36
#undef public_6b77b5d
