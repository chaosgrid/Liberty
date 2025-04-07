#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb920);
CLANG_FORWARD_PROC_SYMBOL(public_6eebd10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabd69);

#define public_6eea8f3 _public_6eea8f3
#define public_6eea9d5 _public_6eea9d5
#define public_6eea9f7 _public_6eea9f7
#define public_6eeaa1a _public_6eeaa1a
#define public_6eeaa55 _public_6eeaa55
#define public_6eeaab2 _public_6eeaab2
#define public_6eeaab8 _public_6eeaab8
#define public_6eeaada _public_6eeaada
#define public_6eeaaf2 _public_6eeaaf2
#define public_6eeaafa _public_6eeaafa
#define public_6eeab10 _public_6eeab10
#define public_6eeab2f _public_6eeab2f
#define public_6eeab38 _public_6eeab38
#define public_6eeabf0 _public_6eeabf0
#define public_6eeac0b _public_6eeac0b
#define public_6eeac0d _public_6eeac0d
#define public_6eeac11 _public_6eeac11
#define public_6eeac47 _public_6eeac47
#define public_6eead1f _public_6eead1f
#define public_6eead3a _public_6eead3a
#define public_6eead57 _public_6eead57
#define public_6eead64 _public_6eead64
#define public_6eead74 _public_6eead74
#define public_6eead87 _public_6eead87
#define public_6eead93 _public_6eead93
#define public_6eead9d _public_6eead9d
#define public_6eeae0c _public_6eeae0c
#define public_6eeae3b _public_6eeae3b
#define public_6eeae4c _public_6eeae4c
#define public_6eeae9d _public_6eeae9d
#define public_6eeaeb9 _public_6eeaeb9
#define public_6eeaec7 _public_6eeaec7

