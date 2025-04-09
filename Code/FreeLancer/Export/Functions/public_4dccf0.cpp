#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);

#define public_4dceea _public_4dceea
#define public_4dcf23 _public_4dcf23
#define public_4dcf6f _public_4dcf6f

PROC_DECLARE(0x4dccf0, internal_4dccf0, public_4dccf0);
extern "C" NAKED register_t __cdecl internal_4dccf0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x364]
        mov ecx, esi
        call public_55e280
        test al, al
        jne public_4dcf6f
        lea ebx, ds:[edi+0x4E0]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_4dcf6f
        mov al, byte ptr ds : [edi+0x4D0]
        test al, al
        jne public_4dceea
        mov eax, dword ptr ds : [public_5d8488]
        push eax
        mov ecx, esi
        call public_55e120
        mov eax, dword ptr ds : [edi+0x4C8]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ds:[edi+0x4D4]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0x3EBDF3B6
        mov dword ptr ss : [esp+0x1C], 0xBE8A3D71
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [edi+0x59C]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0x3ED1F8A1
        mov dword ptr ss : [esp+0x1C], 0xBECCCCCD
        mov dword ptr ss : [esp+0x20], 0xBF800000
        mov dword ptr ss : [esp+0x24], 0x3ED1F8A1
        mov dword ptr ss : [esp+0x28], 0xBEBD70A4
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        call public_55dee0
        mov eax, dword ptr ds : [edi+0x5A8]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3EAE978D
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3EAE978D
        mov dword ptr ss : [esp+0x1C], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [edi+0x5AC]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3EB1A9FC
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3EB1A9FC
        mov dword ptr ss : [esp+0x1C], 0xBEB7CED9
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [edi+0x5B0]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3ECB4396
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3ECB4396
        mov dword ptr ss : [esp+0x1C], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], 0x3ECED917
        mov dword ptr ss : [esp+0x20], 0xBECCCCCD
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x10], 0x3ECED917
        mov dword ptr ss : [esp+0x14], 0xBEB7CED9
        mov dword ptr ss : [esp+0x18], 0
        push edx
        mov eax, dword ptr ds : [edi+0x5B4]
        push eax
        mov ecx, esi
        call public_55dee0
        mov ecx, dword ptr ds : [public_5d8484]
        mov dword ptr ds : [edi+0x588], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        public_4dceea : nop
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [public_5d8488]
        push eax
        mov ecx, ebx
        call public_55e590
        mov ecx, dword ptr ds : [edi+0x4CC]
        push 0x3DCCCCCD
        push 0x3F800000
        push ecx
        mov ecx, ebx
        call public_55e360
        lea esi, ds:[edi+0x508]
        mov ebx, 0xA
        public_4dcf23 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        add esi, 4
        dec ebx
        jne public_4dcf23
        mov ecx, dword ptr ds : [edi+0x5C4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4dcf6f : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4dccf0)
    }
}

#undef public_4dceea
#undef public_4dcf23
#undef public_4dcf6f
