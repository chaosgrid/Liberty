#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ecda9f _public_6ecda9f

PROC_DECLARE(0x6ecd9e0, internal_6ecd9e0, public_6ecd9e0);
extern "C" NAKED register_t __cdecl internal_6ecd9e0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        push edi
        mov edi, ecx
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+8]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x48]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+0x30]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        push 6
        mov ecx, esi
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0xC]
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+8]
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x48]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6ecda9f
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ecda9f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        add edi, 0xC
        mov ecx, 9
        lea esi, ss:[esp+0x20]
        rep movsd
        pop edi
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6ecd9e0)
    }
}

#undef public_6ecda9f