PROC_DECLARE(0x6eea890, internal_6eea890, public_6eea890);
extern "C" NAKED register_t __cdecl internal_6eea890()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fabd69 @0x6eea898*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabd69
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0xC0
        cmp eax, 0x20
        jne public_6eeaec7
        push ebp
        lea eax, ss:[esp+6]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6ead6a0
        lea ecx, ss:[esp+0x3C]
        push ecx
        xor ebp, ebp
        mov ecx, offset public_6fd0bbc
        mov dword ptr ss : [esp+0xD0], ebp
        call public_6f1df30
        mov eax, dword ptr ds : [public_6fd0bc0]
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, eax
        je public_6eeaeb9
        push ebx
        push esi
        push edi
        public_6eea8f3 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x4C], eax
        cmp dword ptr ds : [eax+0x10], ebp
        je public_6eeae9d
        mov esi, dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x54]
        call public_6eb5f30
        cmp eax, esi
        jne public_6eeae9d
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x3C], eax
        fild dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ds : [public_6fb6230]
        fnstsw ax
        test ah, 5
        jp public_6eeae9d
        mov eax, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], esi
        call public_6eea860
        push eax
        push 0x19
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eeae9d
        mov cl, byte ptr ss : [esp+0x12]
        push ebp
        mov byte ptr ss : [esp+0x28], cl
        push ebp
        lea ecx, ss:[esp+0x2C]
        call public_6f93790
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0xD8], 1
        call public_6eea860
        lea edi, ds:[eax+0xDC]
        lea edx, ss:[esp+0x24]
        cmp edx, edi
        mov dword ptr ss : [esp+0x30], eax
        je public_6eeaa1a
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f1df30
        mov esi, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, esi
        mov edi, dword ptr ds : [edi+4]
        je public_6eea9f7
        mov ecx, dword ptr ss : [esp+0x38]
        public_6eea9d5 : nop
        cmp ecx, edi
        je public_6eea9f7
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x44], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x38], ecx
        jne public_6eea9d5
        public_6eea9f7 : nop
        push esi
        push eax
        lea edx, ss:[esp+0xB8]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x38]
        push edi
        push eax
        push esi
        lea ecx, ss:[esp+0x30]
        call public_6ed0230
        public_6eeaa1a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [ecx]
        mov dl, byte ptr ss : [esp+0x12]
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov esi, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0xD8], 2
        call public_6eb6b30
        cmp eax, esi
        jae public_6eeaab2
        cmp esi, ebp
        mov eax, esi
        jge public_6eeaa55
        xor eax, eax
        public_6eeaa55 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov edi, eax
        push edi
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6eed270
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        lea eax, ds:[edi+esi*4]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        call public_6fa3db0
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], edi
        public_6eeaab2 : nop
        cmp ebx, dword ptr ss : [esp+0x28]
        je public_6eeaafa
        public_6eeaab8 : nop
        mov ecx, dword ptr ds : [ebx+8]
        lea esi, ds:[ebx+8]
        call public_6f33e80
        test al, al
        je public_6eeaaf2
        mov ecx, dword ptr ds : [esi]
        cmp dword ptr ds : [ecx+0x14C], ebp
        je public_6eeaada
        cmp dword ptr ds : [ecx+0x154], 0xFFFFFFFF
        jne public_6eeaaf2
        public_6eeaada : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6eeaaf2
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6eb5770
        public_6eeaaf2 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ss : [esp+0x28]
        jne public_6eeaab8
        public_6eeaafa : nop
        lea ecx, ss:[esp+0xB8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x44], ebp
        call public_6eb70f0
        nop 
        public_6eeab10 : nop
        lea ecx, ss:[esp+0x14]
        call public_6fa3db0
        test eax, eax
        je public_6eead93
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov edi, eax
        jne public_6eeab2f
        xor esi, esi
        jmp public_6eeab38
        public_6eeab2f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        sub esi, eax
        sar esi, 2
        public_6eeab38 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov ecx, dword ptr ds : [edi+eax*4]
        lea esi, ds:[edi+eax*4]
        lea edx, ss:[esp+0x8C]
        push edx
        call public_6eb70f0
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x80]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        faddp 
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x6C]
        faddp 
        fcomp dword ptr ds : [public_6fcf0dc]
        fnstsw ax
        test ah, 5
        jp public_6eead57
        mov edi, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xA0]
        call public_6eac620
        mov edi, dword ptr ds : [edi+0x154]
        lea eax, ss:[esp+0xA0]
        push edi
        push eax
        mov byte ptr ss : [esp+0xE0], 3
        call public_6f66220
        mov edi, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xB0]
        add esp, 8
        xor bl, bl
        cmp edi, eax
        je public_6eeac11
        mov edi, edi
        public_6eeabf0 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6eeac0b
        mov eax, dword ptr ss : [esp+0xA8]
        add edi, 4
        cmp edi, eax
        jne public_6eeabf0
        jmp public_6eeac0d
        public_6eeac0b : nop
        mov bl, 1
        public_6eeac0d : nop
        mov ebp, dword ptr ss : [esp+0x40]
        public_6eeac11 : nop
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0xD8], 2
        call public_6eec8d0
        test bl, bl
        jne public_6eead57
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x34], eax
        je public_6eead87
        public_6eeac47 : nop
        mov esi, dword ptr ss : [esp+0x58]
        add eax, 0x10
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6eb5f30
        cmp eax, esi
        jne public_6eead3a
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6eead3a
        lea edx, ss:[esp+0xC4]
        push edx
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x94]
        sub esp, 0xC
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x64]
        faddp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fcomp dword ptr ds : [public_6fcf0dc]
        fnstsw ax
        test ah, 5
        jp public_6eead3a
        mov eax, dword ptr ss : [esp+0x34]
        lea esi, ds:[eax+0x10]
        push esi
        lea ecx, ss:[esp+0x54]
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x58]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x78], eax
        jne public_6eead1f
        push esi
        push ecx
        lea ecx, ss:[esp+0x58]
        call public_6eb5770
        push esi
        lea ecx, ss:[esp+0x54]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x98], eax
        mov byte ptr ss : [esp+0x9C], 1
        jmp public_6eead3a
        public_6eead1f : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        public_6eead3a : nop
        lea ecx, ss:[esp+0x34]
        call public_6f1fa00
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ecx
        jne public_6eeac47
        jmp public_6eead87
        public_6eead57 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        je public_6eead74
        sub esi, eax
        public_6eead64 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6eead64
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6eead74 : nop
        push ecx
        add ecx, 0xFFFFFFFC
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ea1490
        sub dword ptr ss : [esp+0x1C], 4
        public_6eead87 : nop
        test ebp, ebp
        je public_6eeab10
        xor esi, esi
        jmp public_6eead9d
        public_6eead93 : nop
        xor esi, esi
        cmp ebp, esi
        je public_6eeae4c
        public_6eead9d : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        mov ecx, edx
        call public_6eea860
        push eax
        push 0x19
        call public_6eeb920
        mov eax, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ds : [public_6fb3370]
        add esp, 0x10
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x88], esi
        mov dword ptr ss : [esp+0x7C], offset public_6fb74d8
        mov dword ptr ss : [esp+0x84], ebp
        call edi
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ds : [public_6fb6234]
        fnstsw ax
        test ah, 5
        jp public_6eeae0c
        mov dword ptr ss : [esp+0x88], 2
        jmp public_6eeae3b
        public_6eeae0c : nop
        call edi
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x88], 1
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ds : [public_6fb6238]
        fnstsw ax
        test ah, 5
        jnp public_6eeae3b
        mov dword ptr ss : [esp+0x88], esi
        public_6eeae3b : nop
        lea ecx, ss:[esp+0x7C]
        push ecx
        mov ecx, offset public_6fd1c08
        call public_6ee8d70
        fstp st(0)
        public_6eeae4c : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xE4], 0
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        xor ebp, ebp
        public_6eeae9d : nop
        lea ecx, ss:[esp+0x48]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x48]
        cmp ecx, dword ptr ds : [public_6fd0bc0]
        jne public_6eea8f3
        pop edi
        pop esi
        pop ebx
        public_6eeaeb9 : nop
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call public_6fa8fe0
        add esp, 4
        pop ebp
        public_6eeaec7 : nop
        mov ecx, dword ptr ss : [esp+0xC0]
        mov dword ptr fs : [0], ecx
        add esp, 0xCC
        ret 8
        UNREACHABLE_TRAP(0x6eea890)
    }
}

#undef public_6eea8f3
#undef public_6eea9d5
#undef public_6eea9f7
#undef public_6eeaa1a
#undef public_6eeaa55
#undef public_6eeaab2
#undef public_6eeaab8
#undef public_6eeaada
#undef public_6eeaaf2
#undef public_6eeaafa
#undef public_6eeab10
#undef public_6eeab2f
#undef public_6eeab38
#undef public_6eeabf0
#undef public_6eeac0b
#undef public_6eeac0d
#undef public_6eeac11
#undef public_6eeac47
#undef public_6eead1f
#undef public_6eead3a
#undef public_6eead57
#undef public_6eead64
#undef public_6eead74
#undef public_6eead87
#undef public_6eead93
#undef public_6eead9d
#undef public_6eeae0c
#undef public_6eeae3b
#undef public_6eeae4c
#undef public_6eeae9d
#undef public_6eeaeb9
#undef public_6eeaec7
