#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_PROC_SYMBOL(public_6246950);
CLANG_FORWARD_PROC_SYMBOL(public_62469f0);
CLANG_FORWARD_PROC_SYMBOL(public_6247140);

#define public_62469fe _public_62469fe
#define public_6246a06 _public_6246a06
#define public_6246a32 _public_6246a32
#define public_6246a47 _public_6246a47
#define public_6246a52 _public_6246a52
#define public_6246ab3 _public_6246ab3
#define public_6246ae7 _public_6246ae7
#define public_6246b07 _public_6246b07
#define public_6246b11 _public_6246b11
#define public_6246b2f _public_6246b2f
#define public_6246b40 _public_6246b40
#define public_6246b44 _public_6246b44
#define public_6246b48 _public_6246b48
#define public_6246b7c _public_6246b7c
#define public_6246b91 _public_6246b91
#define public_6246b99 _public_6246b99
#define public_6246bae _public_6246bae
#define public_6246bd6 _public_6246bd6
#define public_6246c0a _public_6246c0a
#define public_6246c36 _public_6246c36
#define public_6246c43 _public_6246c43
#define public_6246c64 _public_6246c64
#define public_6246c7a _public_6246c7a
#define public_6246c8f _public_6246c8f
#define public_6246c93 _public_6246c93
#define public_6246caa _public_6246caa
#define public_6246caf _public_6246caf

PROC_DECLARE(0x62469f0, internal_62469f0, public_62469f0);
extern "C" NAKED register_t __cdecl internal_62469f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+8]
        sub esp, 0x24
        test eax, eax
        jne public_62469fe
        xor edx, edx
        jmp public_6246a06
        public_62469fe : nop
        mov edx, dword ptr ds : [ecx+0xC]
        sub edx, eax
        sar edx, 4
        public_6246a06 : nop
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        cmp edx, 1
        push edi
        jne public_6246a52
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x44
        jnp public_6246a47
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_6246a32
        test byte ptr ds : [ecx], 4
        je public_6246a47
        public_6246a32 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        and eax, 0x4100
        jne public_6246a52
        test byte ptr ds : [ecx], 0x40
        jne public_6246a52
        public_6246a47 : nop
        fld dword ptr ds : [esi]
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        public_6246a52 : nop
        dec edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x10], eax
        shl edx, 4
        add edx, esi
        mov eax, dword ptr ds : [esi]
        mov edi, edx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6246bae
        mov ebx, dword ptr ds : [ecx]
        and ebx, 0xF
        jne public_6246ab3
        fld dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        public_6246ab3 : nop
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        call public_6247140
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jp public_6246ae7
        fsub dword ptr ds : [public_624bac4]
        public_6246ae7 : nop
        call public_6246188
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ds:[ebx-1]
        fild dword ptr ss : [esp+0x18]
        cmp eax, 3
        fstp dword ptr ss : [esp+0x18]
        ja public_6246b48
/*FIXUP jmp dword ptr ds : [eax*4+public_6246ccc] @0x6246b00*/
  JMPTB cmp eax, 0
  JMPTB je public_6246b07
  JMPTB cmp eax, 1
  JMPTB je public_6246b11
  JMPTB cmp eax, 2
  JMPTB je public_6246b2f
  JMPTB cmp eax, 3
  JMPTB je public_6246b99
  JMPTB int 3
        public_6246b07 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x14]
        jmp public_6246b44
        public_6246b11 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x28]
        jmp public_6246b48
        public_6246b2f : nop
        fld dword ptr ss : [esp+0x18]
        call public_6246188
        test al, 1
        je public_6246b07
        fld dword ptr ss : [esp+0x10]
        public_6246b40 : nop
        fsub dword ptr ss : [esp+0xC]
        public_6246b44 : nop
        fstp dword ptr ss : [esp+0x34]
        public_6246b48 : nop
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x1C]
        fimul dword ptr ss : [esp+0x2C]
        call public_6246188
        mov ecx, eax
        shl ecx, 4
        add ecx, esi
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x4100
        jne public_6246c8f
        cmp ecx, esi
        jbe public_6246b91
        public_6246b7c : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jnp public_6246b91
        sub ecx, 0x10
        cmp ecx, esi
        ja public_6246b7c
        public_6246b91 : nop
        lea eax, ds:[ecx+0x10]
        jmp public_6246caf
        public_6246b99 : nop
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x34]
        pop edi
        fmul dword ptr ds : [esi+8]
        fsubr dword ptr ds : [esi]
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        public_6246bae : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        and eax, 0x4100
        jne public_6246b48
        mov ebx, dword ptr ds : [ecx]
        and ebx, 0xF0
        jne public_6246bd6
        fld dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        public_6246bd6 : nop
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        call public_6247140
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jp public_6246c0a
        fsub dword ptr ds : [public_624bac4]
        public_6246c0a : nop
        call public_6246188
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ds:[ebx-0x10]
        fild dword ptr ss : [esp+0x18]
        cmp eax, 0x30
        fstp dword ptr ss : [esp+0x18]
        ja public_6246b48
