#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b7806f _public_6b7806f
#define public_6b78088 _public_6b78088

PROC_DECLARE(0x6b78060, internal_6b78060, public_6b78060);
extern "C" NAKED register_t __cdecl internal_6b78060()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6b7806f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6b7806f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6b78088
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6b782a0
        add esp, 4
        xor eax, eax
        public_6b78088 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b78060)
    }
}

#undef public_6b7806f
#undef public_6b78088
