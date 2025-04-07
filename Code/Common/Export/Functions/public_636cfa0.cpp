#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636cfa0);

#define public_636cfad _public_636cfad

PROC_DECLARE(0x636cfa0, internal_636cfa0, public_636cfa0);
extern "C" NAKED register_t __cdecl internal_636cfa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        or eax, 0xFFFFFFFF
        mov esi, 0xC
        public_636cfad : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edx]
        inc edx
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_63edcdc]
        shr eax, 8
        xor eax, ecx
        dec esi
        jne public_636cfad
        or eax, 0x80000000
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x636cfa0)
    }
}

#undef public_636cfad
