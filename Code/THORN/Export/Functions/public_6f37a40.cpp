#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37a40);

#define public_6f37a62 _public_6f37a62

PROC_DECLARE(0x6f37a40, internal_6f37a40, public_6f37a40);
extern "C" NAKED register_t __cdecl internal_6f37a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f37a62
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_6f37a62 : nop
        ret 
        UNREACHABLE_TRAP(0x6f37a40)
    }
}

#undef public_6f37a62
