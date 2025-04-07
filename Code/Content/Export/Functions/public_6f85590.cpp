#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);

#define public_6f855c3 _public_6f855c3
#define public_6f855c5 _public_6f855c5

PROC_DECLARE(0x6f85590, internal_6f85590, public_6f85590);
extern "C" NAKED register_t __cdecl internal_6f85590()
{
    __asm
    {
        push esi
        push edi
        lea eax, ss:[esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push 7
        call public_6f19cd0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [eax+0x1C], edx
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 0xC
        test eax, eax
        je public_6f855c3
        add eax, 0x54
        jmp public_6f855c5
        public_6f855c3 : nop
        xor eax, eax
        public_6f855c5 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        lea ecx, ds:[edi+0x38]
        call dword ptr ds : [public_6fb3088]
        mov byte ptr ds : [edi+4], 0
        mov eax, edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f85590)
    }
}

#undef public_6f855c3
#undef public_6f855c5
