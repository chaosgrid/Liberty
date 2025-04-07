#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623d93f _public_623d93f
#define public_623d958 _public_623d958

PROC_DECLARE(0x623d930, internal_623d930, public_623d930);
extern "C" NAKED register_t __cdecl internal_623d930()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_623d93f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_623d93f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_623d958
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623d958 : nop
        ret 4
        UNREACHABLE_TRAP(0x623d930)
    }
}

#undef public_623d93f
#undef public_623d958
