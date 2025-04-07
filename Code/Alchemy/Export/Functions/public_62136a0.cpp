#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62136a0);

#define public_62136c2 _public_62136c2

PROC_DECLARE(0x62136a0, internal_62136a0, public_62136a0);
extern "C" NAKED register_t __cdecl internal_62136a0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1874DE74
        jne public_62136c2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x50]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_62136c2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62136a0)
    }
}

#undef public_62136c2
