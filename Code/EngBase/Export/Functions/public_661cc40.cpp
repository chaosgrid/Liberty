#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661c270);
CLANG_FORWARD_PROC_SYMBOL(public_661caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661cd1b _public_661cd1b
#define public_661cd63 _public_661cd63
#define public_661cda6 _public_661cda6
#define public_661cdf8 _public_661cdf8
#define public_661ce79 _public_661ce79
#define public_661ced8 _public_661ced8
#define public_661cefe _public_661cefe
#define public_661cf46 _public_661cf46
#define public_661cf7b _public_661cf7b

PROC_DECLARE(0x661cc40, internal_661cc40, public_661cc40);
extern "C" NAKED register_t __cdecl internal_661cc40()
{
    __asm
    {
        sub esp, 0x12C
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+8], 1
        jne public_661cf7b
        mov eax, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        mov edx, dword ptr ss : [ebp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x6C]
        push edx
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_662acec]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x98]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        mov edx, dword ptr ds : [eax+0x1C]
        push ecx
        mov ecx, dword ptr ds : [eax+0x10]
        push edx
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, dword ptr ds : [eax+0x18]
        push edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0xC4]
        call public_661caa0
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661cd1b
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cd1b : nop
        push esi
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA4]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x140]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_662acf4]
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        lea edi, ss:[esp+0xF0]
        test eax, eax
        rep movsd
        jne public_661cd63
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cd63 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea ebx, ss:[ebp+0x3C]
        lea edx, ss:[esp+0xF4]
        push ebx
        push edx
        lea edx, ss:[esp+0x90]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_662acf4]
        mov ecx, 9
        lea esi, ss:[esp+0x88]
        lea edi, ss:[esp+0xD0]
        test eax, eax
        rep movsd
        jne public_661cda6
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cda6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x14]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [ebp+0x68]
        lea ebx, ss:[ebp+0x60]
        sub esp, 0xC
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_661c270
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661cdf8
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cdf8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0xD4]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_661c270
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, ebx
        lea esi, ss:[esp+0xD0]
        lea edi, ss:[ebp+0x3C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661ce79
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661ce79 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[ebp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ebx]
        lea edx, ss:[ebp+0x78]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], eax
        pop ebx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661ced8
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661ced8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x88]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661cefe
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cefe : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0xD0]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_662acf4]
        mov ecx, 9
        lea esi, ss:[esp+0xA8]
        lea edi, ss:[esp+0x114]
        rep movsd
        pop edi
        pop esi
        test eax, eax
        jne public_661cf46
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cf46 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10C]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add ebp, 0x84
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], eax
        public_661cf7b : nop
        pop ebp
        add esp, 0x12C
        ret 4
        UNREACHABLE_TRAP(0x661cc40)
    }
}

#undef public_661cd1b
#undef public_661cd63
#undef public_661cda6
#undef public_661cdf8
#undef public_661ce79
#undef public_661ced8
#undef public_661cefe
#undef public_661cf46
#undef public_661cf7b
