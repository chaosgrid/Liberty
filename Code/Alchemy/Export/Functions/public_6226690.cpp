#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226690);

#define public_62266af _public_62266af

PROC_DECLARE(0x6226690, internal_6226690, public_6226690);
extern "C" NAKED register_t __cdecl internal_6226690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_62266af
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [ecx+4], eax
        ret 4
        public_62266af : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6226690)
    }
}

#undef public_62266af
