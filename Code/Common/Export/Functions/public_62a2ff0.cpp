#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2ff0);

#define public_62a3007 _public_62a3007

PROC_DECLARE(0x62a2ff0, internal_62a2ff0, public_62a2ff0);
extern "C" NAKED register_t __cdecl internal_62a2ff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        test eax, eax
        cdq 
        jle public_62a3007
        idiv ecx
        imul eax, ecx
        add eax, dword ptr ss : [esp+0xC]
        ret 
        public_62a3007 : nop
        idiv ecx
        imul eax, ecx
        sub eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x62a2ff0)
    }
}

#undef public_62a3007
