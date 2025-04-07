#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c3d10);
CLANG_FORWARD_PROC_SYMBOL(public_62c4530);
CLANG_FORWARD_PROC_SYMBOL(public_62c47f0);
CLANG_FORWARD_PROC_SYMBOL(public_62c4900);
CLANG_FORWARD_PROC_SYMBOL(public_62c56d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62da3f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e53e0);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);

#define public_62c4964 _public_62c4964
#define public_62c497a _public_62c497a
#define public_62c497c _public_62c497c
#define public_62c499f _public_62c499f
#define public_62c49b9 _public_62c49b9
#define public_62c49eb _public_62c49eb
#define public_62c4a13 _public_62c4a13
#define public_62c4a2c _public_62c4a2c
#define public_62c4a65 _public_62c4a65
#define public_62c4a9b _public_62c4a9b
#define public_62c4b37 _public_62c4b37
#define public_62c4c02 _public_62c4c02
#define public_62c4c04 _public_62c4c04
#define public_62c4c35 _public_62c4c35
#define public_62c4c47 _public_62c4c47
#define public_62c4c5d _public_62c4c5d
#define public_62c4c9f _public_62c4c9f
#define public_62c4cca _public_62c4cca
#define public_62c4ccc _public_62c4ccc
#define public_62c4cfe _public_62c4cfe
#define public_62c4d14 _public_62c4d14
#define public_62c4d6a _public_62c4d6a
#define public_62c4d94 _public_62c4d94
#define public_62c4daa _public_62c4daa
#define public_62c4dca _public_62c4dca
#define public_62c4de2 _public_62c4de2
#define public_62c4e0e _public_62c4e0e
#define public_62c4e3b _public_62c4e3b
#define public_62c4e4c _public_62c4e4c
#define public_62c4ef2 _public_62c4ef2
#define public_62c4f29 _public_62c4f29
#define public_62c4f2b _public_62c4f2b
#define public_62c4f81 _public_62c4f81
#define public_62c4f99 _public_62c4f99
#define public_62c4fce _public_62c4fce
#define public_62c500e _public_62c500e
#define public_62c5045 _public_62c5045
#define public_62c5049 _public_62c5049
#define public_62c5073 _public_62c5073
#define public_62c507b _public_62c507b

PROC_DECLARE(0x62c4900, internal_62c4900, public_62c4900);
extern "C" NAKED register_t __cdecl internal_62c4900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov ebx, 1
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x14], ebx
        call public_62c47f0
        mov eax, dword ptr ds : [esi+0x320]
        cmp eax, ebx
        jne public_62c4964
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x2F0]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x2F0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        cmp eax, 2
        jne public_62c507b
        test byte ptr ds : [esi+0x32C], 0xC0
        mov ecx, esi
        je public_62c4c47
        push 2
        call public_62c3d10
        mov eax, ebx
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4964 : nop
        xor ebp, ebp
        cmp eax, 0xC
        je public_62c499f
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        je public_62c497a
        lea ecx, ds:[eax-8]
        jmp public_62c497c
        public_62c497a : nop
        xor ecx, ecx
        public_62c497c : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        call dword ptr ds : [eax+0x40]
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62c49b9
        public_62c499f : nop
        mov eax, dword ptr ds : [esi+0x450]
        cmp eax, ebp
        je public_62c49eb
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62c49eb
        test byte ptr ds : [esi+0x464], 2
        jne public_62c49eb
        public_62c49b9 : nop
        lea edi, ds:[esi+0x30]
        push ebp
        mov ecx, edi
        call public_62d88b0
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xA8]
        lea ecx, ds:[esi+0xA8]
        call dword ptr ds : [edx+0x10]
        mov eax, ebx
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], ebx
        pop ebx
        add esp, 0x44
        ret 
        public_62c49eb : nop
        mov ecx, esi
        call public_62c4530
        test al, al
        jne public_62c4a13
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4a13 : nop
        mov eax, dword ptr ds : [esi+0x320]
        add eax, 0xFFFFFFFE
        cmp eax, 0xB
        ja public_62c507b
