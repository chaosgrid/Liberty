#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62d7590);
CLANG_FORWARD_PROC_SYMBOL(public_62d75c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d75e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e3460);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e92e0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c8e0a _public_62c8e0a
#define public_62c8e8a _public_62c8e8a
#define public_62c8e8c _public_62c8e8c
#define public_62c8f0a _public_62c8f0a
#define public_62c8f58 _public_62c8f58
#define public_62c8f99 _public_62c8f99
#define public_62c8faa _public_62c8faa
#define public_62c8fae _public_62c8fae
#define public_62c8fd1 _public_62c8fd1
#define public_62c8fe6 _public_62c8fe6
#define public_62c8fec _public_62c8fec
#define public_62c900c _public_62c900c
#define public_62c900e _public_62c900e
#define public_62c9030 _public_62c9030
#define public_62c9038 _public_62c9038
#define public_62c904b _public_62c904b
#define public_62c9081 _public_62c9081
#define public_62c908d _public_62c908d
#define public_62c908f _public_62c908f
#define public_62c90ad _public_62c90ad
#define public_62c90ba _public_62c90ba
#define public_62c90c3 _public_62c90c3
#define public_62c9112 _public_62c9112
#define public_62c919c _public_62c919c
#define public_62c91b1 _public_62c91b1
#define public_62c91ea _public_62c91ea
#define public_62c9223 _public_62c9223
#define public_62c924d _public_62c924d
#define public_62c92a2 _public_62c92a2
#define public_62c92a3 _public_62c92a3
#define public_62c92ae _public_62c92ae
#define public_62c92fd _public_62c92fd

PROC_DECLARE(0x62c8de0, internal_62c8de0, public_62c8de0);
extern "C" NAKED register_t __cdecl internal_62c8de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x64
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x1D4]
        test al, al
        push esi
        push edi
        je public_62c8e0a
        pop edi
        mov eax, 2
        pop esi
        mov byte ptr ss : [ebp+0x1D4], 0
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x64
        ret 
        public_62c8e0a : nop
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ebx, 3
        mov ecx, eax
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [edx+0xBC]
        xor edi, edi
        test al, al
        jne public_62c9038
        mov eax, dword ptr ss : [ebp+0x30]
        cmp eax, edi
        lea esi, ss:[ebp+0x30]
        je public_62c8f0a
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_62c8f0a
        mov ecx, dword ptr ss : [ebp+0x24]
        fld dword ptr ds : [ecx+0x16DC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62c8f0a
        fld dword ptr ss : [ebp+0x1D8]
        fcomp dword ptr ds : [ecx+0x16E0]
        fnstsw ax
        test ah, 5
        jp public_62c8f0a
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_62c8e8a
        add eax, 0xFFFFFFF8
        jmp public_62c8e8c
        public_62c8e8a : nop
        xor eax, eax
        public_62c8e8c : nop
        push eax
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        call public_62e1aa0
        fcomp qword ptr ds : [public_639e2d8]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62c8f0a
        fld dword ptr ss : [ebp+0x1D8]
        mov eax, dword ptr ss : [ebp+0x1C]
        fadd dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x1A0]
        lea ecx, ss:[ebp+0x1A0]
        push eax
        fstp dword ptr ss : [ebp+0x1D8]
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x14]
        lea esi, ss:[ebp+0xE0]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call public_62d75e0
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x10], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x64
        ret 
        public_62c8f0a : nop
        mov edx, dword ptr ss : [ebp+0x1A0]
        lea ecx, ss:[ebp+0x1A0]
        call dword ptr ds : [edx+0x10]
        mov al, byte ptr ss : [ebp+0x1C5]
        test al, al
        je public_62c8f58
        mov eax, dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp+0x1C8]
        fcomp dword ptr ds : [eax+0x16D8]
        fnstsw ax
        test ah, 5
        jnp public_62c8fd1
        mov dword ptr ss : [ebp+0x1C8], edi
        cmp dword ptr ds : [esi], edi
        je public_62c9030
        push edi
        mov ecx, esi
        call public_6341610
        jmp public_62c9030
        public_62c8f58 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_62c9038
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_62c9038
        mov dword ptr ss : [ebp+0x2C], 1
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_62c8faa
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_62c8faa
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_62c8f99
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 0xFFFFFFF8
        push ecx
        push eax
        call public_62e1aa0
        add esp, 8
        jmp public_62c8fae
        public_62c8f99 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        xor eax, eax
        push ecx
        push eax
        call public_62e1aa0
        add esp, 8
        jmp public_62c8fae
        public_62c8faa : nop
        fld dword ptr ss : [esp+0x10]
        public_62c8fae : nop
        fcomp qword ptr ds : [public_639f9d0]
        fnstsw ax
        test ah, 0x41
        jne public_62c8fec
        mov edx, dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp+0x1C8]
        fcomp dword ptr ds : [edx+0x16D4]
        fnstsw ax
        test ah, 5
        jp public_62c8fe6
        public_62c8fd1 : nop
        fld dword ptr ss : [ebp+0x1C]
        mov dword ptr ss : [esp+0x10], edi
        fadd dword ptr ss : [ebp+0x1C8]
        fstp dword ptr ss : [ebp+0x1C8]
        jmp public_62c9038
        public_62c8fe6 : nop
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_62c9038
        public_62c8fec : nop
        mov byte ptr ss : [ebp+0x1C5], 1
        mov dword ptr ss : [ebp+0x1C8], edi
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], 1
        je public_62c900c
        lea eax, ds:[esi-8]
        jmp public_62c900e
        public_62c900c : nop
        xor eax, eax
        public_62c900e : nop
        push eax
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        push eax
        call public_62e4bb0
        mov ecx, dword ptr ss : [ebp+0x24]
        fcomp dword ptr ds : [ecx+0x16E4]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62c9038
        public_62c9030 : nop
        mov dword ptr ss : [esp+0x10], 2
        public_62c9038 : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        dec eax
        cmp eax, ebx
        ja public_62c92ae
