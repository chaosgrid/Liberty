#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_66151a3 _public_66151a3

PROC_DECLARE(0x6615160, internal_6615160, public_6615160);
extern "C" NAKED register_t __cdecl internal_6615160()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 0
        call public_6614580
        test al, al
        je public_66151a3
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0xBF800000
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0xC]
        push edx
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0xC]
        pop ecx
        ret 8
        public_66151a3 : nop
        fld dword ptr ss : [esp]
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6615160)
    }
}

#undef public_66151a3
