#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

#define public_5a39b2 _public_5a39b2
#define public_5a39e0 _public_5a39e0
#define public_5a3a0b _public_5a3a0b

PROC_DECLARE(0x5a3950, internal_5a3950, public_5a3950);
extern "C" NAKED register_t __cdecl internal_5a3950()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x2E0]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        test byte ptr ds : [esi+0x2F4], 1
        mov byte ptr ds : [esi+0x328], 1
        je public_5a39b2
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xA4]
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [edi+8]
        lea edi, ss:[esp+8]
        fstp dword ptr ss : [esp+0x10]
        public_5a39b2 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_5a0880
        test byte ptr ds : [esi+0x2F4], 1
        jne public_5a39e0
        lea eax, ds:[esi+0x60]
        jmp public_5a3a0b
        public_5a39e0 : nop
        fld dword ptr ds : [esi+0xA8]
        lea eax, ss:[esp+0x14]
        fadd dword ptr ds : [esi+0x60]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xAC]
        fadd dword ptr ds : [esi+0x64]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0xB0]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0x1C]
        public_5a3a0b : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x350
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x5a3950)
    }
}

#undef public_5a39b2
#undef public_5a39e0
#undef public_5a3a0b