/*FIXUP jmp dword ptr ds : [eax*4+public_62c508c] @0x62c4a25*/
  JMPTB cmp eax, 0
  JMPTB je public_62c4a2c
  JMPTB cmp eax, 1
  JMPTB je public_62c4c5d
  JMPTB cmp eax, 2
  JMPTB je public_62c507b
  JMPTB cmp eax, 3
  JMPTB je public_62c507b
  JMPTB cmp eax, 4
  JMPTB je public_62c4d14
  JMPTB cmp eax, 5
  JMPTB je public_62c4e0e
  JMPTB cmp eax, 6
  JMPTB je public_62c4daa
  JMPTB cmp eax, 7
  JMPTB je public_62c4e4c
  JMPTB cmp eax, 8
  JMPTB je public_62c4e3b
  JMPTB cmp eax, 9
  JMPTB je public_62c500e
  JMPTB cmp eax, 0xA
  JMPTB je public_62c5073
  JMPTB cmp eax, 0xB
  JMPTB je public_62c5073
  JMPTB int 3
        public_62c4a2c : nop
        cmp dword ptr ds : [esi+0x388], ebp
        jne public_62c4a65
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62c4a65
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        jns public_62c4a65
        push 0xC
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4a65 : nop
        test byte ptr ds : [esi+0x32C], 0xC0
        je public_62c4c04
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62c4a9b
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c4a9b : nop
        fld dword ptr ds : [edi+0x14]
        lea ebp, ds:[esi+0x3CC]
        fsub dword ptr ss : [ebp+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [esi+0x394]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi+0x390]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [esi+0x38C]
        faddp 
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62c4c02
        fcomp dword ptr ds : [public_639f488]
        fnstsw ax
        test ah, 0x41
        jne public_62c4c35
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62c4b37
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c4b37 : nop
        fld dword ptr ds : [esi+0x38C]
        mov ecx, dword ptr ds : [esi+0x338]
        fchs 
        push ebp
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x390]
        add edi, 0xC
        fchs 
        lea edx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x394]
        push edi
        fchs 
        push edx
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x28], ecx
        call public_6288800
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x30]
        add esp, 0xC
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_63ebdb4]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        jne public_62c4c04
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6288830
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0x18
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_62c4c35
        jmp public_62c4c04
        public_62c4c02 : nop
        fstp st(0)
        public_62c4c04 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0xA8]
        lea ecx, ds:[esi+0xA8]
        push edx
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x30]
        lea ecx, ds:[esi+0x30]
        push edx
        call dword ptr ds : [eax+4]
        dec eax
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x13], al
        je public_62c507b
        public_62c4c35 : nop
        test dword ptr ds : [esi+0x32C], 0x8C0
        mov ecx, esi
        je public_62c4cfe
        public_62c4c47 : nop
        push 3
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4c5d : nop
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        mov dword ptr ss : [esp+0x1C], 0
        jns public_62c4c9f
        lea eax, ds:[esi+0x3CC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x3FC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x388]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, 2
        public_62c4c9f : nop
        mov al, byte ptr ds : [esi+0x334]
        test al, al
        mov ecx, esi
        jne public_62c4cfe
        push 4
        call public_62c3d10
        mov byte ptr ds : [esi+0x39A], bl
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        lea edi, ds:[esi+0x2C]
        je public_62c4cca
        lea ecx, ds:[eax-8]
        jmp public_62c4ccc
        public_62c4cca : nop
        xor ecx, ecx
        public_62c4ccc : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+4]
        push edi
        lea ecx, ds:[eax+4]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        push ebp
        call dword ptr ds : [edx+0x5C]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4cfe : nop
        push 6
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4d14 : nop
        mov eax, dword ptr ds : [esi+0x32C]
        test ah, 8
        jne public_62c4dca
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x30]
        lea ecx, ds:[esi+0x30]
        push eax
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [esi+0xA8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0xA8]
        push eax
        call dword ptr ds : [edx+4]
        test byte ptr ds : [esi+0x32C], 0xC0
        je public_62c4d6a
        cmp eax, ebx
        jne public_62c4d6a
        push 8
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4d6a : nop
        cmp edi, ebx
        jne public_62c507b
        mov al, byte ptr ds : [esi+0x344]
        test al, al
        mov ecx, esi
        je public_62c4d94
        push 9
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4d94 : nop
        push 7
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4daa : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x168]
        lea edi, ds:[esi+0x168]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov ecx, edi
        jne public_62c4de2
        mov edx, dword ptr ds : [edi]
        call dword ptr ds : [edx+0x10]
        public_62c4dca : nop
        push 9
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4de2 : nop
        call public_62da3f0
        fcomp dword ptr ds : [public_639f534]
        fnstsw ax
        test ah, 5
        jnp public_62c507b
        mov ecx, esi
        call public_62c56d0
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4e0e : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0xA8]
        lea ecx, ds:[esi+0xA8]
        push edx
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x30]
        lea ecx, ds:[esi+0x30]
        push edx
        call dword ptr ds : [eax+4]
        cmp eax, ebx
        jne public_62c4e3b
        push 9
        mov ecx, esi
        call public_62c3d10
        public_62c4e3b : nop
        mov eax, ebp
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        mov dword ptr ss : [esp+0xC], ebp
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4e4c : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0xA8]
        mov dword ptr ss : [esp+0x14], ebp
        lea ebp, ds:[esi+0xA8]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x30]
        lea edi, ds:[esi+0x30]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [esi+0x32C]
        test cl, cl
        jns public_62c4f99
        cmp eax, ebx
        je public_62c4ef2
        fld dword ptr ds : [esi+0x38C]
        mov ecx, dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [public_639f530]
        push 0
        fld dword ptr ds : [esi+0x390]
        push ecx
        fmul dword ptr ds : [public_639f530]
        lea edx, ss:[esp+0x50]
        fld dword ptr ds : [esi+0x394]
        push edx
        fmul dword ptr ds : [public_639f530]
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fadd dword ptr ds : [esi+0x3FC]
        fstp dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [esi+0x400]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [esi+0x404]
        fstp dword ptr ss : [esp+0x5C]
        call public_62e53e0
        add esp, 0xC
        test al, al
        je public_62c507b
        mov ebx, 1
        public_62c4ef2 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        xor edx, edx
        mov dx, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c4f29
        lea edx, ds:[eax-8]
        jmp public_62c4f2b
        public_62c4f29 : nop
        xor edx, edx
        public_62c4f2b : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [esi+0x388]
        push 0
        push 0
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax+0x64]
        test eax, eax
        jne public_62c4f81
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        call public_62d4520
        push 2
        mov ecx, edi
        call public_62d88b0
        push 0xA
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov byte ptr ds : [esi+0x398], bl
        mov byte ptr ds : [esi+0x39A], bl
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4f81 : nop
        push 0xD
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4f99 : nop
        cmp eax, ebx
        jne public_62c507b
        mov eax, dword ptr ds : [esi+0x440]
        cmp eax, 3
        je public_62c4fce
        cmp eax, 4
        je public_62c4fce
        cmp eax, 5
        je public_62c4fce
        push 0xB
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c4fce : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        xor eax, eax
        mov ax, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        push eax
        push 0
        call dword ptr ds : [edx+0x48]
        push 0xC
        mov ecx, esi
        call public_62c3d10
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c500e : nop
        fld dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x1C], 0x40400000
        fadd dword ptr ds : [esi+0x340]
        fstp dword ptr ds : [esi+0x340]
        call public_6303220
        test al, al
        jne public_62c5045
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62c5045
        fld dword ptr ds : [public_639e884]
        jmp public_62c5049
        public_62c5045 : nop
        fld dword ptr ss : [esp+0x1C]
        public_62c5049 : nop
        fcomp dword ptr ds : [esi+0x340]
        fnstsw ax
        test ah, 5
        jp public_62c507b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_62c5073 : nop
        mov dword ptr ss : [esp+0x14], 2
        public_62c507b : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x62c4900)
        ASM_EXPORT_ENTRY_FIRST(0x62c4a2c, public_62c4a2c)
        ASM_EXPORT_ENTRY(0x62c4c5d, public_62c4c5d)
        ASM_EXPORT_ENTRY(0x62c4d14, public_62c4d14)
        ASM_EXPORT_ENTRY(0x62c4daa, public_62c4daa)
        ASM_EXPORT_ENTRY(0x62c4e0e, public_62c4e0e)
        ASM_EXPORT_ENTRY(0x62c4e3b, public_62c4e3b)
        ASM_EXPORT_ENTRY(0x62c4e4c, public_62c4e4c)
        ASM_EXPORT_ENTRY(0x62c500e, public_62c500e)
        ASM_EXPORT_ENTRY(0x62c5073, public_62c5073)
        ASM_EXPORT_ENTRY_LAST(0x62c507b, public_62c507b)
    }
}

