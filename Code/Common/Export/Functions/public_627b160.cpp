#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b160);

#define public_627b182 _public_627b182

PROC_DECLARE(0x627b160, internal_627b160, public_627b160);
extern "C" NAKED register_t __cdecl internal_627b160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_627b182
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_627b182 : nop
        ret 
        UNREACHABLE_TRAP(0x627b160)
    }
}

#undef public_627b182
