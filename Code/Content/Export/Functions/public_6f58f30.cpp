#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f594c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f59550);
CLANG_FORWARD_PROC_SYMBOL(public_6f595a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f59620);
CLANG_FORWARD_PROC_SYMBOL(public_6f59830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf806);

#define public_6f58f70 _public_6f58f70
#define public_6f58fc4 _public_6f58fc4
#define public_6f58ff2 _public_6f58ff2
#define public_6f5902c _public_6f5902c
#define public_6f59087 _public_6f59087
#define public_6f590a0 _public_6f590a0
#define public_6f591ac _public_6f591ac
#define public_6f591d1 _public_6f591d1
#define public_6f59210 _public_6f59210
#define public_6f59222 _public_6f59222
#define public_6f5929d _public_6f5929d
#define public_6f592b0 _public_6f592b0

PROC_DECLARE(0x6f58f30, internal_6f58f30, public_6f58f30);
extern "C" NAKED register_t __cdecl internal_6f58f30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf806 @0x6f58f38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf806
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF0
        push ebp
        mov ebp, dword ptr ss : [esp+0x104]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f592b0
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push esi
        push edi
        lea esp, ss:[esp]
/*FIXUP public_6f58f70 : nop
        push offset public_6fbbb24 @0x6f58f70*/
  FIXUP public_6f58f70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb24
        mov ecx, ebp
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f5929d
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6fb3030]
        mov al, byte ptr ss : [esp+0x13]
        xor esi, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x2C], al
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x108], esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f59222
        public_6f58fc4 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f58fca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f58ff2
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f59210
/*FIXUP public_6f58ff2 : nop
        push offset public_6fb8d70 @0x6f58ff2*/
  FIXUP public_6f58ff2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d70
        call esi
        test al, al
        mov ecx, ebp
        je public_6f5902c
        call dword ptr ds : [public_6fb3054]
        push 4
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        mov ecx, offset public_6fce728
        call public_6f59550
        test al, al
        je public_6f59210
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6f59210
/*FIXUP public_6f5902c : nop
        push offset public_6fb7b50 @0x6f5902c*/
  FIXUP public_6f5902c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b50
        call esi
        test al, al
        je public_6f59210
        lea ecx, ss:[esp+0x6C]
        call public_6efc7a0
/*FIXUP push offset public_6fbbb18 @0x6f59044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb18
        push 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0xA0], 0
        mov dword ptr ss : [esp+0x9C], 0
        mov dword ptr ss : [esp+0x98], 0
        call ebx
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f59087
        mov byte ptr ss : [esp+0x13], 1
        jmp public_6f590a0
/*FIXUP public_6f59087 : nop
        push offset public_6fbbb0c @0x6f59087*/
  FIXUP public_6f59087 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb0c
        push 0
        mov ecx, ebp
        call ebx
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f590a0
        mov byte ptr ss : [esp+0x13], al
        public_6f590a0 : nop
        push 1
        mov ecx, ebp
        call ebx
        push 4
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        mov ecx, offset public_6fce748
        call public_6f59550
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x40]
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x44]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x98], ecx
        push 5
        mov ecx, ebp
        mov dword ptr ss : [esp+0x94], edx
        mov dword ptr ss : [esp+0x98], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f591d1
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x18]
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x1C]
        push 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fld st(0)
        fmul st, st(1)
        mov eax, dword ptr ds : [public_6fd0e48]
        test eax, eax
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        jne public_6f591ac
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd0e48], eax
        public_6f591ac : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0xE0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0xDC]
        lea edi, ss:[esp+0x6C]
        rep movsd
        public_6f591d1 : nop
        mov dl, byte ptr ss : [esp+0x13]
        mov esi, dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0xA8], dl
        call public_6f594c0
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0xA4]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0xE4], esi
        call public_6f59830
        public_6f59210 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f58fc4
        xor esi, esi
        public_6f59222 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x5C], eax
        call public_6f595a0
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0xA0]
        push eax
        mov ecx, offset public_6fd0e34
        mov byte ptr ss : [esp+0x110], 1
        call public_6f59620
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x68], esi
        mov dword ptr ss : [esp+0x6C], esi
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        public_6f5929d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f58f70
        pop edi
        pop esi
        pop ebx
        public_6f592b0 : nop
        mov ecx, dword ptr ss : [esp+0xF4]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xFC
        ret 
        UNREACHABLE_TRAP(0x6f58f30)
    }
}

#undef public_6f58f70
#undef public_6f58fc4
#undef public_6f58ff2
#undef public_6f5902c
#undef public_6f59087
#undef public_6f590a0
#undef public_6f591ac
#undef public_6f591d1
#undef public_6f59210
#undef public_6f59222
#undef public_6f5929d
#undef public_6f592b0
