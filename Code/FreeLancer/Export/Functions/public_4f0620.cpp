#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4f0620);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_559900);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f0650 _public_4f0650
#define public_4f06d8 _public_4f06d8
#define public_4f0749 _public_4f0749
#define public_4f0759 _public_4f0759
#define public_4f078c _public_4f078c
#define public_4f079c _public_4f079c
#define public_4f0835 _public_4f0835
#define public_4f08e6 _public_4f08e6

PROC_DECLARE(0x4f0620, internal_4f0620, public_4f0620);
extern "C" NAKED register_t __cdecl internal_4f0620()
{
    __asm
    {
        sub esp, 0xE0
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        call public_54baf0
        call public_40f130
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_674b6c]
        test eax, eax
        jne public_4f0650
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4f0650 : nop
        mov ebp, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[ebp+0x10]
        push ecx
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        fld dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x18]
        push edx
        lea eax, ss:[esp+0xAC]
        fstp dword ptr ss : [esp+0x4C]
        push eax
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x43340000
        call dword ptr ds : [public_5c63fc]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0xD8]
        push edx
        mov esi, eax
        call dword ptr ds : [public_5c65b0]
        mov edi, eax
        mov eax, dword ptr ds : [public_674b6c]
        add esp, 0x10
        test eax, eax
        jne public_4f06d8
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4f06d8 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x14]
        fabs 
        mov ecx, 9
        fld dword ptr ss : [esp+0x18]
        lea esi, ss:[esp+0x84]
        fabs 
        lea edi, ss:[esp+0x54]
        fmul dword ptr ds : [public_67dc98]
        rep movsd
        fcompp 
        fnstsw ax
        test ah, 5
        pop edi
        jp public_4f0759
        fld dword ptr ds : [public_67dc90]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fld dword ptr ds : [public_5d8f04]
        fchs 
        fmulp 
        fmul dword ptr ds : [public_5d9654]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4f0749
        fchs 
        public_4f0749 : nop
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        jmp public_4f079c
        public_4f0759 : nop
        fld dword ptr ds : [public_67dc94]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fld dword ptr ds : [public_5d8f04]
        fchs 
        fmulp 
        fmul dword ptr ds : [public_5d9654]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4f078c
        fchs 
        public_4f078c : nop
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+0x10]
        fdivr dword ptr ss : [esp+0x20]
        public_4f079c : nop
        mov eax, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [public_5d8f04]
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [ebx+0x7B8]
        test eax, eax
        mov dword ptr ss : [esp+0x7C], ecx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x3C], ecx
        je public_4f0835
        mov eax, dword ptr ds : [ebx+0x7D4]
        test eax, eax
        je public_4f0835
        mov edx, dword ptr ds : [public_679b80]
        push 0
        push 0
        push 0x3D75C28F
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x58], edx
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        push eax
        mov byte ptr ss : [esp+0x24], 0xC
        mov byte ptr ss : [esp+0x25], 0x3E
        mov byte ptr ss : [esp+0x26], 0x7A
        mov byte ptr ss : [esp+0x27], 0xFF
        call public_559900
        mov edx, dword ptr ds : [ebx+0x7B8]
        push 0
        push 0
        push 0x3D75C28F
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        push edx
        call public_559900
        add esp, 0x30
        public_4f0835 : nop
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_67dbf8 @0x4f084f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_4f08e6
        fild dword ptr ds : [public_616840]
        fild dword ptr ds : [public_616844]
        fld dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x28]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x48]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsqrt 
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ds : [public_5d8f04]
        fmul dword ptr ds : [public_5d9650]
        fdiv dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc70]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4f08e6
        mov dword ptr ds : [public_674b78], ebp
        mov dword ptr ds : [public_674b74], 0
        public_4f08e6 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0xE0
        ret 4
        UNREACHABLE_TRAP(0x4f0620)
    }
}

#undef public_4f0650
#undef public_4f06d8
#undef public_4f0749
#undef public_4f0759
#undef public_4f078c
#undef public_4f079c
#undef public_4f0835
#undef public_4f08e6
