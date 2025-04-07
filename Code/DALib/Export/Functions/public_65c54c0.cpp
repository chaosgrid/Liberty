#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c54c0);

#define public_65c54fa _public_65c54fa

PROC_DECLARE(0x65c54c0, internal_65c54c0, public_65c54c0);
extern "C" NAKED register_t __cdecl internal_65c54c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        xor edx, edx
        cmp eax, edx
        je public_65c54fa
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, edx
        je public_65c54fa
        mov ecx, dword ptr ds : [ecx+8]
        push esi
        push 1
        lea esi, ss:[esp+0x10]
        push esi
        lea esi, ss:[esp+0xC]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ecx
        ret 4
        public_65c54fa : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x65c54c0)
    }
}

#undef public_65c54fa
