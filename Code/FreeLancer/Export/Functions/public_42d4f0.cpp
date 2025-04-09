#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_42d4f0);

#define public_42d524 _public_42d524
#define public_42d540 _public_42d540
#define public_42d544 _public_42d544
#define public_42d5cb _public_42d5cb
#define public_42d5f3 _public_42d5f3

PROC_DECLARE(0x42d4f0, internal_42d4f0, public_42d4f0);
extern "C" NAKED register_t __cdecl internal_42d4f0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        push edi
        je public_42d544
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_42d1d0
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_42d524
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+8], 0
        public_42d524 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_42d540
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0xC], 0
        public_42d540 : nop
        mov byte ptr ds : [esi+0x10], 0
        public_42d544 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_5c944c @0x42d548*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c944c
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_5c607c]
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_42d5cb
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        push edi
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ds : [public_5c6d4c]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        jmp public_42d5f3
        public_42d5cb : nop
        push edi
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_42d5f3 : nop
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_5c6074]
        add esp, 4
        push edi
        mov ecx, esi
        call public_42d1d0
        pop edi
        mov byte ptr ds : [esi+0x10], 1
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x42d4f0)
    }
}

#undef public_42d524
#undef public_42d540
#undef public_42d544
#undef public_42d5cb
#undef public_42d5f3