/*FIXUP jmp dword ptr ds : [eax*4+public_62c9308] @0x62c9044*/
  JMPTB cmp eax, 0
  JMPTB je public_62c904b
  JMPTB cmp eax, 1
  JMPTB je public_62c9112
  JMPTB cmp eax, 2
  JMPTB je public_62c90ba
  JMPTB cmp eax, 3
  JMPTB je public_62c90c3
  JMPTB int 3
        public_62c904b : nop
        mov al, byte ptr ss : [ebp+0x1B4]
        test al, al
        je public_62c9081
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        lea eax, ss:[ebp+0x1B8]
        push eax
        lea ecx, ss:[ebp+0xE0]
        call public_62d75e0
        jmp public_62c92ae
        public_62c9081 : nop
        mov eax, dword ptr ss : [ebp+0x30]
        cmp eax, edi
        je public_62c908d
        add eax, 0xFFFFFFF8
        jmp public_62c908f
        public_62c908d : nop
        xor eax, eax
        public_62c908f : nop
        push eax
        lea ecx, ss:[ebp+0xE0]
        call public_62d7510
        mov eax, dword ptr ss : [ebp+0x30]
        cmp eax, edi
        je public_62c90ad
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_62c92ae
        public_62c90ad : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x64
        ret 
        public_62c90ba : nop
        lea ecx, ss:[ebp+0x38]
        push ecx
        jmp public_62c92a3
        public_62c90c3 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[ebp+0xE0]
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        push eax
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        call public_62d7590
        jmp public_62c92ae
        public_62c9112 : nop
        mov al, byte ptr ss : [ebp+0x1B4]
        test al, al
        je public_62c91b1
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[ebp+0x1B8]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x4C]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62c919c
        push ecx
        lea ecx, ss:[ebp+0xE0]
        call public_62d75e0
        jmp public_62c92ae
        public_62c919c : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0xE0]
        call public_62d7590
        jmp public_62c92ae
        public_62c91b1 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x18
        call public_62e92e0
        test al, al
        jne public_62c9223
        mov esi, dword ptr ss : [ebp+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62c91ea
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c91ea : nop
        fld dword ptr ss : [ebp+0x64]
        push edi
        fsub dword ptr ds : [esi+0x14]
        push 0x3F7FBE77
        fld dword ptr ss : [ebp+0x60]
        lea ebx, ss:[ebp+0x38]
        fsub dword ptr ds : [esi+0x10]
        lea ecx, ss:[esp+0x34]
        fld dword ptr ss : [ebp+0x5C]
        push ebx
        fsub dword ptr ds : [esi+0xC]
        push ecx
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        call public_62e3460
        add esp, 0x10
        test al, al
        jne public_62c92a2
        public_62c9223 : nop
        mov esi, dword ptr ss : [ebp+0x24]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62c924d
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c924d : nop
        fld dword ptr ss : [ebp+0x64]
        mov eax, dword ptr ss : [ebp+0x24]
        fsub dword ptr ds : [esi+0x14]
        add eax, 0x14FC
        fld dword ptr ss : [ebp+0x60]
        push edi
        fsub dword ptr ds : [esi+0x10]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [ebp+0x5C]
        push ecx
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x5C]
        push eax
        call public_62e1f40
        lea ebx, ss:[ebp+0x38]
        mov ecx, 9
        mov esi, eax
        mov edi, ebx
        add esp, 0x10
        rep movsd
        public_62c92a2 : nop
        push ebx
        public_62c92a3 : nop
        lea ecx, ss:[ebp+0xE0]
        call public_62d75c0
        public_62c92ae : nop
        mov al, byte ptr ss : [ebp+0x1C4]
        test al, al
        sete cl
        push ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x18
        call public_62e91d0
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0xE0]
        lea ecx, ss:[ebp+0xE0]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        mov eax, dword ptr ss : [esp+0x10]
        je public_62c92fd
        mov eax, 1
        public_62c92fd : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x62c8de0)
        ASM_EXPORT_ENTRY_FIRST(0x62c904b, public_62c904b)
        ASM_EXPORT_ENTRY(0x62c90ba, public_62c90ba)
        ASM_EXPORT_ENTRY(0x62c90c3, public_62c90c3)
        ASM_EXPORT_ENTRY_LAST(0x62c9112, public_62c9112)
    }
}