/*FIXUP xor ecx, ecx @0x6246c27*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6246cf0] @0x6246c29*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6246cdc] @0x6246c2f*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6246c36
  JMPTB cmp eax, 1
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 6
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 1
  JMPTB je public_6246c43
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 2
  JMPTB je public_6246c64
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 4
  JMPTB je public_6246b48
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 3
  JMPTB je public_6246c7a
  JMPTB int 3
        public_6246c36 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        jmp public_6246b44
        public_6246c43 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x28]
        jmp public_6246b48
        public_6246c64 : nop
        fld dword ptr ss : [esp+0x18]
        call public_6246188
        test al, 1
        je public_6246c36
        fld dword ptr ss : [esp+0x14]
        jmp public_6246b40
        public_6246c7a : nop
        fld dword ptr ds : [edi+4]
        fsub dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+0xC]
        fsubr dword ptr ds : [edi]
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        public_6246c8f : nop
        cmp ecx, edi
        ja public_6246caa
        public_6246c93 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x4100
        je public_6246caa
        add ecx, 0x10
        cmp ecx, edi
        jbe public_6246c93
        public_6246caa : nop
        mov eax, ecx
        add ecx, 0xFFFFFFF0
        public_6246caf : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        push ecx
        call public_6246950
        fadd dword ptr ss : [esp+0x34]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x62469f0)
        ASM_EXPORT_ENTRY_FIRST(0x6246b07, public_6246b07)
        ASM_EXPORT_ENTRY(0x6246b11, public_6246b11)
        ASM_EXPORT_ENTRY(0x6246b2f, public_6246b2f)
        ASM_EXPORT_ENTRY(0x6246b48, public_6246b48)
        ASM_EXPORT_ENTRY(0x6246b99, public_6246b99)
        ASM_EXPORT_ENTRY(0x6246c36, public_6246c36)
        ASM_EXPORT_ENTRY(0x6246c43, public_6246c43)
        ASM_EXPORT_ENTRY(0x6246c64, public_6246c64)
        ASM_EXPORT_ENTRY_LAST(0x6246c7a, public_6246c7a)
    }
}

#undef public_62469fe
#undef public_6246a06
#undef public_6246a32
#undef public_6246a47
#undef public_6246a52
#undef public_6246ab3
#undef public_6246ae7
#undef public_6246b07
#undef public_6246b11
#undef public_6246b2f
#undef public_6246b40
#undef public_6246b44
#undef public_6246b48
#undef public_6246b7c
#undef public_6246b91
#undef public_6246b99
#undef public_6246bae
#undef public_6246bd6
#undef public_6246c0a
#undef public_6246c36
#undef public_6246c43
#undef public_6246c64
#undef public_6246c7a
#undef public_6246c8f
#undef public_6246c93
#undef public_6246caa
#undef public_6246caf

#pragma init_seg(compiler)
extern "C" void const* const public_6246b07 = __AsmFindLabelExport(&internal_62469f0, 0x6246b07);
extern "C" void const* const public_6246b11 = __AsmFindLabelExport(&internal_62469f0, 0x6246b11);
extern "C" void const* const public_6246b2f = __AsmFindLabelExport(&internal_62469f0, 0x6246b2f);
extern "C" void const* const public_6246b48 = __AsmFindLabelExport(&internal_62469f0, 0x6246b48);
extern "C" void const* const public_6246b99 = __AsmFindLabelExport(&internal_62469f0, 0x6246b99);
extern "C" void const* const public_6246c36 = __AsmFindLabelExport(&internal_62469f0, 0x6246c36);
extern "C" void const* const public_6246c43 = __AsmFindLabelExport(&internal_62469f0, 0x6246c43);
extern "C" void const* const public_6246c64 = __AsmFindLabelExport(&internal_62469f0, 0x6246c64);
extern "C" void const* const public_6246c7a = __AsmFindLabelExport(&internal_62469f0, 0x6246c7a);
