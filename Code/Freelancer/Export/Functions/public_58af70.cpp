#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_58afa2 _public_58afa2

PROC_DECLARE(0x58af70, internal_58af70, public_58af70);
extern "C" NAKED register_t __cdecl internal_58af70()
{
    __asm
    {
        sub esp, 0x48
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+0x328], 1
        call dword ptr ds : [eax+0xA0]
        mov edi, eax
        mov eax, dword ptr ds : [public_67d8c4]
        test eax, eax
        jne public_58afa2
        call public_5b73e0
        mov dword ptr ds : [public_67d8c4], eax
        public_58afa2 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea edi, ds:[esi+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+8]
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x58af70)
    }
}

#undef public_58afa2
