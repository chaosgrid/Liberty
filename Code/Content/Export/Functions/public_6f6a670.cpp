#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);

#define public_6f6a692 _public_6f6a692

PROC_DECLARE(0x6f6a670, internal_6f6a670, public_6f6a670);
extern "C" NAKED register_t __cdecl internal_6f6a670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f6a692
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_6f6a692 : nop
        ret 
        UNREACHABLE_TRAP(0x6f6a670)
    }
}

#undef public_6f6a692
