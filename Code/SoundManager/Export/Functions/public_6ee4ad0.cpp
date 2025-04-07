#include "SoundManager-PCH.h"


#define public_6ee4b3a _public_6ee4b3a

PROC_DECLARE(0x6ee4ad0, internal_6ee4ad0, public_6ee4ad0);
extern "C" NAKED register_t __cdecl internal_6ee4ad0()
{
    __asm
    {
        sub esp, 0x60
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x90]
        push edi
        mov edi, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+0x54]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [esi+0x94]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi+0x12C]
        test eax, eax
        je public_6ee4b3a
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], 0x60
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0x14], ecx
        add esi, 0x38
        mov edx, dword ptr ds : [esi]
        add edi, 0x18
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], edx
        public_6ee4b3a : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x6ee4ad0)
    }
}

#undef public_6ee4b3a
