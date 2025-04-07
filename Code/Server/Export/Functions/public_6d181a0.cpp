#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d181d5 _public_6d181d5

PROC_DECLARE(0x6d181a0, internal_6d181a0, public_6d181a0);
extern "C" NAKED register_t __cdecl internal_6d181a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        mov ecx, eax
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        je public_6d181d5
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edx
        xor esi, esi
        call public_6d127b0
        mov eax, dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        public_6d181d5 : nop
        ret 
        UNREACHABLE_TRAP(0x6d181a0)
    }
}

#undef public_6d181d5
