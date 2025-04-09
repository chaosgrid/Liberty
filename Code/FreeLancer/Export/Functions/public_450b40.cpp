#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556ce0);

#define public_450b70 _public_450b70

PROC_DECLARE(0x450b40, internal_450b40, public_450b40);
extern "C" NAKED register_t __cdecl internal_450b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        shl eax, 6
        add eax, offset public_668b00
        mov dword ptr ds : [eax+0x34], edx
        cmp ecx, dword ptr ds : [public_66d100]
        jne public_450b70
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        call public_556ce0
        add esp, 8
        public_450b70 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x450b40)
    }
}

#undef public_450b70
