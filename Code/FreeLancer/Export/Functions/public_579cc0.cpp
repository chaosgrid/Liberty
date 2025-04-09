#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_595e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_579d79 _public_579d79
#define public_579dac _public_579dac
#define public_579e42 _public_579e42
#define public_579e75 _public_579e75

PROC_DECLARE(0x579cc0, internal_579cc0, public_579cc0);
extern "C" NAKED register_t __cdecl internal_579cc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x90
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [ebx+0x334], ecx
        mov ecx, dword ptr ds : [ebx+0x3F0]
        test ecx, ecx
        push esi
        push edi
        mov dword ptr ds : [ebx+0x330], eax
        je public_579dac
        mov edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [ebx+0x3F8]
        push edx
        push eax
        call public_595e30
        fld dword ptr ds : [ebx+0x330]
        mov eax, dword ptr ds : [public_67c480]
        test eax, eax
        fstp dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        jne public_579d79
        call public_5b73e0
        mov dword ptr ds : [public_67c480], eax
        public_579d79 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ds:[ebx+0x3C]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x3C]
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x3F0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x6C]
        push edx
        call dword ptr ds : [eax+0x20]
        public_579dac : nop
        mov ecx, dword ptr ds : [ebx+0x3F4]
        test ecx, ecx
        je public_579e75
        mov eax, dword ptr ds : [ebx+0x3F8]
        mov edx, dword ptr ds : [ebx+0x330]
        push eax
        push edx
        call public_595e30
        fld dword ptr ds : [ebx+0x334]
        mov eax, dword ptr ds : [public_67c480]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x38], 0
        jne public_579e42
        call public_5b73e0
        mov dword ptr ds : [public_67c480], eax
        public_579e42 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ds:[ebx+0x3C]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x6C]
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x3F4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x3C]
        push edx
        call dword ptr ds : [eax+0x20]
        public_579e75 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret 8
        UNREACHABLE_TRAP(0x579cc0)
    }
}

#undef public_579d79
#undef public_579dac
#undef public_579e42
#undef public_579e75
