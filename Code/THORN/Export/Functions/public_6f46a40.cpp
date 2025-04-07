#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f444c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f46ac6 _public_6f46ac6
#define public_6f46ade _public_6f46ade
#define public_6f46ae8 _public_6f46ae8
#define public_6f46af0 _public_6f46af0
#define public_6f46b59 _public_6f46b59
#define public_6f46bcc _public_6f46bcc
#define public_6f46c18 _public_6f46c18
#define public_6f46ce8 _public_6f46ce8
#define public_6f46d23 _public_6f46d23
#define public_6f46d46 _public_6f46d46
#define public_6f46d54 _public_6f46d54
#define public_6f46dce _public_6f46dce
#define public_6f46deb _public_6f46deb
#define public_6f46e3c _public_6f46e3c
#define public_6f46e63 _public_6f46e63
#define public_6f46eed _public_6f46eed
#define public_6f46eef _public_6f46eef
#define public_6f46f10 _public_6f46f10
#define public_6f46f3c _public_6f46f3c
#define public_6f46f3e _public_6f46f3e
#define public_6f46f60 _public_6f46f60
#define public_6f46f8b _public_6f46f8b
#define public_6f46f8d _public_6f46f8d
#define public_6f46fb0 _public_6f46fb0
#define public_6f46fd9 _public_6f46fd9
#define public_6f46fdf _public_6f46fdf
#define public_6f46ff2 _public_6f46ff2
#define public_6f4701a _public_6f4701a
#define public_6f4703e _public_6f4703e
#define public_6f47051 _public_6f47051
#define public_6f47079 _public_6f47079
#define public_6f47098 _public_6f47098
#define public_6f470ba _public_6f470ba
#define public_6f470d9 _public_6f470d9

PROC_DECLARE(0x6f46a40, internal_6f46a40, public_6f46a40);
extern "C" NAKED register_t __cdecl internal_6f46a40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x120
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x54]
        test eax, eax
        push esi
        push edi
        je public_6f470ba
        mov ecx, dword ptr ss : [esp+0x134]
        mov eax, dword ptr ds : [ebx]
        push 0x3F800000
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x18]
        fst dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [ebx+0x100]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 0x44
        jnp public_6f46ae8
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 5
        jp public_6f46ade
        fld dword ptr ds : [public_6f5a1b8]
        fsub dword ptr ds : [ebx+0x100]
        fcom dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 0x44
        jp public_6f46ac6
        mov edx, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ds : [ebx+0x100], edx
        jmp public_6f46af0
        public_6f46ac6 : nop
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        fdiv st, st(1)
        mov dword ptr ds : [ebx+0x100], edx
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        jmp public_6f46af0
        public_6f46ade : nop
        mov dword ptr ss : [esp+0x18], 0x3F800000
        jmp public_6f46af0
        public_6f46ae8 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6f46af0 : nop
        mov ebp, dword ptr ss : [esp+0x138]
        lea eax, ds:[ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ss : [ebp+4]
        je public_6f470ba
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xDC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        lea edi, ds:[ebx+0xE8]
        jne public_6f46b59
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46b59 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[ebx+0x18]
        je public_6f46d54
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [ebp+4]
        je public_6f46d54
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x7C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        lea edi, ds:[ebx+0x88]
        jne public_6f46bcc
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46bcc : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [ebx+0xA0]
        test eax, eax
        je public_6f46d54
        mov eax, dword ptr ds : [ebx+0xA4]
        test eax, eax
        je public_6f46d54
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ebx+0xA0]
        test edi, edi
        je public_6f46d54
        cmp eax, 2
        je public_6f46c18
        cmp eax, 1
        jne public_6f46d54
        public_6f46c18 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [eax+0xCC]
        test esi, esi
        je public_6f46d54
        lea ecx, ss:[esp+0x7C]
        call public_6f37570
        mov ecx, dword ptr ds : [ebx+0xA4]
        lea eax, ss:[esp+0x7C]
        push eax
        push edi
        push ecx
        mov dword ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0xB0], 0
        mov dword ptr ss : [esp+0xAC], 0
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x24]
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f46d23
        lea edx, ds:[esi+0x24]
        push edx
        lea eax, ss:[esp+0x34]
        push esi
        push eax
        call public_6f3b9a0
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6f23090
        lea edx, ss:[esp+0xDC]
        push edx
        mov ecx, esi
        call public_6f3b670
        mov edx, dword ptr ss : [esp+0x28]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, 9
        lea edi, ss:[esp+0xAC]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xD0], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0xD4], ecx
        mov dword ptr ss : [esp+0xD8], edx
        jne public_6f46ce8
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46ce8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x104]
        call public_6f444c0
        mov ecx, 0xC
        lea esi, ss:[esp+0x100]
        lea edi, ss:[esp+0x7C]
        rep movsd
        public_6f46d23 : nop
        lea ebp, ds:[ebx+0x58]
        mov ecx, 0xC
        lea esi, ss:[esp+0x7C]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f46d46
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46d46 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        lea ecx, ds:[ebx+0x88]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        public_6f46d54 : nop
        test byte ptr ds : [ebx+0x54], 1
        je public_6f46dce
        fld dword ptr ds : [ebx+0x7C]
        fsub dword ptr ds : [ebx+0xDC]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ebx+0xDC]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x80]
        mov dword ptr ss : [esp+0x40], eax
        fsub dword ptr ds : [ebx+0xE0]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ebx+0xE0]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ebx+0x84]
        mov dword ptr ss : [esp+0x44], ecx
        fsub dword ptr ds : [ebx+0xE4]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ebx+0xE4]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x48], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x40]
        push eax
        call dword ptr ds : [edx+0xC]
        public_6f46dce : nop
        test byte ptr ds : [ebx+0x54], 2
        je public_6f46e63
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f46deb
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46deb : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ds:[ebx+0x88]
        push ecx
        lea ecx, ds:[ebx+0xE8]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jne public_6f46e3c
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46e3c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xAC]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f46e63 : nop
        test byte ptr ds : [ebx+0x54], 4
        je public_6f470ba
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x9C]
        cmp eax, 5
        fmul dword ptr ds : [ebx+0x98]
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        fsub dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        fst dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x60], 0
        fadd dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        fstp dword ptr ds : [ebx+0x104]
        mov dl, 1
        ja public_6f46fdf
