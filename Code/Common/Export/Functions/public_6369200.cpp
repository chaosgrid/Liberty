#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369200);

#define public_636920d _public_636920d

PROC_DECLARE(0x6369200, internal_6369200, public_6369200);
extern "C" NAKED register_t __cdecl internal_6369200()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        or eax, 0xFFFFFFFF
        mov esi, 0x14
        public_636920d : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edx]
        inc edx
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_63edcdc]
        shr eax, 8
        xor eax, ecx
        dec esi
        jne public_636920d
        or eax, 0x80000000
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6369200)
    }
}

#undef public_636920d
