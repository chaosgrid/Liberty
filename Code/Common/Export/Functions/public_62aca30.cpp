#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285740);
CLANG_FORWARD_PROC_SYMBOL(public_6285770);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62acb4b _public_62acb4b

PROC_DECLARE(0x62aca30, internal_62aca30, public_62aca30);
extern "C" NAKED register_t __cdecl internal_62aca30()
{
    __asm
    {
        sub esp, 0x70
        mov edx, dword ptr ds : [public_63fc0ec]
        mov eax, dword ptr ds : [public_63eb360]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_63fc0e8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x4C], ecx
        push 0x18
        lea ecx, ss:[esp+0x66]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [esi+0xE4]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], 2
        mov byte ptr ss : [esp+0x6C], bl
        mov byte ptr ss : [esp+0x6D], 1
        mov byte ptr ss : [esp+0x76], bl
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        mov byte ptr ss : [esp+0x6E], bl
        call dword ptr ds : [public_639927c]
        mov eax, dword ptr ds : [esi+0x88]
        mov byte ptr ss : [esp+0x6C], bl
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x50], ecx
        fld dword ptr ds : [eax+0x80]
        fdiv dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [esi+0xAC]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x58], eax
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        call public_6288970
        mov ecx, dword ptr ss : [esp+0x84]
        push ecx
        push esi
        call public_6285740
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_63fc304]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x14]
        add esp, 0x10
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x20]
        cmp eax, ebx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x40]
        jne public_62acb4b
        call public_6391cf0
        mov dword ptr ds : [public_63fc304], eax
        public_62acb4b : nop
        mov ecx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        call public_6285770
        add esp, 8
        pop esi
        pop ebx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x62aca30)
    }
}

#undef public_62acb4b
