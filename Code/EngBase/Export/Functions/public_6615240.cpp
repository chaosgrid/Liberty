#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_661527d _public_661527d

PROC_DECLARE(0x6615240, internal_6615240, public_6615240);
extern "C" NAKED register_t __cdecl internal_6615240()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push esi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor esi, esi
        call public_6614580
        test al, al
        je public_661527d
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_661527d
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_661527d
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        fstp dword ptr ds : [eax]
        mov eax, 1
        ret 0xC
        public_661527d : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6615240)
    }
}

#undef public_661527d
