#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc30);

#define public_620dc52 _public_620dc52

PROC_DECLARE(0x620dc30, internal_620dc30, public_620dc30);
extern "C" NAKED register_t __cdecl internal_620dc30()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_620dc52
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x6C], eax
        xor eax, eax
        ret 0xC
        public_620dc52 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620dc30)
    }
}

#undef public_620dc52
