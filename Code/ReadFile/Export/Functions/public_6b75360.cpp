#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b75420);

#define public_6b7538f _public_6b7538f
#define public_6b753c8 _public_6b753c8
#define public_6b75405 _public_6b75405
#define public_6b75411 _public_6b75411

PROC_DECLARE(0x6b75360, internal_6b75360, public_6b75360);
extern "C" NAKED register_t __cdecl internal_6b75360()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        mov eax, dword ptr ds : [esi+0x128]
        test eax, eax
        je public_6b7538f
        mov dword ptr ds : [esi+0x11C], 2
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x104
        ret 0xC
        public_6b7538f : nop
        mov ecx, dword ptr ss : [esp+0x110]
        lea eax, ss:[esp+4]
        push 0x104
        push eax
        lea edx, ds:[esi+0xD]
        push ecx
        push edx
        call public_6b75420
        add esp, 0x10
        test eax, eax
        je public_6b753c8
        mov dword ptr ds : [esi+0x11C], 0xA1
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x104
        ret 0xC
        public_6b753c8 : nop
        mov eax, dword ptr ss : [esp+0x114]
        push edi
        lea ecx, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_6b79044]
        mov edi, eax
        test edi, edi
        jne public_6b75411
        mov eax, dword ptr ds : [esi+0x120]
        test eax, eax
        je public_6b75405
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x78]
        mov dword ptr ds : [esi+0x11C], eax
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x104
        ret 0xC
        public_6b75405 : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [esi+0x11C], eax
        public_6b75411 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x104
        ret 0xC
        UNREACHABLE_TRAP(0x6b75360)
    }
}

#undef public_6b7538f
#undef public_6b753c8
#undef public_6b75405
#undef public_6b75411
