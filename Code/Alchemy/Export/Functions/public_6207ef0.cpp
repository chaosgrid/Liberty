#include "Alchemy-PCH.h"


#define public_6207f4c _public_6207f4c
#define public_6207f52 _public_6207f52
#define public_6207f68 _public_6207f68
#define public_6207f8d _public_6207f8d
#define public_6207fce _public_6207fce
#define public_6207fde _public_6207fde
#define public_6207ff8 _public_6207ff8
#define public_6208010 _public_6208010
#define public_620801b _public_620801b
#define public_6208021 _public_6208021
#define public_6208031 _public_6208031
#define public_62080b4 _public_62080b4

PROC_DECLARE(0x6207ef0, internal_6207ef0, public_6207ef0);
extern "C" NAKED register_t __cdecl internal_6207ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        fld dword ptr ss : [esp+0x30]
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        mov esi, dword ptr ds : [ebx+0xC]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jnp public_62080b4
        mov ecx, dword ptr ds : [ebx+0x14]
        lea eax, ds:[ecx+1]
        cmp eax, 1
        je public_62080b4
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [esi+ecx*8]
        fnstsw ax
        and eax, 0x100
        jne public_6207f4c
        mov ecx, dword ptr ds : [esi+ecx*8+4]
        mov eax, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x38]
        push eax
        mov edx, dword ptr ds : [ecx]
        push esi
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 0x10
        public_6207f4c : nop
        xor edx, edx
        test ecx, ecx
        jle public_6207f68
        public_6207f52 : nop
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 5
        jnp public_6207f68
        inc edx
        add esi, 8
        cmp edx, ecx
        jl public_6207f52
        public_6207f68 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6207f8d
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x38]
        push edx
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 0x10
        public_6207f8d : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+0x18]
        push edi
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0xC]
        push edi
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi]
        add eax, 0xFFFFFFFE
        cmp eax, 4
        fdivp 
        ja public_6208031
/*FIXUP jmp dword ptr ds : [eax*4+public_62080d4] @0x6207fc7*/
  JMPTB cmp eax, 0
  JMPTB je public_620801b
  JMPTB cmp eax, 1
  JMPTB je public_6208021
  JMPTB cmp eax, 2
  JMPTB je public_6207fce
  JMPTB cmp eax, 3
  JMPTB je public_6207fde
  JMPTB cmp eax, 4
  JMPTB je public_6207ff8
  JMPTB int 3
        public_6207fce : nop
        fld st(0)
        fadd st, st(1)
        fsubr dword ptr ds : [public_624bb14]
        fmul st, st(1)
        fmulp 
        jmp public_6208031
        public_6207fde : nop
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        jmp public_6208010
        public_6207ff8 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x20]
        public_6208010 : nop
        fcompp 
        fnstsw ax
        and eax, 0x4100
        jne public_6208021
        public_620801b : nop
        fld st(0)
        fmulp 
        jmp public_6208031
        public_6208021 : nop
        fsubr dword ptr ds : [public_624bac4]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_624bac4]
        public_6208031 : nop
        fld dword ptr ds : [public_624bac4]
        fsub st, st(1)
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x38]
        pop edi
        fmul st, st(1)
        mov ecx, eax
        pop esi
        pop ebx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x24
        ret 0x10
        public_62080b4 : nop
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x38]
        push ecx
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x6207ef0)
        ASM_EXPORT_ENTRY_FIRST(0x6207fce, public_6207fce)
        ASM_EXPORT_ENTRY(0x6207fde, public_6207fde)
        ASM_EXPORT_ENTRY(0x6207ff8, public_6207ff8)
        ASM_EXPORT_ENTRY(0x620801b, public_620801b)
        ASM_EXPORT_ENTRY_LAST(0x6208021, public_6208021)
    }
}

#undef public_6207f4c
#undef public_6207f52
#undef public_6207f68
#undef public_6207f8d
#undef public_6207fce
#undef public_6207fde
#undef public_6207ff8
#undef public_6208010
#undef public_620801b
#undef public_6208021
#undef public_6208031
#undef public_62080b4

#pragma init_seg(compiler)
extern "C" void const* const public_6207fce = __AsmFindLabelExport(&internal_6207ef0, 0x6207fce);
extern "C" void const* const public_6207fde = __AsmFindLabelExport(&internal_6207ef0, 0x6207fde);
extern "C" void const* const public_6207ff8 = __AsmFindLabelExport(&internal_6207ef0, 0x6207ff8);
extern "C" void const* const public_620801b = __AsmFindLabelExport(&internal_6207ef0, 0x620801b);
extern "C" void const* const public_6208021 = __AsmFindLabelExport(&internal_6207ef0, 0x6208021);
