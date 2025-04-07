#include "Alchemy-PCH.h"


#define public_6215c92 _public_6215c92

PROC_DECLARE(0x6215c70, internal_6215c70, public_6215c70);
extern "C" NAKED register_t __cdecl internal_6215c70()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6215c92
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_6215c92 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6215c70)
    }
}

#undef public_6215c92
