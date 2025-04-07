#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d283f _public_65d283f
#define public_65d2858 _public_65d2858

PROC_DECLARE(0x65d2830, internal_65d2830, public_65d2830);
extern "C" NAKED register_t __cdecl internal_65d2830()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_65d283f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_65d283f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_65d2858
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_65d6cb8
        add esp, 4
        xor eax, eax
        public_65d2858 : nop
        ret 4
        UNREACHABLE_TRAP(0x65d2830)
    }
}

#undef public_65d283f
#undef public_65d2858
