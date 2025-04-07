#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cb49);
CLANG_FORWARD_PROC_SYMBOL(public_6d3d13c);
CLANG_FORWARD_PROC_SYMBOL(public_6d3d648);

#define public_6d3f08a _public_6d3f08a
#define public_6d3f0ec _public_6d3f0ec
#define public_6d3f0ef _public_6d3f0ef
#define public_6d3f0f2 _public_6d3f0f2
#define public_6d3f0f6 _public_6d3f0f6
#define public_6d3f0f9 _public_6d3f0f9
#define public_6d3f0fc _public_6d3f0fc
#define public_6d3f0fd _public_6d3f0fd
#define public_6d3f100 _public_6d3f100
#define public_6d3f112 _public_6d3f112
#define public_6d3f121 _public_6d3f121
#define public_6d3f12c _public_6d3f12c
#define public_6d3f141 _public_6d3f141
#define public_6d3f156 _public_6d3f156
#define public_6d3f175 _public_6d3f175
#define public_6d3f188 _public_6d3f188
#define public_6d3f1b0 _public_6d3f1b0
#define public_6d3f1bb _public_6d3f1bb

PROC_DECLARE(0x6d3f046, internal_6d3f046, public_6d3f046);
extern "C" NAKED register_t __cdecl internal_6d3f046()
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
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        push esi
        xor esi, esi
        cmp ecx, esi
        setne al
        xor edx, edx
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        shl eax, 1
        cmp edi, esi
        setne dl
        or eax, edx
        xor edx, edx
        shl eax, 1
        cmp ebx, esi
        setne dl
        or eax, edx
        cmp eax, 7
        ja public_6d3f12c
/*FIXUP jmp dword ptr ds : [eax*4+public_6d3f1cc] @0x6d3f083*/
  JMPTB cmp eax, 0
  JMPTB je public_6d3f08a
  JMPTB cmp eax, 1
  JMPTB je public_6d3f0ec
  JMPTB cmp eax, 2
  JMPTB je public_6d3f0ef
  JMPTB cmp eax, 3
  JMPTB je public_6d3f0f2
  JMPTB cmp eax, 4
  JMPTB je public_6d3f0f6
  JMPTB cmp eax, 5
  JMPTB je public_6d3f0f9
  JMPTB cmp eax, 6
  JMPTB je public_6d3f0fc
  JMPTB cmp eax, 7
  JMPTB je public_6d3f100
  JMPTB int 3
        public_6d3f08a : nop
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
        jmp public_6d3f12c
        public_6d3f0ec : nop
        push ebx
        jmp public_6d3f121
        public_6d3f0ef : nop
        push edi
        jmp public_6d3f121
        public_6d3f0f2 : nop
        push ebx
        push edi
        jmp public_6d3f112
        public_6d3f0f6 : nop
        push ecx
        jmp public_6d3f121
        public_6d3f0f9 : nop
        push ebx
        jmp public_6d3f0fd
        public_6d3f0fc : nop
        push edi
        public_6d3f0fd : nop
        push ecx
        jmp public_6d3f112
        public_6d3f100 : nop
        push edi
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6d3d13c
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        public_6d3f112 : nop
        lea eax, ss:[esp+0x18]
        push eax
        call public_6d3d13c
        lea eax, ss:[esp+0x10]
        push eax
        public_6d3f121 : nop
        lea eax, ss:[esp+0x14]
        push esi
        push eax
        call public_6d3d648
        public_6d3f12c : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, esi
        je public_6d3f1b0
        mov ecx, dword ptr ds : [eax]
        fild dword ptr ds : [eax]
        test ecx, ecx
        jge public_6d3f141
        fadd dword ptr ds : [public_6d5f200]
        public_6d3f141 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        fsubr dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        test edx, edx
        fild dword ptr ds : [eax+8]
        jge public_6d3f156
        fadd dword ptr ds : [public_6d5f200]
        public_6d3f156 : nop
        fdivp 
        mov esi, dword ptr ss : [ebp+8]
        fadd st(0), st
        fsub dword ptr ds : [public_6d5e488]
        fstp dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        fild dword ptr ds : [eax+4]
        jge public_6d3f175
        fadd dword ptr ds : [public_6d5f200]
        public_6d3f175 : nop
        fsubr dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0xC]
        test edx, edx
        fild dword ptr ds : [eax+0xC]
        jge public_6d3f188
        fadd dword ptr ds : [public_6d5f200]
        public_6d3f188 : nop
        fdivp 
        fadd st(0), st
        fsub dword ptr ds : [public_6d5e488]
        fchs 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x14]
        fsub dword ptr ds : [eax+0x10]
        lea eax, ss:[esp+0x10]
        push eax
        fdivp 
        push esi
        fstp dword ptr ds : [esi+8]
        jmp public_6d3f1bb
        public_6d3f1b0 : nop
        mov esi, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x10]
        push eax
        push dword ptr ss : [ebp+0xC]
        public_6d3f1bb : nop
        push esi
        call public_6d3cb49
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d3f046)
        ASM_EXPORT_ENTRY_FIRST(0x6d3f08a, public_6d3f08a)
        ASM_EXPORT_ENTRY(0x6d3f0ec, public_6d3f0ec)
        ASM_EXPORT_ENTRY(0x6d3f0ef, public_6d3f0ef)
        ASM_EXPORT_ENTRY(0x6d3f0f2, public_6d3f0f2)
        ASM_EXPORT_ENTRY(0x6d3f0f6, public_6d3f0f6)
        ASM_EXPORT_ENTRY(0x6d3f0f9, public_6d3f0f9)
        ASM_EXPORT_ENTRY(0x6d3f0fc, public_6d3f0fc)
        ASM_EXPORT_ENTRY_LAST(0x6d3f100, public_6d3f100)
    }
}

#undef public_6d3f08a
#undef public_6d3f0ec
#undef public_6d3f0ef
#undef public_6d3f0f2
#undef public_6d3f0f6
#undef public_6d3f0f9
#undef public_6d3f0fc
#undef public_6d3f0fd
#undef public_6d3f100
#undef public_6d3f112
#undef public_6d3f121
#undef public_6d3f12c
#undef public_6d3f141
#undef public_6d3f156
#undef public_6d3f175
#undef public_6d3f188
#undef public_6d3f1b0
#undef public_6d3f1bb

#pragma init_seg(compiler)
extern "C" void const* const public_6d3f08a = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f08a);
extern "C" void const* const public_6d3f0ec = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f0ec);
extern "C" void const* const public_6d3f0ef = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f0ef);
extern "C" void const* const public_6d3f0f2 = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f0f2);
extern "C" void const* const public_6d3f0f6 = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f0f6);
extern "C" void const* const public_6d3f0f9 = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f0f9);
extern "C" void const* const public_6d3f0fc = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f0fc);
extern "C" void const* const public_6d3f100 = __AsmFindLabelExport(&internal_6d3f046, 0x6d3f100);
