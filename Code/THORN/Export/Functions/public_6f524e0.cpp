#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f524e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52510);

#define public_6f524eb _public_6f524eb

PROC_DECLARE(0x6f524e0, internal_6f524e0, public_6f524e0);
extern "C" NAKED register_t __cdecl internal_6f524e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jne public_6f524eb
        xor eax, eax
        ret 
        public_6f524eb : nop
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+8], offset _public_6f52510
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x6f524e0)
    }
}

#undef public_6f524eb