#undef public_62c4964
#undef public_62c497a
#undef public_62c497c
#undef public_62c499f
#undef public_62c49b9
#undef public_62c49eb
#undef public_62c4a13
#undef public_62c4a2c
#undef public_62c4a65
#undef public_62c4a9b
#undef public_62c4b37
#undef public_62c4c02
#undef public_62c4c04
#undef public_62c4c35
#undef public_62c4c47
#undef public_62c4c5d
#undef public_62c4c9f
#undef public_62c4cca
#undef public_62c4ccc
#undef public_62c4cfe
#undef public_62c4d14
#undef public_62c4d6a
#undef public_62c4d94
#undef public_62c4daa
#undef public_62c4dca
#undef public_62c4de2
#undef public_62c4e0e
#undef public_62c4e3b
#undef public_62c4e4c
#undef public_62c4ef2
#undef public_62c4f29
#undef public_62c4f2b
#undef public_62c4f81
#undef public_62c4f99
#undef public_62c4fce
#undef public_62c500e
#undef public_62c5045
#undef public_62c5049
#undef public_62c5073
#undef public_62c507b

#pragma init_seg(compiler)
extern "C" void const* const public_62c4a2c = __AsmFindLabelExport(&internal_62c4900, 0x62c4a2c);
extern "C" void const* const public_62c4c5d = __AsmFindLabelExport(&internal_62c4900, 0x62c4c5d);
extern "C" void const* const public_62c4d14 = __AsmFindLabelExport(&internal_62c4900, 0x62c4d14);
extern "C" void const* const public_62c4daa = __AsmFindLabelExport(&internal_62c4900, 0x62c4daa);
extern "C" void const* const public_62c4e0e = __AsmFindLabelExport(&internal_62c4900, 0x62c4e0e);
extern "C" void const* const public_62c4e3b = __AsmFindLabelExport(&internal_62c4900, 0x62c4e3b);
extern "C" void const* const public_62c4e4c = __AsmFindLabelExport(&internal_62c4900, 0x62c4e4c);
extern "C" void const* const public_62c500e = __AsmFindLabelExport(&internal_62c4900, 0x62c500e);
extern "C" void const* const public_62c5073 = __AsmFindLabelExport(&internal_62c4900, 0x62c5073);
extern "C" void const* const public_62c507b = __AsmFindLabelExport(&internal_62c4900, 0x62c507b);
