#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661b9a8 _public_661b9a8
#define public_661ba27 _public_661ba27
#define public_661ba58 _public_661ba58

PROC_DECLARE(0x661b950, internal_661b950, public_661b950);
extern "C" NAKED register_t __cdecl internal_661b950()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_662acf4]
        mov dword ptr ss : [esp+0x20], ecx
        test eax, eax
        mov dword ptr ss : [esp+0x24], edx
        jne public_661b9a8
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661b9a8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        fld qword ptr ss : [esp+0x48]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [edi+0x2C]
        cmp eax, 0x3F800000
        je public_661ba58
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        jne public_661ba27
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661ba27 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x2C]
        push esi
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        public_661ba58 : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 0x14
        UNREACHABLE_TRAP(0x661b950)
    }
}

#undef public_661b9a8
#undef public_661ba27
#undef public_661ba58
