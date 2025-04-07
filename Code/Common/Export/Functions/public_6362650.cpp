#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6350250);
CLANG_FORWARD_PROC_SYMBOL(public_6358cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6362c70);

#define public_636268d _public_636268d
#define public_63626a1 _public_63626a1
#define public_63626ac _public_63626ac
#define public_63626b8 _public_63626b8
#define public_63626be _public_63626be
#define public_63626cd _public_63626cd
#define public_63626f2 _public_63626f2
#define public_6362717 _public_6362717
#define public_636272e _public_636272e
#define public_6362773 _public_6362773
#define public_6362789 _public_6362789
#define public_6362797 _public_6362797
#define public_63627a5 _public_63627a5
#define public_63627b1 _public_63627b1
#define public_63627bb _public_63627bb

PROC_DECLARE(0x6362650, internal_6362650, public_6362650);
extern "C" NAKED register_t __cdecl internal_6362650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x80]
        push edi
        mov edi, dword ptr ds : [eax+0x18]
        call dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [public_658ab3c]
        jg public_6362797
        movsx eax, word ptr ds : [esi+0x32]
        cmp eax, 3
        ja public_63627b1
/*FIXUP jmp dword ptr ds : [eax*4+public_636281c] @0x6362686*/
  JMPTB cmp eax, 0
  JMPTB je public_636268d
  JMPTB cmp eax, 1
  JMPTB je public_63626cd
  JMPTB cmp eax, 2
  JMPTB je public_6362789
  JMPTB cmp eax, 3
  JMPTB je public_636268d
  JMPTB int 3
        public_636268d : nop
        movsx eax, word ptr ds : [esi+0x4E]
        cmp eax, 3
        ja public_63627b1
/*FIXUP jmp dword ptr ds : [eax*4+public_636282c] @0x636269a*/
  JMPTB cmp eax, 0
  JMPTB je public_6362797
  JMPTB cmp eax, 1
  JMPTB je public_63626a1
  JMPTB cmp eax, 2
  JMPTB je public_63626ac
  JMPTB cmp eax, 3
  JMPTB je public_6362797
  JMPTB int 3
        public_63626a1 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test dword ptr ds : [eax], 0x80000000
        jmp public_63626b8
        public_63626ac : nop
        mov ecx, dword ptr ds : [esi+0x48]
        and ecx, 0xFFFFFFF0
        test dword ptr ds : [ecx], 0x80000000
        public_63626b8 : nop
        je public_6362797
        public_63626be : nop
        mov dword ptr ds : [esi+0x84], 1
        jmp public_63627bb
        public_63626cd : nop
        movsx eax, word ptr ds : [esi+0x4E]
        xor edx, edx
        sub eax, edx
        je public_6362773
        dec eax
        je public_63626f2
        sub eax, 2
        je public_6362773
        mov dword ptr ds : [0], edx
        jmp public_63627bb
        public_63626f2 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        test dword ptr ds : [ecx], 0x80000000
        mov eax, dword ptr ds : [esi+0x2C]
        jne public_6362717
        test dword ptr ds : [eax], 0x80000000
        je public_6362797
        mov dword ptr ds : [esi+0x84], edx
        jmp public_63627bb
        public_6362717 : nop
        test dword ptr ds : [eax], 0x80000000
        jne public_636272e
        mov dword ptr ds : [esi+0x84], 1
        jmp public_63627bb
        public_636272e : nop
        and eax, 0xFFFFFFF0
        mov ebx, dword ptr ds : [eax]
        and ebx, 0xFFF
        inc ebx
        shl ebx, 4
        sub eax, ebx
        and ecx, 0xFFFFFFF0
        mov ebx, dword ptr ds : [ecx]
        and ebx, 0xFFF
        inc ebx
        shl ebx, 4
        sub ecx, ebx
        mov ebx, dword ptr ds : [eax+4]
        fld dword ptr ds : [ebx+eax+0x14]
        push ebp
        mov ebp, dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [ecx+ebp+0x14]
        pop ebp
        fnstsw ax
        test ah, 0x41
        jne public_63626be
        mov dword ptr ds : [esi+0x84], edx
        jmp public_63627bb
        public_6362773 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        and ecx, 0xFFFFFFF0
        test dword ptr ds : [ecx], 0x80000000
        je public_6362797
        mov dword ptr ds : [esi+0x84], edx
        jmp public_63627bb
        public_6362789 : nop
        mov edx, dword ptr ds : [esi+0x2C]
        and edx, 0xFFFFFFF0
        test dword ptr ds : [edx], 0x80000000
        jne public_63627a5
        public_6362797 : nop
        mov ecx, esi
        call public_6358cb0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_63627a5 : nop
        mov dword ptr ds : [esi+0x84], 0
        jmp public_63627bb
        public_63627b1 : nop
        mov dword ptr ds : [0], 0
        public_63627bb : nop
        mov ecx, dword ptr ds : [edi+0x10]
        push esi
        call public_634fec0
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x44]
        push edx
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        call dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_6350250
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        fadd dword ptr ss : [esp+0x18]
        and eax, 0xFFD3FFFF
        or eax, 0x100000
        add esp, 4
        mov ecx, esi
        fstp dword ptr ss : [esp]
        mov dword ptr ds : [esi+0x14], eax
        call public_6362c70
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6362650)
        ASM_EXPORT_ENTRY_FIRST(0x636268d, public_636268d)
        ASM_EXPORT_ENTRY(0x63626a1, public_63626a1)
        ASM_EXPORT_ENTRY(0x63626ac, public_63626ac)
        ASM_EXPORT_ENTRY(0x63626cd, public_63626cd)
        ASM_EXPORT_ENTRY(0x6362789, public_6362789)
        ASM_EXPORT_ENTRY_LAST(0x6362797, public_6362797)
    }
}

#undef public_636268d
#undef public_63626a1
#undef public_63626ac
#undef public_63626b8
#undef public_63626be
#undef public_63626cd
#undef public_63626f2
#undef public_6362717
#undef public_636272e
#undef public_6362773
#undef public_6362789
#undef public_6362797
#undef public_63627a5
#undef public_63627b1
#undef public_63627bb

#pragma init_seg(compiler)
extern "C" void const* const public_636268d = __AsmFindLabelExport(&internal_6362650, 0x636268d);
extern "C" void const* const public_63626a1 = __AsmFindLabelExport(&internal_6362650, 0x63626a1);
extern "C" void const* const public_63626ac = __AsmFindLabelExport(&internal_6362650, 0x63626ac);
extern "C" void const* const public_63626cd = __AsmFindLabelExport(&internal_6362650, 0x63626cd);
extern "C" void const* const public_6362789 = __AsmFindLabelExport(&internal_6362650, 0x6362789);
extern "C" void const* const public_6362797 = __AsmFindLabelExport(&internal_6362650, 0x6362797);
