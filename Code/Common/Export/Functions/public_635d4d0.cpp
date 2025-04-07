#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d4d0);

#define public_635d4e5 _public_635d4e5

PROC_DECLARE(0x635d4d0, internal_635d4d0, public_635d4d0);
extern "C" NAKED register_t __cdecl internal_635d4d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov dword ptr ss : [esp+8], eax
        lea edx, ss:[esp+8]
        or eax, 0xFFFFFFFF
        mov esi, 4
        public_635d4e5 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edx]
        inc edx
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_63edcdc]
        shr eax, 8
        xor eax, ecx
        dec esi
        jne public_635d4e5
        or eax, 0x80000000
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635d4d0)
    }
}

#undef public_635d4e5
