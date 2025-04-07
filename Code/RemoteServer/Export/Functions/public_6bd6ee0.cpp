#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6ee0);

#define public_6bd6ef0 _public_6bd6ef0

PROC_DECLARE(0x6bd6ee0, internal_6bd6ee0, public_6bd6ee0);
extern "C" NAKED register_t __cdecl internal_6bd6ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bd6ef0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6bd6ef0 : nop
        ret 
        UNREACHABLE_TRAP(0x6bd6ee0)
    }
}

#undef public_6bd6ef0
