#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55b4a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

#define public_55b502 _public_55b502
#define public_55b53b _public_55b53b
#define public_55b566 _public_55b566
#define public_55b5a9 _public_55b5a9

PROC_DECLARE(0x55b4a0, internal_55b4a0, public_55b4a0);
extern "C" NAKED register_t __cdecl internal_55b4a0()
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
        je public_55b502
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
        public_55b502 : nop
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
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55b5a9
        test byte ptr ds : [esi+0x2F4], 1
        jne public_55b53b
        lea eax, ds:[esi+0x60]
        jmp public_55b566
        public_55b53b : nop
        fld dword ptr ds : [esi+0xA8]
        lea eax, ss:[esp+8]
        fadd dword ptr ds : [esi+0x60]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xAC]
        fadd dword ptr ds : [esi+0x64]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xB0]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0x10]
        public_55b566 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [public_5c6d90]
        lea edi, ss:[esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55b5a9 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x55b4a0)
    }
}

#undef public_55b502
#undef public_55b53b
#undef public_55b566
#undef public_55b5a9
