#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee82ef _public_6ee82ef
#define public_6ee8308 _public_6ee8308

PROC_DECLARE(0x6ee82e0, internal_6ee82e0, public_6ee82e0);
extern "C" NAKED register_t __cdecl internal_6ee82e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ee82ef
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ee82ef : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ee8308
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6ee8ddc
        add esp, 4
        xor eax, eax
        public_6ee8308 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ee82e0)
    }
}

#undef public_6ee82ef
#undef public_6ee8308
