#include "Alchemy-PCH.h"


#define public_6212952 _public_6212952

PROC_DECLARE(0x6212930, internal_6212930, public_6212930);
extern "C" NAKED register_t __cdecl internal_6212930()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1874DE74
        jne public_6212952
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x4C]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6212952 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6212930)
    }
}

#undef public_6212952
