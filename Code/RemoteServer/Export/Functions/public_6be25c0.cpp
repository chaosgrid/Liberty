#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be25c0);

#define public_6be25d6 _public_6be25d6

PROC_DECLARE(0x6be25c0, internal_6be25c0, public_6be25c0);
extern "C" NAKED register_t __cdecl internal_6be25c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6be25d6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6be25d6 : nop
        ret 
        UNREACHABLE_TRAP(0x6be25c0)
    }
}

#undef public_6be25d6
