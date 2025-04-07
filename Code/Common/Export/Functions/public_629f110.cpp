#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_630e710);

#define public_629f157 _public_629f157

PROC_DECLARE(0x629f110, internal_629f110, public_629f110);
extern "C" NAKED register_t __cdecl internal_629f110()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_629f157
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xF8]
        cmp eax, 0xFFFFFFFF
        je public_629f157
        mov ecx, dword ptr ds : [esi+0x24]
        push ecx
        push eax
        call public_630e710
        add esp, 8
        test al, al
        je public_629f157
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x74]
        movzx eax, word ptr ds : [esi+8]
        push eax
        push 0xA
        mov ecx, esi
        call public_629b010
        public_629f157 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629f110)
    }
}

#undef public_629f157
