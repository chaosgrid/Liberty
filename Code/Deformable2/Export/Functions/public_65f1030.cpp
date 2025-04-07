#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1030);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f1054 _public_65f1054
#define public_65f1086 _public_65f1086

PROC_DECLARE(0x65f1030, internal_65f1030, public_65f1030);
extern "C" NAKED register_t __cdecl internal_65f1030()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6603120]
        sub esp, 0x90
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+8]
        add esi, 4
        test eax, eax
        push edi
        jne public_65f1054
        call public_6600de0
        mov dword ptr ds : [public_6603120], eax
        public_65f1054 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ds:[ebx+0xC]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_6603120]
        test eax, eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x3C]
        lea edi, ss:[esp+0xC]
        rep movsd
        jne public_65f1086
        call public_6600de0
        mov dword ptr ds : [public_6603120], eax
        public_65f1086 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0xA4]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea edi, ds:[ebx+0x40]
        mov ecx, 0xC
        lea esi, ss:[esp+0x6C]
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x65f1030)
    }
}

#undef public_65f1054
#undef public_65f1086
