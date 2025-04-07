#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236920);

#define public_6236942 _public_6236942

PROC_DECLARE(0x6236920, internal_6236920, public_6236920);
extern "C" NAKED register_t __cdecl internal_6236920()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1A433168
        jne public_6236942
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x5C]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6236942 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6236920)
    }
}

#undef public_6236942
