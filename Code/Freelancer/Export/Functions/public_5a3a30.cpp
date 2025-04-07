#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5a3a63 _public_5a3a63

PROC_DECLARE(0x5a3a30, internal_5a3a30, public_5a3a30);
extern "C" NAKED register_t __cdecl internal_5a3a30()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, ebx
        mov byte ptr ds : [ebx+0x328], 1
        call dword ptr ds : [eax+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67de48]
        test eax, eax
        jne public_5a3a63
        call public_5b73e0
        mov dword ptr ds : [public_67de48], eax
        public_5a3a63 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea edi, ds:[ebx+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        rep movsd
        lea edi, ds:[ebx+0x32C]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x5a3a30)
    }
}

#undef public_5a3a63
