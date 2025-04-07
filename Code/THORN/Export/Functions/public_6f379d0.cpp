#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f379df _public_6f379df
#define public_6f37a05 _public_6f37a05
#define public_6f37a08 _public_6f37a08

PROC_DECLARE(0x6f379d0, internal_6f379d0, public_6f379d0);
extern "C" NAKED register_t __cdecl internal_6f379d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f379df
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f379df : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f37a08
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6f37a05
        mov ecx, esi
        call public_6f34ff0
        push esi
        call public_6f57e26
        add esp, 4
        public_6f37a05 : nop
        xor eax, eax
        pop esi
        public_6f37a08 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f379d0)
    }
}

#undef public_6f379df
#undef public_6f37a05
#undef public_6f37a08
