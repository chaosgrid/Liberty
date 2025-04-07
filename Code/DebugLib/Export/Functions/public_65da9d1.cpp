#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65da9d1);
CLANG_FORWARD_PROC_SYMBOL(public_65ddc6f);

#define public_65da9e3 _public_65da9e3

PROC_DECLARE(0x65da9d1, internal_65da9d1, public_65da9d1);
extern "C" NAKED register_t __cdecl internal_65da9d1()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        dec dword ptr ds : [edx+4]
        js public_65da9e3
        mov ecx, dword ptr ds : [edx]
        movzx eax, byte ptr ds : [ecx]
        inc ecx
        mov dword ptr ds : [edx], ecx
        ret 
        public_65da9e3 : nop
        push edx
        call public_65ddc6f
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65da9d1)
    }
}

#undef public_65da9e3
