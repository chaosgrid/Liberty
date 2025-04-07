#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54c50);

#define public_6f54c70 _public_6f54c70

PROC_DECLARE(0x6f54c50, internal_6f54c50, public_6f54c50);
extern "C" NAKED register_t __cdecl internal_6f54c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jle public_6f54c70
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        neg ecx
        shl ecx, 1
        push ecx
        dec eax
        push eax
        push 0x1E
        push edx
        call public_6f52dd0
        add esp, 0x10
        public_6f54c70 : nop
        ret 
        UNREACHABLE_TRAP(0x6f54c50)
    }
}

#undef public_6f54c70
