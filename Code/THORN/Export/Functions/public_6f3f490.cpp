#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3f49f _public_6f3f49f
#define public_6f3f4b8 _public_6f3f4b8

PROC_DECLARE(0x6f3f490, internal_6f3f490, public_6f3f490);
extern "C" NAKED register_t __cdecl internal_6f3f490()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f3f49f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f3f49f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f3f4b8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6f57e26
        add esp, 4
        xor eax, eax
        public_6f3f4b8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f3f490)
    }
}

#undef public_6f3f49f
#undef public_6f3f4b8
