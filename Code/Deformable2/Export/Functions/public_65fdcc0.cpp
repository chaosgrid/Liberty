#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fdcc0);

#define public_65fdcf9 _public_65fdcf9

PROC_DECLARE(0x65fdcc0, internal_65fdcc0, public_65fdcc0);
extern "C" NAKED register_t __cdecl internal_65fdcc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi+4], 1
        call dword ptr ds : [public_660100c]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi], offset public_6601378
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], eax
        je public_65fdcf9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_65fdcf9 : nop
        mov dword ptr ds : [esi], offset public_66013dc
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65fdcc0)
    }
}

#undef public_65fdcf9
