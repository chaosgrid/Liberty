#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29370);

#define public_6d29382 _public_6d29382

PROC_DECLARE(0x6d29370, internal_6d29370, public_6d29370);
extern "C" NAKED register_t __cdecl internal_6d29370()
{
    __asm
    {
        cmp byte ptr ds : [ecx], 0
        je public_6d29382
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d29382
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d29382 : nop
        ret 
        UNREACHABLE_TRAP(0x6d29370)
    }
}

#undef public_6d29382
