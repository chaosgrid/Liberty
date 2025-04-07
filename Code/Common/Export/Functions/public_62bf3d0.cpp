#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5fb0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fc0);

#define public_62bf404 _public_62bf404

PROC_DECLARE(0x62bf3d0, internal_62bf3d0, public_62bf3d0);
extern "C" NAKED register_t __cdecl internal_62bf3d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        mov eax, 0xFFFFFFFD
        je public_62bf404
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_62bf404
        mov ecx, esi
        call public_62b5fc0
        mov edx, dword ptr ss : [esp+8]
        mov ecx, esi
        fstp dword ptr ds : [edx]
        call public_62b5fb0
        mov eax, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        xor eax, eax
        public_62bf404 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62bf3d0)
    }
}

#undef public_62bf404
