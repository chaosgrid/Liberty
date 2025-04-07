#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76470);

#define public_6b75d14 _public_6b75d14
#define public_6b75d32 _public_6b75d32
#define public_6b75d40 _public_6b75d40
#define public_6b75d81 _public_6b75d81

PROC_DECLARE(0x6b75d00, internal_6b75d00, public_6b75d00);
extern "C" NAKED register_t __cdecl internal_6b75d00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_6b75d14
        mov eax, dword ptr ds : [edi+0x130]
        public_6b75d14 : nop
        mov ecx, dword ptr ds : [edi+0x120]
        test ecx, ecx
        je public_6b75d32
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x80]
        pop edi
        pop esi
        ret 0xC
        public_6b75d32 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_6b75d40
        mov dword ptr ds : [ecx], 0
        public_6b75d40 : nop
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        lea esi, ds:[edi+0x134]
        je public_6b75d81
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, esi
        call public_6b76470
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6b75d81
        add eax, 0x10
        test eax, eax
        je public_6b75d81
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6b75d81
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        ret 0xC
        public_6b75d81 : nop
        mov dword ptr ds : [edi+0x11C], 0xFFFFFFFF
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b75d00)
    }
}

#undef public_6b75d14
#undef public_6b75d32
#undef public_6b75d40
#undef public_6b75d81
