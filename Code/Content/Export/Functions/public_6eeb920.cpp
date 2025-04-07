#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeb920);
CLANG_FORWARD_PROC_SYMBOL(public_6eec720);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eeb975 _public_6eeb975
#define public_6eeb97c _public_6eeb97c
#define public_6eeb9c4 _public_6eeb9c4
#define public_6eeb9de _public_6eeb9de
#define public_6eeb9fb _public_6eeb9fb

PROC_DECLARE(0x6eeb920, internal_6eeb920, public_6eeb920);
extern "C" NAKED register_t __cdecl internal_6eeb920()
{
    __asm
    {
        sub esp, 0x44
        call public_6efec10
        fstp dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x50]
        test eax, eax
        mov dword ptr ss : [esp+8], 0xBDCCCCCD
        mov dword ptr ss : [esp+0xC], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x10], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        lea edx, ss:[esp+8]
        je public_6eeb975
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        push eax
        jmp public_6eeb97c
        public_6eeb975 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push edx
        push ecx
        public_6eeb97c : nop
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, offset public_6fcf158
        call public_6eec720
        mov ebx, eax
        cmp dword ptr ds : [ebx+8], 0xA
        jne public_6eeb9c4
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+8], eax
        public_6eeb9c4 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6eeb9de
        mov edi, eax
        public_6eeb9de : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6eeb9fb
        mov ecx, 8
        lea esi, ss:[esp+0xC]
        rep movsd
        public_6eeb9fb : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6eeb920)
    }
}

#undef public_6eeb975
#undef public_6eeb97c
#undef public_6eeb9c4
#undef public_6eeb9de
#undef public_6eeb9fb
