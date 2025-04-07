#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11670);
CLANG_FORWARD_PROC_SYMBOL(public_6d116b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11720);
CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d12be0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14570);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);

#define public_6d145e0 _public_6d145e0
#define public_6d145f0 _public_6d145f0
#define public_6d1461c _public_6d1461c
#define public_6d1461e _public_6d1461e
#define public_6d14640 _public_6d14640
#define public_6d14677 _public_6d14677
#define public_6d14696 _public_6d14696
#define public_6d146a8 _public_6d146a8
#define public_6d146c3 _public_6d146c3
#define public_6d146d0 _public_6d146d0

PROC_DECLARE(0x6d14570, internal_6d14570, public_6d14570);
extern "C" NAKED register_t __cdecl internal_6d14570()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6d145f0
        mov edi, dword ptr ds : [eax+0x10]
        test edi, edi
        je public_6d146d0
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_6d146c3
        mov esi, dword ptr ss : [esp+0x14]
        lea ebx, ds:[edi+0x40]
        push esi
        mov ecx, ebx
        call public_6d11670
        test al, al
        jne public_6d146d0
        push esi
        mov ecx, ebx
        call public_6d116b0
        push esi
        mov ecx, edi
        call public_6d12be0
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        xor ebx, ebx
        nop 
        public_6d145e0 : nop
        test ebx, ebx
        jne public_6d1461c
        mov ebx, dword ptr ds : [edi+0x18]
        jmp public_6d1461e
        lea esp, ss:[esp]
        public_6d145f0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x659
/*FIXUP push offset public_6d6840c @0x6d14600*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68458 @0x6d1460a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68458
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6d1461c : nop
        mov ebx, dword ptr ds : [ebx]
        public_6d1461e : nop
        test ebx, ebx
        je public_6d14640
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push esi
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d145e0
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx]
        jmp public_6d145e0
        public_6d14640 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+0xA0]
        mov eax, dword ptr ds : [edi]
        push 1
        lea ecx, ss:[esp+0x20]
        add edi, 0x2C
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x24], 0
        call public_6d16120
        test al, al
        je public_6d146a8
        public_6d14677 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx+4]
        push eax
        push esi
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d14696
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_6d14696 : nop
        push 1
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6d16120
        test al, al
        jne public_6d14677
        public_6d146a8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+0xB4]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6d146c3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ds:[edi+0x40]
        call public_6d11720
        public_6d146d0 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d14570)
    }
}

#undef public_6d145e0
#undef public_6d145f0
#undef public_6d1461c
#undef public_6d1461e
#undef public_6d14640
#undef public_6d14677
#undef public_6d14696
#undef public_6d146a8
#undef public_6d146c3
#undef public_6d146d0
