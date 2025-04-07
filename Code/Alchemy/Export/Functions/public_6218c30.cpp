#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218c30);

#define public_6218c55 _public_6218c55

PROC_DECLARE(0x6218c30, internal_6218c30, public_6218c30);
extern "C" NAKED register_t __cdecl internal_6218c30()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_6218c55
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x84]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6218c55 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6218c30)
    }
}

#undef public_6218c55
