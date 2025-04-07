#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d510);

#define public_632d548 _public_632d548

PROC_DECLARE(0x632d510, internal_632d510, public_632d510);
extern "C" NAKED register_t __cdecl internal_632d510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_632d548
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        add ecx, 0x10
        mov edx, dword ptr ds : [ecx]
        add eax, 0x10
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_632d548 : nop
        ret 
        UNREACHABLE_TRAP(0x632d510)
    }
}

#undef public_632d548
