#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);

#define public_6ef3ddf _public_6ef3ddf
#define public_6ef3e05 _public_6ef3e05
#define public_6ef3e08 _public_6ef3e08

PROC_DECLARE(0x6ef3dd0, internal_6ef3dd0, public_6ef3dd0);
extern "C" NAKED register_t __cdecl internal_6ef3dd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ef3ddf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ef3ddf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ef3e08
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6ef3e05
        mov ecx, esi
        call public_6ef2b50
        push esi
        call public_6ef4512
        add esp, 4
        public_6ef3e05 : nop
        xor eax, eax
        pop esi
        public_6ef3e08 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ef3dd0)
    }
}

#undef public_6ef3ddf
#undef public_6ef3e05
#undef public_6ef3e08
