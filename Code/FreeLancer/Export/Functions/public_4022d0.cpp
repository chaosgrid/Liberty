#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022d0);

#define public_4022e0 _public_4022e0

PROC_DECLARE(0x4022d0, internal_4022d0, public_4022d0);
extern "C" NAKED register_t __cdecl internal_4022d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4022e0
        mov ecx, dword ptr ds : [public_6101d4]
        mov dword ptr ds : [eax], ecx
        public_4022e0 : nop
        mov al, byte ptr ds : [public_616470]
        ret 
        UNREACHABLE_TRAP(0x4022d0)
    }
}

#undef public_4022e0
