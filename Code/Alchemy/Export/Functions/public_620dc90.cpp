#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc90);

#define public_620dcb2 _public_620dcb2

PROC_DECLARE(0x620dc90, internal_620dc90, public_620dc90);
extern "C" NAKED register_t __cdecl internal_620dc90()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_620dcb2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x74]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_620dcb2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620dc90)
    }
}

#undef public_620dcb2
