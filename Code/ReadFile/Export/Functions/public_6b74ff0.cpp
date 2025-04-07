#include "ReadFile-PCH.h"


#define public_6b7500e _public_6b7500e
#define public_6b7501c _public_6b7501c
#define public_6b7502a _public_6b7502a
#define public_6b75036 _public_6b75036
#define public_6b7505a _public_6b7505a
#define public_6b75066 _public_6b75066

PROC_DECLARE(0x6b74ff0, internal_6b74ff0, public_6b74ff0);
extern "C" NAKED register_t __cdecl internal_6b74ff0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b7501c
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_6b7500e
        mov ecx, dword ptr ds : [edi+0x130]
        public_6b7500e : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        jmp public_6b75036
        public_6b7501c : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6b7502a
        mov eax, dword ptr ds : [edi+0x130]
        public_6b7502a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_6b79028]
        public_6b75036 : nop
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6b75066
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b7505a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x78]
        mov dword ptr ds : [edi+0x11C], eax
        mov eax, esi
        pop edi
        pop esi
        ret 0xC
        public_6b7505a : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [edi+0x11C], eax
        public_6b75066 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b74ff0)
    }
}

#undef public_6b7500e
#undef public_6b7501c
#undef public_6b7502a
#undef public_6b75036
#undef public_6b7505a
#undef public_6b75066