#undef public_62c8e0a
#undef public_62c8e8a
#undef public_62c8e8c
#undef public_62c8f0a
#undef public_62c8f58
#undef public_62c8f99
#undef public_62c8faa
#undef public_62c8fae
#undef public_62c8fd1
#undef public_62c8fe6
#undef public_62c8fec
#undef public_62c900c
#undef public_62c900e
#undef public_62c9030
#undef public_62c9038
#undef public_62c904b
#undef public_62c9081
#undef public_62c908d
#undef public_62c908f
#undef public_62c90ad
#undef public_62c90ba
#undef public_62c90c3
#undef public_62c9112
#undef public_62c919c
#undef public_62c91b1
#undef public_62c91ea
#undef public_62c9223
#undef public_62c924d
#undef public_62c92a2
#undef public_62c92a3
#undef public_62c92ae
#undef public_62c92fd

#pragma init_seg(compiler)
extern "C" void const* const public_62c904b = __AsmFindLabelExport(&internal_62c8de0, 0x62c904b);
extern "C" void const* const public_62c90ba = __AsmFindLabelExport(&internal_62c8de0, 0x62c90ba);
extern "C" void const* const public_62c90c3 = __AsmFindLabelExport(&internal_62c8de0, 0x62c90c3);
extern "C" void const* const public_62c9112 = __AsmFindLabelExport(&internal_62c8de0, 0x62c9112);
