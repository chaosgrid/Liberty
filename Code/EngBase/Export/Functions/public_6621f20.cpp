#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f250);
CLANG_FORWARD_PROC_SYMBOL(public_6621f20);

#define public_6621f3d _public_6621f3d

PROC_DECLARE(0x6621f20, internal_6621f20, public_6621f20);
extern "C" NAKED register_t __cdecl internal_6621f20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_6621f3d
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6621f3d
        push eax
        call public_6621f20
        mov ecx, esi
        call public_661f250
        public_6621f3d : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6621f20)
    }
}

#undef public_6621f3d
