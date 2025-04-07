#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_6244352 _public_6244352

PROC_DECLARE(0x6244330, internal_6244330, public_6244330);
extern "C" NAKED register_t __cdecl internal_6244330()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xC53B008
        jne public_6244352
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x58]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6244352 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6244330)
    }
}

#undef public_6244352