/*FIXUP jmp dword ptr ds : [eax*4+public_6f470ec] @0x6f46ee6*/
  JMPTB cmp eax, 0
  JMPTB je public_6f46eed
  JMPTB cmp eax, 1
  JMPTB je public_6f46f3c
  JMPTB cmp eax, 2
  JMPTB je public_6f46f8b
  JMPTB cmp eax, 3
  JMPTB je public_6f46eef
  JMPTB cmp eax, 4
  JMPTB je public_6f46f3e
  JMPTB cmp eax, 5
  JMPTB je public_6f46f8d
  JMPTB int 3
        public_6f46eed : nop
        xor dl, dl
        public_6f46eef : nop
        fld dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x64]
        fmul dword ptr ds : [public_6f5a230]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        lea esp, ss:[esp]
        public_6f46f10 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-4]
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_6f46f10
        jmp public_6f46fd9
        public_6f46f3c : nop
        xor dl, dl
        public_6f46f3e : nop
        fld dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x64]
        fmul dword ptr ds : [public_6f5a230]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        nop 
        lea esp, ss:[esp]
        public_6f46f60 : nop
        fld dword ptr ds : [eax-0x18]
        add eax, 4
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-4]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ds : [eax-0x1C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-4]
        jne public_6f46f60
        jmp public_6f46fd9
        public_6f46f8b : nop
        xor dl, dl
        public_6f46f8d : nop
        fld dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x58]
        fmul dword ptr ds : [public_6f5a230]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        lea ebx, ds:[ebx]
        public_6f46fb0 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_6f46fb0
        public_6f46fd9 : nop
        test dl, dl
        fstp st(0)
        je public_6f4703e
        public_6f46fdf : nop
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f46ff2
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f46ff2 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xE8]
        push ecx
        lea ecx, ss:[esp+0x80]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f4701a
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f4701a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x80]
        push ecx
        lea ecx, ss:[esp+0xE4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea esi, ss:[esp+0xDC]
        jmp public_6f47098
        public_6f4703e : nop
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47051
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47051 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xE8]
        push ecx
        lea ecx, ss:[esp+0xE0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47079
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47079 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xDC]
        push ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x84]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea esi, ss:[esp+0x7C]
        public_6f47098 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0xAC]
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xAC]
        push edx
        call dword ptr ds : [eax+0x10]
        public_6f470ba : nop
        mov ebx, dword ptr ds : [ebx+0x1C]
        cmp dword ptr ss : [esp+0x134], ebx
        jb public_6f470d9
        test ebx, ebx
        jl public_6f470d9
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x120
        ret 8
        public_6f470d9 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x120
        ret 8
        UNREACHABLE_TRAP(0x6f46a40)
        ASM_EXPORT_ENTRY_FIRST(0x6f46eed, public_6f46eed)
        ASM_EXPORT_ENTRY(0x6f46eef, public_6f46eef)
        ASM_EXPORT_ENTRY(0x6f46f3c, public_6f46f3c)
        ASM_EXPORT_ENTRY(0x6f46f3e, public_6f46f3e)
        ASM_EXPORT_ENTRY(0x6f46f8b, public_6f46f8b)
        ASM_EXPORT_ENTRY_LAST(0x6f46f8d, public_6f46f8d)
    }
}

#undef public_6f46ac6
#undef public_6f46ade
#undef public_6f46ae8
#undef public_6f46af0
#undef public_6f46b59
#undef public_6f46bcc
#undef public_6f46c18
#undef public_6f46ce8
#undef public_6f46d23
#undef public_6f46d46
#undef public_6f46d54
#undef public_6f46dce
#undef public_6f46deb
#undef public_6f46e3c
#undef public_6f46e63
#undef public_6f46eed
#undef public_6f46eef
#undef public_6f46f10
#undef public_6f46f3c
#undef public_6f46f3e
#undef public_6f46f60
#undef public_6f46f8b
#undef public_6f46f8d
#undef public_6f46fb0
#undef public_6f46fd9
#undef public_6f46fdf
#undef public_6f46ff2
#undef public_6f4701a
#undef public_6f4703e
#undef public_6f47051
#undef public_6f47079
#undef public_6f47098
#undef public_6f470ba
#undef public_6f470d9

#pragma init_seg(compiler)
extern "C" void const* const public_6f46eed = __AsmFindLabelExport(&internal_6f46a40, 0x6f46eed);
extern "C" void const* const public_6f46eef = __AsmFindLabelExport(&internal_6f46a40, 0x6f46eef);
extern "C" void const* const public_6f46f3c = __AsmFindLabelExport(&internal_6f46a40, 0x6f46f3c);
extern "C" void const* const public_6f46f3e = __AsmFindLabelExport(&internal_6f46a40, 0x6f46f3e);
extern "C" void const* const public_6f46f8b = __AsmFindLabelExport(&internal_6f46a40, 0x6f46f8b);
extern "C" void const* const public_6f46f8d = __AsmFindLabelExport(&internal_6f46a40, 0x6f46f8d);
