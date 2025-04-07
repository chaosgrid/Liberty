#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623416f _public_623416f
#define public_6234188 _public_6234188

PROC_DECLARE(0x6234160, internal_6234160, public_6234160);
extern "C" NAKED register_t __cdecl internal_6234160()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_623416f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_623416f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6234188
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6234188 : nop
        ret 4
        UNREACHABLE_TRAP(0x6234160)
    }
}

#undef public_623416f
#undef public_6234188
