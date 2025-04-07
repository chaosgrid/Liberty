#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e770);

#define public_622e792 _public_622e792

PROC_DECLARE(0x622e770, internal_622e770, public_622e770);
extern "C" NAKED register_t __cdecl internal_622e770()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_622e792
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_622e792 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622e770)
    }
}

#undef public_622e792
