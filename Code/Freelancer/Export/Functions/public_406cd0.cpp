#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_406cd0);

#define public_406ce5 _public_406ce5

PROC_DECLARE(0x406cd0, internal_406cd0, public_406cd0);
extern "C" NAKED register_t __cdecl internal_406cd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_406ce5
        mov dword ptr ds : [esi+0xC], 0xBF800000
        pop esi
        ret 0xC
        public_406ce5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x406cd0)
    }
}

#undef public_406ce5
