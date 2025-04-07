#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc00);

#define public_620dc22 _public_620dc22

PROC_DECLARE(0x620dc00, internal_620dc00, public_620dc00);
extern "C" NAKED register_t __cdecl internal_620dc00()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_620dc22
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_620dc22 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620dc00)
    }
}

#undef public_620dc22
