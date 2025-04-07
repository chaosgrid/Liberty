#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619790);

#define public_6615dc8 _public_6615dc8
#define public_6615dd0 _public_6615dd0
#define public_6615df2 _public_6615df2
#define public_6615dfa _public_6615dfa

PROC_DECLARE(0x6615d80, internal_6615d80, public_6615d80);
extern "C" NAKED register_t __cdecl internal_6615d80()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        or ebx, 0xFFFFFFFF
        cmp eax, 0xFFFFFFFF
        push esi
        je public_6615dfa
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x20]
        push eax
        push ecx
        mov ecx, esi
        call public_6619790
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, esi
        je public_6615dc8
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edx, ecx
        jb public_6615dc8
        lea eax, ss:[esp+0x14]
        jmp public_6615dd0
        public_6615dc8 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6615dd0 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        cmp eax, ecx
        pop edi
        je public_6615dfa
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        xor esi, esi
        mov eax, dword ptr ds : [eax+0x24]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        je public_6615df2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6615df2 : nop
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6615dfa : nop
        mov eax, ebx
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6615d80)
    }
}

#undef public_6615dc8
#undef public_6615dd0
#undef public_6615df2
#undef public_6615dfa
