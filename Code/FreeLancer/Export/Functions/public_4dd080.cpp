#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8120);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);

#define public_4dd182 _public_4dd182
#define public_4dd1cf _public_4dd1cf
#define public_4dd24d _public_4dd24d

PROC_DECLARE(0x4dd080, internal_4dd080, public_4dd080);
extern "C" NAKED register_t __cdecl internal_4dd080()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi-0x10]
        test al, al
        push edi
        jne public_4dd24d
        push 1
        push 2
        mov byte ptr ds : [esi-0x10], 1
        call public_4c8120
        mov eax, dword ptr ds : [esi-0x4E0]
        add esp, 8
        lea ecx, ds:[esi-0x4E0]
        push 0
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi+0xC8]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3E99999A
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xCC]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3E9CAC08
        mov dword ptr ss : [esp+0x14], 0xBE23D70A
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xD0]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3EB6C8B4
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3EBAE148
        mov dword ptr ss : [esp+0x14], 0xBE23D70A
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        je public_4dd1cf
        push ebx
        lea edi, ds:[esi+0x28]
        mov ebx, 0xA
        public_4dd182 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x50]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        add edi, 4
        dec ebx
        jne public_4dd182
        mov ecx, dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        pop ebx
        public_4dd1cf : nop
        mov ecx, dword ptr ds : [esi+0xBC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        lea eax, ds:[esi-0x3F4]
        mov dword ptr ss : [esp+8], 0x3E0624DD
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0xC], 0x3DEF9DB2
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        add esi, 0xFFFFFC18
        mov dword ptr ss : [esp+8], 0x3EC08312
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi], edx
        mov dword ptr ss : [esp+0xC], 0xBE88B439
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], eax
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        add esp, 0x18
        ret 
        public_4dd24d : nop
        mov ecx, dword ptr ds : [esi+0xBC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_5d8488]
        lea edi, ds:[esi-0x17C]
        push eax
        mov ecx, edi
        call public_55e120
        mov eax, dword ptr ds : [esi-0x18]
        lea ecx, ds:[esi-0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0x3EBDF3B6
        mov dword ptr ss : [esp+0x18], 0xBE8A3D71
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov ecx, dword ptr ds : [esi+0xC8]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3EAE978D
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xCC]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3EB1A9FC
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xD0]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3ECB4396
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3ECED917
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xC8]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0x3EAE978D
        mov dword ptr ss : [esp+0x18], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3EAE978D
        mov dword ptr ss : [esp+0x24], 0xBECCCCCD
        mov dword ptr ss : [esp+0x28], 0
        call public_55dee0
        mov dword ptr ss : [esp+0x14], 0x3EB1A9FC
        mov dword ptr ss : [esp+0x18], 0xBEB7CED9
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+8], 0x3EB1A9FC
        mov dword ptr ss : [esp+0xC], 0xBECCCCCD
        mov eax, dword ptr ds : [esi+0xCC]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0xD0]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0x3ECB4396
        mov dword ptr ss : [esp+0x24], 0xBEBDF3B6
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0x3ECB4396
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0xD4]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0x3ECED917
        mov dword ptr ss : [esp+0x24], 0xBEB7CED9
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0x3ECED917
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0xBC]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0x3ED1F8A1
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov dword ptr ss : [esp+0x14], 0x3ED1F8A1
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        call public_55dee0
        mov ecx, dword ptr ds : [public_5d8484]
        pop edi
        mov dword ptr ds : [esi+0xA8], ecx
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4dd080)
    }
}

#undef public_4dd182
#undef public_4dd1cf
#undef public_4dd24d
