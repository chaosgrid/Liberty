#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd6b3);

#define public_65dd6c2 _public_65dd6c2

PROC_DECLARE(0x65dd6b3, internal_65dd6b3, public_65dd6b3);
extern "C" NAKED register_t __cdecl internal_65dd6b3()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_65e7a40]
        jb public_65dd6c2
        xor eax, eax
        ret 
        public_65dd6c2 : nop
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea eax, ds:[eax+eax*8]
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        mov al, byte ptr ds : [ecx+eax*4+4]
        and eax, 0x40
        ret 
        UNREACHABLE_TRAP(0x65dd6b3)
    }
}

#undef public_65dd6c2
