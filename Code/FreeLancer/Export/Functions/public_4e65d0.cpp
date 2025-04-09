#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4e65d0);
CLANG_FORWARD_PROC_SYMBOL(public_4e6880);
CLANG_FORWARD_PROC_SYMBOL(public_4e68d0);
CLANG_FORWARD_PROC_SYMBOL(public_4e6960);
CLANG_FORWARD_PROC_SYMBOL(public_4e69c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e6628 _public_4e6628
#define public_4e6664 _public_4e6664
#define public_4e66c7 _public_4e66c7
#define public_4e6733 _public_4e6733
#define public_4e674e _public_4e674e
#define public_4e67a8 _public_4e67a8
#define public_4e67bd _public_4e67bd
#define public_4e67d2 _public_4e67d2
#define public_4e6815 _public_4e6815
#define public_4e682a _public_4e682a
#define public_4e683f _public_4e683f
#define public_4e6850 _public_4e6850
#define public_4e6873 _public_4e6873

PROC_DECLARE(0x4e65d0, internal_4e65d0, public_4e65d0);
extern "C" NAKED register_t __cdecl internal_4e65d0()
{
    __asm
    {
        sub esp, 0x64
        mov eax, dword ptr ds : [public_5c6d90]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x78]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push 0
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [eax]
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ebx, eax
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        jne public_4e6628
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e6628 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_4e6664
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e6664 : nop
        mov ebx, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xC]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        jne public_4e66c7
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e66c7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x10]
        mov eax, esi
        push 0xFFFFFFFF
        push 1
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        push edi
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_4e6873
        public_4e6733 : nop
        mov al, byte ptr ss : [esp+0x80]
        test al, al
        jne public_4e674e
        push ebp
        mov ecx, esi
        call public_4e6960
        test al, al
        jne public_4e6850
        public_4e674e : nop
        lea edx, ss:[esp+0x38]
        push edx
        push ebp
        mov ecx, esi
        call public_4e68d0
        fstp dword ptr ss : [esp+0x7C]
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, ebx
        call public_4e6880
        mov edi, dword ptr ss : [esp+0x7C]
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x68]
        call public_422b80
        push eax
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [esi+0xC]
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_4e67a8
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0xC], ecx
        public_4e67a8 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 5
        jp public_4e67bd
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x10], edx
        public_4e67bd : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [esi+0x14]
        fnstsw ax
        test ah, 5
        jp public_4e67d2
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x14], eax
        public_4e67d2 : nop
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, ebx
        call public_4e6880
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x74]
        call public_422b80
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_423b30
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [esi]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_4e6815
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi], edx
        public_4e6815 : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_4e682a
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+4], eax
        public_4e682a : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_4e683f
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+8], ecx
        public_4e683f : nop
        mov edx, dword ptr ss : [esp+0x80]
        push edx
        push ebx
        push ebp
        mov ecx, esi
        call public_4e69c0
        public_4e6850 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        jne public_4e6733
        public_4e6873 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x64
        ret 0xC
        UNREACHABLE_TRAP(0x4e65d0)
    }
}

#undef public_4e6628
#undef public_4e6664
#undef public_4e66c7
#undef public_4e6733
#undef public_4e674e
#undef public_4e67a8
#undef public_4e67bd
#undef public_4e67d2
#undef public_4e6815
#undef public_4e682a
#undef public_4e683f
#undef public_4e6850
#undef public_4e6873
