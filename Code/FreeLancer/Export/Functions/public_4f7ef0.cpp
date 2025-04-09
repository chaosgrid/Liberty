#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f7f33 _public_4f7f33
#define public_4f7f5a _public_4f7f5a

PROC_DECLARE(0x4f7ef0, internal_4f7ef0, public_4f7ef0);
extern "C" NAKED register_t __cdecl internal_4f7ef0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x44]
        test eax, eax
        je public_4f7f5a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f7f5a
        mov ecx, dword ptr ds : [edi+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f7f5a
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f7f33
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f7f33 : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0x10
        push edi
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov edi, dword ptr ss : [esp+0x3C]
        lea esi, ss:[esp+8]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        public_4f7f5a : nop
        lea esi, ds:[edi+0x10]
        mov edi, dword ptr ss : [esp+0x3C]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4f7ef0)
    }
}

#undef public_4f7f33
#undef public_4f7f5a
