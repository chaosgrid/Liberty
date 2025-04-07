#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38770);

#define public_6b38780 _public_6b38780

PROC_DECLARE(0x6b38770, internal_6b38770, public_6b38770);
extern "C" NAKED register_t __cdecl internal_6b38770()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b38780
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6b38780 : nop
        ret 
        UNREACHABLE_TRAP(0x6b38770)
    }
}

#undef public_6b38780
