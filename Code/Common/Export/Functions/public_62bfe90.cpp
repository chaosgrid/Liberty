#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630ef30);

#define public_62bfebe _public_62bfebe

PROC_DECLARE(0x62bfe90, internal_62bfe90, public_62bfe90);
extern "C" NAKED register_t __cdecl internal_62bfe90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push esi
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        push ecx
        push eax
        mov esi, 0xFFFFFFFE
        call public_630ef30
        add esp, 0x10
        test al, al
        je public_62bfebe
        xor eax, eax
        pop esi
        ret 0xC
        public_62bfebe : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62bfe90)
    }
}

#undef public_62bfebe
