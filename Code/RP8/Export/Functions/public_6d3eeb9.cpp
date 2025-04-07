#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cb49);
CLANG_FORWARD_PROC_SYMBOL(public_6d3d13c);

#define public_6d3eeff _public_6d3eeff
#define public_6d3ef61 _public_6d3ef61
#define public_6d3ef65 _public_6d3ef65
#define public_6d3ef69 _public_6d3ef69
#define public_6d3ef6d _public_6d3ef6d
#define public_6d3ef71 _public_6d3ef71
#define public_6d3ef74 _public_6d3ef74
#define public_6d3ef75 _public_6d3ef75
#define public_6d3ef78 _public_6d3ef78
#define public_6d3ef8a _public_6d3ef8a
#define public_6d3ef94 _public_6d3ef94
#define public_6d3efc0 _public_6d3efc0
#define public_6d3efd6 _public_6d3efd6
#define public_6d3efef _public_6d3efef
#define public_6d3f007 _public_6d3f007
#define public_6d3f01b _public_6d3f01b

PROC_DECLARE(0x6d3eeb9, internal_6d3eeb9, public_6d3eeb9);
extern "C" NAKED register_t __cdecl internal_6d3eeb9()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF0
        sub esp, 0x44
        mov ecx, dword ptr ss : [ebp+0x1C]
        xor eax, eax
        test ecx, ecx
        setne al
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        xor edx, edx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        shl eax, 1
        test edi, edi
        setne dl
        lea esi, ss:[esp+0x10]
        or eax, edx
        xor edx, edx
        shl eax, 1
        test ebx, ebx
        setne dl
        or eax, edx
        cmp eax, 7
        ja public_6d3ef94
/*FIXUP jmp dword ptr ds : [eax*4+public_6d3f026] @0x6d3eef8*/
  JMPTB cmp eax, 0
  JMPTB je public_6d3eeff
  JMPTB cmp eax, 1
  JMPTB je public_6d3ef61
  JMPTB cmp eax, 2
  JMPTB je public_6d3ef65
  JMPTB cmp eax, 3
  JMPTB je public_6d3ef69
  JMPTB cmp eax, 4
  JMPTB je public_6d3ef6d
  JMPTB cmp eax, 5
  JMPTB je public_6d3ef71
  JMPTB cmp eax, 6
  JMPTB je public_6d3ef74
  JMPTB cmp eax, 7
  JMPTB je public_6d3ef78
  JMPTB int 3
        public_6d3eeff : nop
        fldz 
        fstp dword ptr ss : [esp+0x48]
        fldz 
        fstp dword ptr ss : [esp+0x44]
        fldz 
        fstp dword ptr ss : [esp+0x40]
        fldz 
        fstp dword ptr ss : [esp+0x3C]
        fldz 
        fstp dword ptr ss : [esp+0x34]
        fldz 
        fstp dword ptr ss : [esp+0x30]
        fldz 
        fstp dword ptr ss : [esp+0x2C]
        fldz 
        fstp dword ptr ss : [esp+0x28]
        fldz 
        fstp dword ptr ss : [esp+0x20]
        fldz 
        fstp dword ptr ss : [esp+0x1C]
        fldz 
        fstp dword ptr ss : [esp+0x18]
        fldz 
        fstp dword ptr ss : [esp+0x14]
        fld1 
        fstp dword ptr ss : [esp+0x4C]
        fld1 
        fstp dword ptr ss : [esp+0x38]
        fld1 
        fstp dword ptr ss : [esp+0x24]
        fld1 
        fstp dword ptr ss : [esp+0x10]
        jmp public_6d3ef94
        public_6d3ef61 : nop
        mov esi, ebx
        jmp public_6d3ef94
        public_6d3ef65 : nop
        mov esi, edi
        jmp public_6d3ef94
        public_6d3ef69 : nop
        push ebx
        push edi
        jmp public_6d3ef8a
        public_6d3ef6d : nop
        mov esi, ecx
        jmp public_6d3ef94
        public_6d3ef71 : nop
        push ebx
        jmp public_6d3ef75
        public_6d3ef74 : nop
        push edi
        public_6d3ef75 : nop
        push ecx
        jmp public_6d3ef8a
        public_6d3ef78 : nop
        push edi
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6d3d13c
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        public_6d3ef8a : nop
        lea eax, ss:[esp+0x18]
        push eax
        call public_6d3d13c
        public_6d3ef94 : nop
        push esi
        push dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [ebp+8]
        push esi
        call public_6d3cb49
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6d3f01b
        fld dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        fadd dword ptr ds : [public_6d5e488]
        fild dword ptr ds : [eax+8]
        jge public_6d3efc0
        fadd dword ptr ds : [public_6d5f200]
        public_6d3efc0 : nop
        mov ecx, dword ptr ds : [eax]
        fmulp 
        test ecx, ecx
        fmul dword ptr ds : [public_6d5f1fc]
        fild dword ptr ds : [eax]
        jge public_6d3efd6
        fadd dword ptr ds : [public_6d5f200]
        public_6d3efd6 : nop
        faddp 
        fstp dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        fld1 
        fsub dword ptr ds : [esi+4]
        fild dword ptr ds : [eax+0xC]
        jge public_6d3efef
        fadd dword ptr ds : [public_6d5f200]
        public_6d3efef : nop
        mov ecx, dword ptr ds : [eax+4]
        fmulp 
        test ecx, ecx
        fmul dword ptr ds : [public_6d5f1fc]
        fild dword ptr ds : [eax+4]
        jge public_6d3f007
        fadd dword ptr ds : [public_6d5f200]
        public_6d3f007 : nop
        faddp 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+0x14]
        fsub dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [esi+8]
        public_6d3f01b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d3eeb9)
        ASM_EXPORT_ENTRY_FIRST(0x6d3eeff, public_6d3eeff)
        ASM_EXPORT_ENTRY(0x6d3ef61, public_6d3ef61)
        ASM_EXPORT_ENTRY(0x6d3ef65, public_6d3ef65)
        ASM_EXPORT_ENTRY(0x6d3ef69, public_6d3ef69)
        ASM_EXPORT_ENTRY(0x6d3ef6d, public_6d3ef6d)
        ASM_EXPORT_ENTRY(0x6d3ef71, public_6d3ef71)
        ASM_EXPORT_ENTRY(0x6d3ef74, public_6d3ef74)
        ASM_EXPORT_ENTRY_LAST(0x6d3ef78, public_6d3ef78)
    }
}

#undef public_6d3eeff
#undef public_6d3ef61
#undef public_6d3ef65
#undef public_6d3ef69
#undef public_6d3ef6d
#undef public_6d3ef71
#undef public_6d3ef74
#undef public_6d3ef75
#undef public_6d3ef78
#undef public_6d3ef8a
#undef public_6d3ef94
#undef public_6d3efc0
#undef public_6d3efd6
#undef public_6d3efef
#undef public_6d3f007
#undef public_6d3f01b

#pragma init_seg(compiler)
extern "C" void const* const public_6d3eeff = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3eeff);
extern "C" void const* const public_6d3ef61 = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef61);
extern "C" void const* const public_6d3ef65 = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef65);
extern "C" void const* const public_6d3ef69 = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef69);
extern "C" void const* const public_6d3ef6d = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef6d);
extern "C" void const* const public_6d3ef71 = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef71);
extern "C" void const* const public_6d3ef74 = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef74);
extern "C" void const* const public_6d3ef78 = __AsmFindLabelExport(&internal_6d3eeb9, 0x6d3ef78);
