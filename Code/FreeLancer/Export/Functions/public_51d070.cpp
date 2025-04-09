#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_4c78d0);
CLANG_FORWARD_PROC_SYMBOL(public_4f1da0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5330);
CLANG_FORWARD_PROC_SYMBOL(public_51b650);
CLANG_FORWARD_PROC_SYMBOL(public_51cc00);
CLANG_FORWARD_PROC_SYMBOL(public_51d070);
CLANG_FORWARD_PROC_SYMBOL(public_51d7d0);
CLANG_FORWARD_PROC_SYMBOL(public_51d7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5784a0);
CLANG_FORWARD_PROC_SYMBOL(public_59df40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b8070);

#define public_51d0e6 _public_51d0e6
#define public_51d0ea _public_51d0ea
#define public_51d104 _public_51d104
#define public_51d10c _public_51d10c
#define public_51d139 _public_51d139
#define public_51d140 _public_51d140
#define public_51d1b4 _public_51d1b4
#define public_51d1d4 _public_51d1d4
#define public_51d1d8 _public_51d1d8
#define public_51d216 _public_51d216
#define public_51d218 _public_51d218
#define public_51d233 _public_51d233
#define public_51d270 _public_51d270
#define public_51d29f _public_51d29f
#define public_51d2d1 _public_51d2d1
#define public_51d2d3 _public_51d2d3
#define public_51d2ed _public_51d2ed
#define public_51d2f1 _public_51d2f1
#define public_51d345 _public_51d345
#define public_51d386 _public_51d386
#define public_51d45c _public_51d45c
#define public_51d494 _public_51d494
#define public_51d4ad _public_51d4ad
#define public_51d4c8 _public_51d4c8
#define public_51d4e1 _public_51d4e1
#define public_51d4fc _public_51d4fc
#define public_51d515 _public_51d515
#define public_51d54a _public_51d54a
#define public_51d57a _public_51d57a
#define public_51d5a1 _public_51d5a1
#define public_51d5a3 _public_51d5a3
#define public_51d5e0 _public_51d5e0
#define public_51d5e2 _public_51d5e2
#define public_51d647 _public_51d647
#define public_51d649 _public_51d649
#define public_51d6b7 _public_51d6b7
#define public_51d6cc _public_51d6cc
#define public_51d6ee _public_51d6ee
#define public_51d718 _public_51d718
#define public_51d76f _public_51d76f
#define public_51d7b4 _public_51d7b4

