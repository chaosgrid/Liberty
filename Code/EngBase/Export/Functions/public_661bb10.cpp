#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661bb7a _public_661bb7a
#define public_661bbda _public_661bbda
#define public_661bbfa _public_661bbfa
#define public_661bc37 _public_661bc37
#define public_661bc73 _public_661bc73

PROC_DECLARE(0x661bb10, internal_661bb10, public_661bb10);
extern "C" NAKED register_t __cdecl internal_661bb10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x48
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 1
        jne public_661bc37
        fld dword ptr ds : [esi+0x30]
        fmul dword ptr ds : [esi+0x2C]
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [public_662acf4]
        fmul st, st(1)
        test eax, eax
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jne public_661bb7a
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661bb7a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push edi
        lea edi, ds:[esi+0x3C]
        push ecx
        lea ecx, ss:[esp+0x28]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x60]
        lea edx, ds:[esi+0x78]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x64]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661bbda
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661bbda : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_662acf4]
        pop edi
        test eax, eax
        jne public_661bbfa
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661bbfa : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        add esi, 0x84
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        add esp, 0x48
        ret 0x10
        public_661bc37 : nop
        test eax, eax
        jne public_661bc73
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ds:[esi+0x78]
        add esi, 0x84
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        public_661bc73 : nop
        pop esi
        add esp, 0x48
        ret 0x10
        UNREACHABLE_TRAP(0x661bb10)
    }
}

#undef public_661bb7a
#undef public_661bbda
#undef public_661bbfa
#undef public_661bc37
#undef public_661bc73
