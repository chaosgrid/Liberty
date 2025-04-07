#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11670);
CLANG_FORWARD_PROC_SYMBOL(public_6d116b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11720);
CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d146e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d167a0);

#define public_6d14768 _public_6d14768
#define public_6d1477e _public_6d1477e
#define public_6d14783 _public_6d14783
#define public_6d14795 _public_6d14795
#define public_6d147c8 _public_6d147c8
#define public_6d147e7 _public_6d147e7
#define public_6d147fa _public_6d147fa
#define public_6d14823 _public_6d14823
#define public_6d1484f _public_6d1484f
#define public_6d1485c _public_6d1485c

PROC_DECLARE(0x6d146e0, internal_6d146e0, public_6d146e0);
extern "C" NAKED register_t __cdecl internal_6d146e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x20]
        je public_6d14823
        mov edi, dword ptr ds : [eax+0x10]
        test edi, edi
        je public_6d1485c
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_6d1484f
        mov esi, dword ptr ss : [esp+0x14]
        lea ebp, ds:[edi+0x54]
        push esi
        mov ecx, ebp
        call public_6d11670
        test al, al
        jne public_6d1485c
        push ebx
        push esi
        mov ecx, ebp
        call public_6d116b0
        mov eax, dword ptr ds : [edi+4]
        push 1
        lea ecx, ss:[esp+0x24]
        lea ebx, ds:[edi+0x10]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x28], 0
        call public_6d16120
        test al, al
        je public_6d14795
        public_6d14768 : nop
        test esi, esi
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx+4]
        je public_6d1477e
        test eax, eax
        je public_6d1477e
        cmp eax, esi
        jne public_6d14783
        public_6d1477e : nop
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax]
        public_6d14783 : nop
        push 1
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        call public_6d16120
        test al, al
        jne public_6d14768
        public_6d14795 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov ecx, dword ptr ds : [edi+4]
        push 1
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[edi+0x28]
        push edx
        mov dword ptr ss : [esp+0x28], 0
        call public_6d16120
        test al, al
        je public_6d147fa
        public_6d147c8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push esi
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d147e7
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_6d147e7 : nop
        push 1
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[edi+0x28]
        call public_6d16120
        test al, al
        jne public_6d147c8
        public_6d147fa : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push esi
        lea ecx, ds:[edi+0x3C]
        call public_6d167a0
        pop ebx
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 0xC
        public_6d14823 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d14833*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d1483d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 0xC
        public_6d1484f : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        lea ecx, ds:[edi+0x54]
        call public_6d11720
        public_6d1485c : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d146e0)
    }
}

#undef public_6d14768
#undef public_6d1477e
#undef public_6d14783
#undef public_6d14795
#undef public_6d147c8
#undef public_6d147e7
#undef public_6d147fa
#undef public_6d14823
#undef public_6d1484f
#undef public_6d1485c
