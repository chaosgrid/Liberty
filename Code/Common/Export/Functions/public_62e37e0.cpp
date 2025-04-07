#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_62e0480);
CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e2c00);
CLANG_FORWARD_PROC_SYMBOL(public_62e3460);
CLANG_FORWARD_PROC_SYMBOL(public_62e37e0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62e3814 _public_62e3814
#define public_62e38b5 _public_62e38b5
#define public_62e38e3 _public_62e38e3
#define public_62e3900 _public_62e3900
#define public_62e39c2 _public_62e39c2
#define public_62e3a6b _public_62e3a6b
#define public_62e3af0 _public_62e3af0
#define public_62e3afb _public_62e3afb
#define public_62e3b3c _public_62e3b3c
#define public_62e3b51 _public_62e3b51
#define public_62e3b8e _public_62e3b8e
#define public_62e3ba7 _public_62e3ba7
#define public_62e3c02 _public_62e3c02
#define public_62e3c37 _public_62e3c37
#define public_62e3d4a _public_62e3d4a
#define public_62e3d59 _public_62e3d59
#define public_62e3dba _public_62e3dba
#define public_62e3dc9 _public_62e3dc9
#define public_62e3e0e _public_62e3e0e
#define public_62e3e27 _public_62e3e27
#define public_62e3ef1 _public_62e3ef1
#define public_62e3f00 _public_62e3f00
#define public_62e3f71 _public_62e3f71
#define public_62e4001 _public_62e4001
#define public_62e401a _public_62e401a
#define public_62e4144 _public_62e4144
#define public_62e4175 _public_62e4175
#define public_62e418b _public_62e418b
#define public_62e41a4 _public_62e41a4
#define public_62e41ac _public_62e41ac
#define public_62e420f _public_62e420f
#define public_62e4221 _public_62e4221
#define public_62e422b _public_62e422b
#define public_62e4233 _public_62e4233
#define public_62e4296 _public_62e4296
#define public_62e4337 _public_62e4337

PROC_DECLARE(0x62e37e0, internal_62e37e0, public_62e37e0);
extern "C" NAKED register_t __cdecl internal_62e37e0()
{
    __asm
    {
        sub esp, 0xA8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xB4]
        mov al, byte ptr ss : [ebp+0x7D]
        xor bl, bl
        test al, al
        push esi
        push edi
        mov byte ptr ss : [esp+0x33], bl
        jne public_62e3814
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ss : [ebp+0x7D], 1
        public_62e3814 : nop
        test dword ptr ss : [ebp+8], 0x30000
        je public_62e4337
        mov edi, dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [edi+8]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        call public_628b030
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x40]
        call public_628b030
        mov al, byte ptr ss : [esp+0xCC]
        test al, al
        je public_62e38e3
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fcomp dword ptr ds : [public_63a0784]
        fnstsw ax
        test ah, 5
        jp public_62e4337
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e38b5
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e38b5 : nop
        mov ebx, dword ptr ss : [esp+0xC8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x58], edx
        jmp public_62e3900
        public_62e38e3 : nop
        mov ebx, dword ptr ss : [esp+0xC8]
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], eax
        public_62e3900 : nop
        mov esi, edi
        mov ecx, 9
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        mov esi, dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x84]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+4]
        faddp 
        fabs 
        fstp dword ptr ss : [esp+0x44]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_63a0780]
        fnstsw ax
        test ah, 0x41
        je public_62e4296
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+4]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e39c2
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62e4296
        public_62e39c2 : nop
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x33], 1
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x40], 0
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_62c5a70
        mov edx, dword ptr ds : [public_63a0768]
        push esi
        push edx
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_62e3460
        add esp, 0x10
        test al, al
        je public_62e3ba7
        mov edx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x94]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_628b030
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e3a6b
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e3a6b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x14]
        fchs 
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x28], ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x3C], edx
        call public_6347e60
        fst dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_639e6b8]
        lea ecx, ss:[esp+0x34]
        fnstsw ax
        test ah, 0x41
        jne public_62e3af0
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        call public_62dc410
        jmp public_62e3afb
        public_62e3af0 : nop
        push 0
        push 0
        push 0
        call public_636cf40
        public_62e3afb : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_62c47a0
        fcom dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e3b3c
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e3b51
        public_62e3b3c : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e3b51
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e3b51 : nop
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        faddp 
        fsqrt 
        fxch 
        fchs 
        fmulp 
        fst dword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_63a03f0]
        fnstsw ax
        test ah, 5
        jp public_62e3b8e
        mov dword ptr ss : [esp+0x40], 0xBF800000
        public_62e3b8e : nop
        fld dword ptr ss : [esp+0x40]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_62e3ba7
        mov dword ptr ss : [esp+0x40], 0x3F800000
        public_62e3ba7 : nop
        fld dword ptr ss : [esp+0x40]
        mov byte ptr ss : [esp+0x23], 0
        fabs 
        mov dword ptr ss : [esp+0x10], 0
        fst qword ptr ss : [esp+0x44]
        fcomp qword ptr ds : [public_639e6c0]
        fnstsw ax
        test ah, 0x41
        jne public_62e3c37
        mov ecx, dword ptr ss : [ebp+0x84]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x4C]
        fld dword ptr ss : [esp+0x10]
        fabs 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a0620]
        fnstsw ax
        test ah, 5
        jp public_62e3c02
        mov dword ptr ss : [esp+0x10], 0x3ECCCCCD
        public_62e3c02 : nop
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x100]
        fmul dword ptr ss : [esp+0x10]
        fmul qword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e3c37
        fld dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        public_62e3c37 : nop
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x84]
        fabs 
        mov edx, dword ptr ds : [ecx]
        fcos 
        fstp dword ptr ss : [esp+0x60]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi]
        faddp 
        fabs 
        fcomp qword ptr ds : [public_63a04e0]
        fnstsw ax
        test ah, 5
        jp public_62e4233
        fld qword ptr ss : [esp+0x44]
        fcomp qword ptr ds : [public_639e6c0]
        fnstsw ax
        test ah, 0x41
        jne public_62e4233
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x30]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        call public_6347e60
        fst dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e3d4a
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_62dc410
        jmp public_62e3d59
        public_62e3d4a : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x40]
        call public_636cf40
        public_62e3d59 : nop
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x70]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6347e60
        fst dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e3dba
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_62dc410
        jmp public_62e3dc9
        public_62e3dba : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        call public_636cf40
        public_62e3dc9 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x28], eax
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x34], ecx
        call public_62c47a0
        fst dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e3e0e
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        jmp public_62e3e27
        public_62e3e0e : nop
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e3e27
        mov dword ptr ss : [esp+0x5C], 0xBF800000
        public_62e3e27 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [ebp+0x84]
        mov dword ptr ss : [esp+0x7C], edx
        mov dword ptr ss : [esp+0x88], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x30]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6347e60
        fst dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e3ef1
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_62dc410
        jmp public_62e3f00
        public_62e3ef1 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        call public_636cf40
        public_62e3f00 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x8C], ecx
        mov ecx, dword ptr ss : [ebp+0x84]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x80], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        fcos 
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x84], edx
        lea eax, ss:[esp+0x74]
        mov ecx, 3
        fld dword ptr ss : [esp+0x10]
        fsin 
        public_62e3f71 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62e3f71
        mov ecx, dword ptr ss : [ebp+0x84]
        fstp st(0)
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x70]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x70]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_62c47a0
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e4001
        mov dword ptr ss : [esp+0x10], 0x3F800000
        jmp public_62e401a
        public_62e4001 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e401a
        mov dword ptr ss : [esp+0x10], 0xBF800000
        public_62e401a : nop
        fld dword ptr ss : [esp+0x10]
        call public_6391fc2
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi]
        faddp 
        fabs 
        fcomp qword ptr ds : [public_63a04e0]
        fnstsw ax
        test ah, 5
        jp public_62e4175
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+4]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x40]
        fmul dword ptr ds : [esi]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e4144
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e4144
        mov byte ptr ss : [esp+0x23], 1
        jmp public_62e41a4
        public_62e4144 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e4175
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e4175
        mov byte ptr ss : [esp+0x23], 1
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        jmp public_62e41ac
        public_62e4175 : nop
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ss : [esp+0x60]
        fnstsw ax
        test ah, 0x41
        jne public_62e418b
        mov byte ptr ss : [esp+0x23], 1
        jmp public_62e41ac
        public_62e418b : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_62e41ac
        public_62e41a4 : nop
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        public_62e41ac : nop
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        push 0x3F800000
        call dword ptr ds : [edx+0xF4]
        fstp dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [public_63a0760]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        push 0
        call dword ptr ds : [eax+0xE8]
        fadd qword ptr ds : [public_63a0778]
        fld dword ptr ss : [esp+0x44]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62e4221
        fdivr dword ptr ss : [esp+0x44]
        fld st(0)
        fmulp 
        fcom dword ptr ds : [public_63a0770]
        fnstsw ax
        test ah, 5
        jp public_62e420f
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62e420f : nop
        mov al, byte ptr ss : [esp+0x23]
        fmul dword ptr ss : [esp+0x4C]
        test al, al
        je public_62e422b
        fstp dword ptr ss : [esp+0x58]
        jmp public_62e4296
        public_62e4221 : nop
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e420f
        public_62e422b : nop
        fchs 
        fstp dword ptr ss : [esp+0x58]
        jmp public_62e4296
        public_62e4233 : nop
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        push esi
        lea eax, ss:[esp+0x68]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, eax
        call public_62e0480
        push eax
        call public_62c47a0
        fchs 
        mov ecx, dword ptr ss : [ebp+0x84]
        fstp dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ecx]
        add esp, 8
        call dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, eax
        call public_62d3af0
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, eax
        call public_62c5a70
        mov eax, dword ptr ds : [public_63a0768]
        push esi
        push eax
        lea ecx, ss:[esp+0x78]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        call public_62e3460
        add esp, 0x10
        public_62e4296 : nop
        mov edi, dword ptr ss : [esp+0xC4]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_62d3af0
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, eax
        call public_62c5a70
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x74]
        call public_62e04a0
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x9C]
        push esi
        push edx
        call public_62e1f40
        mov esi, eax
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x54]
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        push ecx
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        call public_62e2c00
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [ebx+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop esi
        mov dword ptr ds : [ebx+8], eax
        mov al, byte ptr ss : [esp+0x2B]
        pop ebp
        pop ebx
        add esp, 0xA8
        ret 
        public_62e4337 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0xA8
        ret 
        UNREACHABLE_TRAP(0x62e37e0)
    }
}

#undef public_62e3814
#undef public_62e38b5
#undef public_62e38e3
#undef public_62e3900
#undef public_62e39c2
#undef public_62e3a6b
#undef public_62e3af0
#undef public_62e3afb
#undef public_62e3b3c
#undef public_62e3b51
#undef public_62e3b8e
#undef public_62e3ba7
#undef public_62e3c02
#undef public_62e3c37
#undef public_62e3d4a
#undef public_62e3d59
#undef public_62e3dba
#undef public_62e3dc9
#undef public_62e3e0e
#undef public_62e3e27
#undef public_62e3ef1
#undef public_62e3f00
#undef public_62e3f71
#undef public_62e4001
#undef public_62e401a
#undef public_62e4144
#undef public_62e4175
#undef public_62e418b
#undef public_62e41a4
#undef public_62e41ac
#undef public_62e420f
#undef public_62e4221
#undef public_62e422b
#undef public_62e4233
#undef public_62e4296
#undef public_62e4337