PROC_DECLARE(0x51d070, internal_51d070, public_51d070);
extern "C" NAKED register_t __cdecl internal_51d070()
{
    __asm
    {
        sub esp, 0x8C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [public_5c6648]
        mov dword ptr ss : [esp+0x20], esi
        je public_51d0e6
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51d0e6
        add eax, 0xC
        test eax, eax
        je public_51d0e6
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_51d0e6
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_51d0e6
        push 4
        mov ebx, ecx
        call edi
        test al, al
        je public_51d0ea
        call public_42d730
        test al, al
        jne public_51d10c
        push 0
        call public_41dda0
        add esp, 4
        call public_41a3e0
        test al, al
        jne public_51d10c
        push 0x40400000
        push 0x3F800000
        jmp public_51d104
        public_51d0e6 : nop
        xor ebx, ebx
        jmp public_51d10c
        public_51d0ea : nop
        push 1
        call public_41dda0
        add esp, 4
        call public_41a3e0
        test al, al
        je public_51d10c
        push 0x40400000
        push 0
        public_51d104 : nop
        call public_41a0f0
        add esp, 8
        public_51d10c : nop
        mov al, byte ptr ds : [public_67529c]
        test al, al
        je public_51d140
        push 0xC7
        call public_5784a0
        add esp, 4
        test al, al
        je public_51d139
        push 4
        mov ecx, ebx
        call edi
        test al, al
        jne public_51d139
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        je public_51d140
        public_51d139 : nop
        mov byte ptr ds : [public_67529c], 0
        public_51d140 : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [public_674b70]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        call public_4f1da0
        test ebx, ebx
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [public_5c6544]
        mov ebp, dword ptr ds : [public_5c64f0]
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x38], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x3C], edx
        je public_51d1d8
        push 0x80
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c64f4]
        lea eax, ss:[esp+0x40]
        lea esi, ds:[ebx+0xE4]
        push eax
        mov ecx, esi
        call ebp
        push eax
        call edi
        add esp, 4
        test eax, eax
        je public_51d1d4
        public_51d1b4 : nop
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c6644]
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call ebp
        push eax
        call edi
        add esp, 4
        test eax, eax
        jne public_51d1b4
        public_51d1d4 : nop
        mov esi, dword ptr ss : [esp+0x20]
        public_51d1d8 : nop
        mov al, byte ptr ds : [public_67529c]
        test al, al
        je public_51d2f1
        push 0
        push 0
        push 0x3006
        call public_59df40
        mov eax, dword ptr ds : [public_6752a0]
        xor edx, edx
        add esp, 0xC
        cmp eax, edx
        je public_51d233
        mov dword ptr ds : [public_6752a0], edx
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, edx
        je public_51d216
        add eax, 0xFFFFFFF8
        jmp public_51d218
        public_51d216 : nop
        xor eax, eax
        public_51d218 : nop
        mov edi, dword ptr ds : [public_673344]
        push edi
        lea edi, ss:[esp+0x38]
        push edi
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edx
        call dword ptr ds : [eax+0x34]
        jmp public_51d2f1
        public_51d233 : nop
        cmp ebx, edx
        je public_51d2f1
        push 0x80
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_5c64f4]
        lea edx, ss:[esp+0x40]
        lea ecx, ds:[ebx+0xE4]
        push edx
        mov dword ptr ss : [esp+0x34], ecx
        call ebp
        push eax
        call edi
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_51d2ed
        nop 
        public_51d270 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6548]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        jne public_51d29f
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        je public_51d29f
        mov eax, dword ptr ss : [esp+0x1C]
        mov cx, word ptr ds : [esi+8]
        mov word ptr ss : [esp+eax*2+0x5C], cx
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        public_51d29f : nop
        mov ecx, dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x40]
        push edx
        call ebp
        push eax
        call edi
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_51d270
        mov edx, dword ptr ss : [esp+0x1C]
        test edx, edx
        je public_51d2ed
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+0xC0]
        test eax, eax
        je public_51d2d1
        add eax, 0xFFFFFFF8
        jmp public_51d2d3
        public_51d2d1 : nop
        xor eax, eax
        public_51d2d3 : nop
        mov esi, dword ptr ds : [public_673344]
        push esi
        lea esi, ss:[esp+0x38]
        push esi
        push edx
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x68]
        push edx
        call dword ptr ds : [eax+0x34]
        public_51d2ed : nop
        mov esi, dword ptr ss : [esp+0x20]
        public_51d2f1 : nop
        call public_51cc00
        mov edi, dword ptr ss : [esp+0xA0]
        push edi
        call public_4f5330
        mov al, byte ptr ds : [public_675268]
        add esp, 4
        test al, 1
        jne public_51d345
        mov dl, al
        or dl, 1
