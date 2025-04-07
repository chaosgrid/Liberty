#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18207 _public_6d18207

PROC_DECLARE(0x6d181e0, internal_6d181e0, public_6d181e0);
extern "C" NAKED register_t __cdecl internal_6d181e0()
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
        je public_6d18207
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_6d127b0
        mov bl, byte ptr ds : [eax+0x3C]
        public_6d18207 : nop
        xor eax, eax
        test bl, bl
        sete al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d181e0)
    }
}

#undef public_6d18207
