#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9120);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);

#define public_62e913e _public_62e913e
#define public_62e9140 _public_62e9140
#define public_62e915f _public_62e915f
#define public_62e9170 _public_62e9170
#define public_62e9185 _public_62e9185
#define public_62e9187 _public_62e9187
#define public_62e91b9 _public_62e91b9
#define public_62e91c6 _public_62e91c6

PROC_DECLARE(0x62e9120, internal_62e9120, public_62e9120);
extern "C" NAKED register_t __cdecl internal_62e9120()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov byte ptr ss : [esp+5], 0
        mov byte ptr ss : [esp+6], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e913e
        lea ecx, ds:[eax-8]
        jmp public_62e9140
        public_62e913e : nop
        xor ecx, ecx
        public_62e9140 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+6]
        push edx
        lea edx, ss:[esp+9]
        push edx
        call dword ptr ds : [eax+0x5C]
        mov al, byte ptr ss : [esp+5]
        test al, al
        je public_62e915f
        mov al, byte ptr ss : [esp+6]
        test al, al
        je public_62e91c6
        public_62e915f : nop
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        je public_62e9170
        push 1
        mov ecx, esi
        call public_62e91d0
        public_62e9170 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov byte ptr ss : [esp+7], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9185
        lea ecx, ds:[eax-8]
        jmp public_62e9187
        public_62e9185 : nop
        xor ecx, ecx
        public_62e9187 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+7]
        push edx
        call dword ptr ds : [eax+0x64]
        mov edx, dword ptr ss : [esp+0xC]
        cmp byte ptr ss : [esp+7], dl
        je public_62e91c6
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e91b9
        add eax, 0xFFFFFFF8
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push edx
        call dword ptr ds : [eax+0x54]
        pop esi
        pop ecx
        ret 4
        public_62e91b9 : nop
        xor eax, eax
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push edx
        call dword ptr ds : [eax+0x54]
        public_62e91c6 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62e9120)
    }
}

#undef public_62e913e
#undef public_62e9140
#undef public_62e915f
#undef public_62e9170
#undef public_62e9185
#undef public_62e9187
#undef public_62e91b9
#undef public_62e91c6
