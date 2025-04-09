#include "FreeLancer-PCH.h"


#define public_5a02a6 _public_5a02a6
#define public_5a02c0 _public_5a02c0
#define public_5a02c7 _public_5a02c7
#define public_5a02e1 _public_5a02e1

PROC_DECLARE(0x5a0250, internal_5a0250, public_5a0250);
extern "C" NAKED register_t __cdecl internal_5a0250()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        fsub dword ptr ds : [edi+0xA8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [edi+0xAC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi+0xB0]
        mov dword ptr ds : [edi+0xA8], eax
        mov dword ptr ds : [edi+0xAC], ecx
        mov dword ptr ds : [edi+0xB0], edx
        fstp dword ptr ss : [esp+0x10]
        je public_5a02c7
        public_5a02a6 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_5a02c0
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xAC]
        public_5a02c0 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5a02a6
        public_5a02c7 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_5a02e1
        mov edx, dword ptr ds : [edi]
        add eax, 0x60
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        add esp, 0xC
        ret 0xC
        public_5a02e1 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ds:[edi+0x60]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5a0250)
    }
}

#undef public_5a02a6
#undef public_5a02c0
#undef public_5a02c7
#undef public_5a02e1
