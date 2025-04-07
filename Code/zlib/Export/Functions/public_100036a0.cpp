#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100035e0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a452);

#define public_100036d0 _public_100036d0

PROC_DECLARE(0x100036a0, internal_100036a0, public_100036a0);
extern "C" NAKED register_t __cdecl internal_100036a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        mov eax, esi
        call public_100035e0
        add esp, 4
        test eax, eax
        jne public_100036d0
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
        call public_1000a452
        mov ecx, dword ptr ds : [esi+0x38]
        add esp, 4
        mov eax, ecx
        dec eax
        neg eax
        sbb eax, eax
        and eax, ecx
        public_100036d0 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x100036a0)
    }
}

#undef public_100036d0
