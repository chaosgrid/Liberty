#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);

#define public_6f4b0a8 _public_6f4b0a8

PROC_DECLARE(0x6f4b090, internal_6f4b090, public_6f4b090);
extern "C" NAKED register_t __cdecl internal_6f4b090()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jle public_6f4b0a8
        mov eax, dword ptr ds : [public_6f61e28]
        cmp ecx, dword ptr ds : [eax+0x14]
        jg public_6f4b0a8
        mov eax, dword ptr ds : [eax+0x10]
        add eax, ecx
        ret 
        public_6f4b0a8 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4b090)
    }
}

#undef public_6f4b0a8