/*FIXUP push offset _public_51d7e0 @0x51d314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_51d7e0
        mov byte ptr ds : [public_675268], dl
        mov dword ptr ds : [public_67525c], 0
        mov dword ptr ds : [public_675260], 0
        mov dword ptr ds : [public_675264], 0
        call public_5b7e6c
        add esp, 4
        public_51d345 : nop
        mov cl, byte ptr ds : [public_675268]
        mov al, 2
        test al, cl
        jne public_51d386
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_51d7d0 @0x51d355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_51d7d0
        mov byte ptr ds : [public_675268], dl
        mov dword ptr ds : [public_675250], 0
        mov dword ptr ds : [public_675254], 0
        mov dword ptr ds : [public_675258], 0
        call public_5b7e6c
        add esp, 4
        public_51d386 : nop
        fld dword ptr ds : [public_675274]
        sub esp, 0xC
        fadd dword ptr ds : [public_675280]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [public_675270]
        fadd dword ptr ds : [public_67527c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_67526c]
        fadd dword ptr ds : [public_675278]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fsub dword ptr ds : [public_675264]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_675260]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [public_67525c]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x2C]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fst dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_51d45c
        mov dword ptr ds : [public_6752a4], 0
        public_51d45c : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5d5060]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [public_675260], eax
        mov dword ptr ds : [public_67525c], edx
        fnstsw ax
        mov dword ptr ds : [public_675264], ecx
        test ah, 5
        jp public_51d494
        mov dword ptr ss : [esp+0x10], 0xBF800000
        jmp public_51d4ad
        public_51d494 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_51d4ad
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_51d4ad : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5d5060]
        fnstsw ax
        test ah, 5
        jp public_51d4c8
        mov dword ptr ss : [esp+0x14], 0xBF800000
        jmp public_51d4e1
        public_51d4c8 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_51d4e1
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_51d4e1 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_5d5060]
        fnstsw ax
        test ah, 5
        jp public_51d4fc
        mov dword ptr ss : [esp+0x18], 0xBF800000
        jmp public_51d515
        public_51d4fc : nop
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_51d515
        mov dword ptr ss : [esp+0x18], 0x3F800000
        public_51d515 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fcomp qword ptr ds : [public_5d5138]
        fnstsw ax
        test ah, 5
        jp public_51d54a
        mov dword ptr ds : [public_6752a4], 0
        jmp public_51d57a
        public_51d54a : nop
        fld dword ptr ds : [public_613740]
        fmul dword ptr ss : [esp+0xA0]
        fadd dword ptr ds : [public_6752a4]
        fst dword ptr ds : [public_6752a4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_51d57a
        mov dword ptr ds : [public_6752a4], 0x3F800000
        public_51d57a : nop
        push 0x10
        call dword ptr ds : [public_5c7280]
        test ah, ah
        jns public_51d6ee
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_51d5a1
        lea ecx, ds:[eax-8]
        jmp public_51d5a3
        public_51d5a1 : nop
        xor ecx, ecx
        public_51d5a3 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        je public_51d718
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        je public_51d5e0
        lea ecx, ds:[eax-8]
        jmp public_51d5e2
        public_51d5e0 : nop
        xor ecx, ecx
        public_51d5e2 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        fst dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x2C]
        je public_51d647
        lea ecx, ds:[eax-8]
        jmp public_51d649
        public_51d647 : nop
        xor ecx, ecx
        public_51d649 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x48]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x50]
        fchs 
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x48]
        fchs 
        fst dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ds : [public_613744]
        call public_5b8070
        fsubr qword ptr ds : [public_5c89b8]
        fmul qword ptr ds : [public_5d3c48]
        fcom qword ptr ds : [public_5c7720]
        fnstsw ax
        test ah, 5
        jp public_51d6b7
        fstp st(0)
        fld dword ptr ds : [public_5d3ee0]
        public_51d6b7 : nop
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_51d6cc
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_51d6cc : nop
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        jmp public_51d718
        public_51d6ee : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6752a4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6752a4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_6752a4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        public_51d718 : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [public_675250]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5dc124]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_51d76f
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_675254]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5dc124]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_51d76f
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_675258]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5dc124]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_51d7b4
        public_51d76f : nop
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp]
        call public_4c78d0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ds : [public_675250], ecx
        mov dword ptr ds : [public_675254], edx
        mov dword ptr ds : [public_675258], eax
        public_51d7b4 : nop
        push edi
        mov ecx, esi
        call public_51b650
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8C
        ret 4
        UNREACHABLE_TRAP(0x51d070)
    }
}

#undef public_51d0e6
#undef public_51d0ea
#undef public_51d104
#undef public_51d10c
#undef public_51d139
#undef public_51d140
#undef public_51d1b4
#undef public_51d1d4
#undef public_51d1d8
#undef public_51d216
#undef public_51d218
#undef public_51d233
#undef public_51d270
#undef public_51d29f
#undef public_51d2d1
#undef public_51d2d3
#undef public_51d2ed
#undef public_51d2f1
#undef public_51d345
#undef public_51d386
#undef public_51d45c
#undef public_51d494
#undef public_51d4ad
#undef public_51d4c8
#undef public_51d4e1
#undef public_51d4fc
#undef public_51d515
#undef public_51d54a
#undef public_51d57a
#undef public_51d5a1
#undef public_51d5a3
#undef public_51d5e0
#undef public_51d5e2
#undef public_51d647
#undef public_51d649
#undef public_51d6b7
#undef public_51d6cc
#undef public_51d6ee
#undef public_51d718
#undef public_51d76f
#undef public_51d7b4
