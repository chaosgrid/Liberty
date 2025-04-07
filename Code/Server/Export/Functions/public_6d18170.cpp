#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18195 _public_6d18195

PROC_DECLARE(0x6d18170, internal_6d18170, public_6d18170);
extern "C" NAKED register_t __cdecl internal_6d18170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d18195
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, eax
        call public_6d127b0
        mov eax, dword ptr ds : [eax+0x34]
        ret 
        public_6d18195 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d18170)
    }
}

#undef public_6d18195
