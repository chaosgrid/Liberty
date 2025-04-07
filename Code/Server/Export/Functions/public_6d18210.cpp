#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18237 _public_6d18237

PROC_DECLARE(0x6d18210, internal_6d18210, public_6d18210);
extern "C" NAKED register_t __cdecl internal_6d18210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push eax
        xor bl, bl
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d18237
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_6d127b0
        mov bl, byte ptr ds : [eax+0x3C]
        public_6d18237 : nop
        xor eax, eax
        cmp bl, 1
        sete al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d18210)
    }
}

#undef public_6d18237
