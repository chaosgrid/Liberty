#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7280);

#define public_65d72a1 _public_65d72a1

PROC_DECLARE(0x65d7280, internal_65d7280, public_65d7280);
extern "C" NAKED register_t __cdecl internal_65d7280()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test dword ptr ds : [ecx+4], 6
        mov eax, 1
        je public_65d72a1
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, 3
        public_65d72a1 : nop
        ret 
        UNREACHABLE_TRAP(0x65d7280)
    }
}

#undef public_65d72a1
