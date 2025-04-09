#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489f40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_489f54 _public_489f54
#define public_489f64 _public_489f64

PROC_DECLARE(0x489f40, internal_489f40, public_489f40);
extern "C" NAKED register_t __cdecl internal_489f40()
{
    __asm
    {
        push 0x14
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_489f54
        mov ecx, eax
        public_489f54 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_489f64
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_489f64 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x489f40)
    }
}

#undef public_489f54
#undef public_489f64
