#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf3560);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);

#define public_6cf35a7 _public_6cf35a7
#define public_6cf35cf _public_6cf35cf
#define public_6cf368c _public_6cf368c

PROC_DECLARE(0x6cf3560, internal_6cf3560, public_6cf3560);
extern "C" NAKED register_t __cdecl internal_6cf3560()
{
    __asm
    {
        sub esp, 0x48
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [public_6d6419c]
        call edi
        fld dword ptr ds : [eax+0x88]
        fcomp dword ptr ds : [public_6d65188]
        mov ecx, dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6cf35a7
        call edi
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax+0x88]
        push ecx
        lea edx, ds:[esi+0x60]
        push edx
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6d6444c]
        add esp, 8
        jmp public_6cf35cf
        public_6cf35a7 : nop
        call edi
        fld dword ptr ds : [eax+0x84]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cf368c
        mov ecx, dword ptr ds : [esi+0x10]
        call edi
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ss : [esp+8], eax
        public_6cf35cf : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cf368c
        mov ecx, dword ptr ds : [esi+0x28]
        xor eax, eax
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov byte ptr ss : [esp+0x12], al
        call public_6d06cd0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        lea edi, ds:[esi+0x74]
        push edi
        mov dword ptr ss : [esp+0x28], eax
        push edx
        lea eax, ss:[esp+0x14]
        lea ecx, ds:[esi+0x70]
        push eax
        mov dword ptr ss : [esp+0x58], ecx
        mov byte ptr ss : [esp+0x1D], 1
        call dword ptr ds : [public_6d64448]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_6d64444]
        add esp, 0x14
        public_6cf368c : nop
        pop edi
        pop esi
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6cf3560)
    }
}

#undef public_6cf35a7
#undef public_6cf35cf
#undef public_6cf368c
