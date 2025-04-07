#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4104c0);
CLANG_FORWARD_PROC_SYMBOL(public_4a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5140);
CLANG_FORWARD_PROC_SYMBOL(public_4d6a40);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4d6661 _public_4d6661
#define public_4d666c _public_4d666c
#define public_4d6751 _public_4d6751
#define public_4d6753 _public_4d6753
#define public_4d6789 _public_4d6789
#define public_4d6794 _public_4d6794
#define public_4d6879 _public_4d6879
#define public_4d687b _public_4d687b
#define public_4d68b1 _public_4d68b1
#define public_4d68bc _public_4d68bc
#define public_4d6953 _public_4d6953
#define public_4d6955 _public_4d6955
#define public_4d698b _public_4d698b
#define public_4d6997 _public_4d6997
#define public_4d6a2b _public_4d6a2b
#define public_4d6a2d _public_4d6a2d

PROC_DECLARE(0x4d65f0, internal_4d65f0, public_4d65f0);
extern "C" NAKED register_t __cdecl internal_4d65f0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push 6
        mov edi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d6a2d
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d6a2d
        call public_54baf0
        test eax, eax
        je public_4d6a2d
        fld dword ptr ds : [edi+0x380]
        lea esi, ds:[edi+0x358]
        fdiv dword ptr ds : [public_5d800c]
        xor ebx, ebx
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6751
        fcom dword ptr ds : [public_5d8010]
        fnstsw ax
        test ah, 5
        jp public_4d6661
        fstp dword ptr ss : [esp+0x10]
        jmp public_4d666c
        public_4d6661 : nop
        mov eax, dword ptr ds : [public_5d8010]
        fstp st(0)
        mov dword ptr ss : [esp+0x10], eax
        public_4d666c : nop
        mov eax, dword ptr ds : [public_679ba8]
        movzx edx, byte ptr ds : [public_679baa]
        xor ecx, ecx
        mov cl, ah
        movzx eax, al
        mov byte ptr ss : [esp+0xF], bl
        mov byte ptr ss : [esp+0xE], bl
        mov byte ptr ss : [esp+0xD], bl
        mov dword ptr ss : [esp+0x14], ecx
        mov byte ptr ss : [esp+0xC], bl
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x1C]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5c89c8]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x10], al
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x15], al
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x1A], al
        call public_5b7ec0
        push eax
        call public_4104c0
        add esp, 0x10
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], al
        call public_4a1af0
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ebx
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4d6746*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        jmp public_4d6753
        public_4d6751 : nop
        fstp st(0)
        public_4d6753 : nop
        fld dword ptr ds : [edi+0x354]
        lea esi, ds:[edi+0x32C]
        fdiv dword ptr ds : [public_5d800c]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6879
        fcom dword ptr ds : [public_5d8010]
        fnstsw ax
        test ah, 5
        jp public_4d6789
        fstp dword ptr ss : [esp+0x10]
        jmp public_4d6794
        public_4d6789 : nop
        mov eax, dword ptr ds : [public_5d8010]
        fstp st(0)
        mov dword ptr ss : [esp+0x10], eax
        public_4d6794 : nop
        mov eax, dword ptr ds : [public_679ba8]
        movzx edx, byte ptr ds : [public_679baa]
        xor ecx, ecx
        mov cl, ah
        movzx eax, al
        mov byte ptr ss : [esp+0xF], bl
        mov byte ptr ss : [esp+0xE], bl
        mov byte ptr ss : [esp+0xD], bl
        mov dword ptr ss : [esp+0x1C], ecx
        mov byte ptr ss : [esp+0xC], bl
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], edx
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x14]
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c8]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x10], al
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x15], al
        call public_5b7ec0
        push eax
        call public_4104c0
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x1A], al
        call public_5b7ec0
        push eax
        call public_4104c0
        add esp, 0x10
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], al
        call public_4a1af0
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ebx
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4d686e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        jmp public_4d687b
        public_4d6879 : nop
        fstp st(0)
        public_4d687b : nop
        fld dword ptr ds : [edi+0x3AC]
        lea esi, ds:[edi+0x384]
        fdiv dword ptr ds : [public_5d800c]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6953
        fcom dword ptr ds : [public_5d8010]
        fnstsw ax
        test ah, 5
        jp public_4d68b1
        fstp dword ptr ss : [esp+0x10]
        jmp public_4d68bc
        public_4d68b1 : nop
        mov eax, dword ptr ds : [public_5d8010]
        fstp st(0)
        mov dword ptr ss : [esp+0x10], eax
        public_4d68bc : nop
        mov eax, dword ptr ds : [public_679ba8]
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        mov dl, ah
        push ecx
        movzx ecx, byte ptr ds : [public_679baa]
        sub esp, 0xC
        mov byte ptr ss : [esp+0x1F], bl
        mov dword ptr ss : [esp+0x2C], edx
        xor edx, edx
        mov dl, al
        fild dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], ecx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1E], bl
        fmul qword ptr ds : [public_5c89c8]
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1C], bl
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], edx
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x2C]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp]
        call public_4d6a40
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_4a1af0
        mov ecx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ebx
        push 0x3F800000
        push ecx
/*FIXUP push offset public_67dbf8 @0x4d6948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [edx+0x1C]
        jmp public_4d6955
        public_4d6953 : nop
        fstp st(0)
        public_4d6955 : nop
        fld dword ptr ds : [edi+0x3D8]
        lea esi, ds:[edi+0x3B0]
        fdiv dword ptr ds : [public_5d800c]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6a2b
        fcom dword ptr ds : [public_5d8010]
        fnstsw ax
        test ah, 5
        jp public_4d698b
        fstp dword ptr ss : [esp+0x10]
        jmp public_4d6997
        public_4d698b : nop
        mov edx, dword ptr ds : [public_5d8010]
        fstp st(0)
        mov dword ptr ss : [esp+0x10], edx
        public_4d6997 : nop
        lea ecx, ss:[esp+0xC]
        call public_4b5140
        mov eax, dword ptr ss : [esp+0x10]
        movzx edx, byte ptr ds : [public_679baa]
        push eax
        mov eax, dword ptr ds : [public_679ba8]
        xor ecx, ecx
        mov cl, ah
        sub esp, 0xC
        movzx eax, al
        mov dword ptr ss : [esp+0x2C], ecx
        fild dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], edx
        lea ecx, ss:[esp+0x1C]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], eax
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x2C]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp]
        call public_4d6a40
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_4a1af0
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ebx
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4d6a1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_4d6a2b : nop
        fstp st(0)
        public_4d6a2d : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4d65f0)
    }
}

#undef public_4d6661
#undef public_4d666c
#undef public_4d6751
#undef public_4d6753
#undef public_4d6789
#undef public_4d6794
#undef public_4d6879
#undef public_4d687b
#undef public_4d68b1
#undef public_4d68bc
#undef public_4d6953
#undef public_4d6955
#undef public_4d698b
#undef public_4d6997
#undef public_4d6a2b
#undef public_4d6a2d
