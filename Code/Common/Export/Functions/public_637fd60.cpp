#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6384610);

#define public_637fd83 _public_637fd83
#define public_637fda1 _public_637fda1
#define public_637fdad _public_637fdad
#define public_637fdb9 _public_637fdb9
#define public_637fdc5 _public_637fdc5
#define public_637fdd1 _public_637fdd1
#define public_637fddd _public_637fddd
#define public_637fdef _public_637fdef
#define public_637fdf7 _public_637fdf7
#define public_637fdff _public_637fdff
#define public_637fe07 _public_637fe07
#define public_637fe0f _public_637fe0f
#define public_637fe28 _public_637fe28
#define public_637fe4d _public_637fe4d
#define public_637fe5f _public_637fe5f
#define public_637fe80 _public_637fe80
#define public_637feb3 _public_637feb3
#define public_637feef _public_637feef

PROC_DECLARE(0x637fd60, internal_637fd60, public_637fd60);
extern "C" NAKED register_t __cdecl internal_637fd60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [public_658b24c]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x18]
        add ecx, 0xFFFFFFFE
        cmp ecx, 6
        push esi
        push edi
        ja public_637fe28
/*FIXUP jmp dword ptr ds : [ecx*4+public_637fef4] @0x637fd7c*/
  JMPTB cmp ecx, 0
  JMPTB je public_637fd83
  JMPTB cmp ecx, 1
  JMPTB je public_637fda1
  JMPTB cmp ecx, 2
  JMPTB je public_637fdad
  JMPTB cmp ecx, 3
  JMPTB je public_637fdb9
  JMPTB cmp ecx, 4
  JMPTB je public_637fdc5
  JMPTB cmp ecx, 5
  JMPTB je public_637fdd1
  JMPTB cmp ecx, 6
  JMPTB je public_637fddd
  JMPTB int 3
        public_637fd83 : nop
        fld qword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+8]
        mov edi, dword ptr ss : [esp+0x18]
        fld qword ptr ds : [eax]
        fmul qword ptr ds : [esi]
        faddp 
        fadd qword ptr ds : [ebx+0x10]
        fstp qword ptr ds : [edi]
        jmp public_637fe5f
        public_637fda1 : nop
        fld qword ptr ds : [eax+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x10]
        jmp public_637fe0f
        public_637fdad : nop
        fld qword ptr ds : [eax+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x18]
        jmp public_637fe07
        public_637fdb9 : nop
        fld qword ptr ds : [eax+0x20]
        mov esi, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x20]
        jmp public_637fdff
        public_637fdc5 : nop
        fld qword ptr ds : [eax+0x28]
        mov esi, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x28]
        jmp public_637fdf7
        public_637fdd1 : nop
        fld qword ptr ds : [eax+0x30]
        mov esi, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x30]
        jmp public_637fdef
        public_637fddd : nop
        mov esi, dword ptr ss : [esp+0x10]
        fld qword ptr ds : [eax+0x38]
        fmul qword ptr ds : [esi+0x38]
        fld qword ptr ds : [eax+0x30]
        fmul qword ptr ds : [esi+0x30]
        faddp 
        public_637fdef : nop
        fld qword ptr ds : [eax+0x28]
        fmul qword ptr ds : [esi+0x28]
        faddp 
        public_637fdf7 : nop
        fld qword ptr ds : [eax+0x20]
        fmul qword ptr ds : [esi+0x20]
        faddp 
        public_637fdff : nop
        fld qword ptr ds : [eax+0x18]
        fmul qword ptr ds : [esi+0x18]
        faddp 
        public_637fe07 : nop
        fld qword ptr ds : [eax+0x10]
        fmul qword ptr ds : [esi+0x10]
        faddp 
        public_637fe0f : nop
        fld qword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [esi+8]
        faddp 
        fld qword ptr ds : [eax]
        fmul qword ptr ds : [esi]
        faddp 
        fadd qword ptr ds : [ebx+0x10]
        fstp qword ptr ds : [edi]
        jmp public_637fe5f
        public_637fe28 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [public_658b24c]
        push ebp
        mov ebp, edx
        dec edx
        test ebp, ebp
        mov ecx, esi
        pop ebp
        je public_637fe5f
        inc edx
        public_637fe4d : nop
        fld qword ptr ds : [ecx]
        add eax, 8
        fmul qword ptr ds : [eax-8]
        add ecx, 8
        dec edx
        fadd qword ptr ds : [edi]
        fstp qword ptr ds : [edi]
        jne public_637fe4d
        public_637fe5f : nop
        mov ecx, dword ptr ds : [public_658bb78]
        mov eax, dword ptr ds : [public_658b1a8]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bb78], ecx
        jne public_637fe80
        cmp dword ptr ds : [public_658b078], 4
        jl public_637feef
        jmp public_637feb3
        public_637fe80 : nop
        call public_6384610
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_63a5958]
        fsub qword ptr ds : [public_63a5940]
        fmul qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_658b1b0]
        fadd qword ptr ds : [edi]
        fstp qword ptr ds : [edi]
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, 4
        jl public_637feef
/*FIXUP public_637feb3 : nop
        push offset public_63f6384 @0x637feb3*/
  FIXUP public_637feb3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6384
        call public_6356960
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        add esp, 4
        push edx
        push eax
/*FIXUP push offset public_63f637c @0x637fec7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        call public_6356960
        mov ecx, dword ptr ds : [ebx+0x4C]
        add esp, 0xC
        push ecx
        push esi
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f6368 @0x637fee2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6368
        call public_6356960
        add esp, 0xC
        public_637feef : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x637fd60)
        ASM_EXPORT_ENTRY_FIRST(0x637fd83, public_637fd83)
        ASM_EXPORT_ENTRY(0x637fda1, public_637fda1)
        ASM_EXPORT_ENTRY(0x637fdad, public_637fdad)
        ASM_EXPORT_ENTRY(0x637fdb9, public_637fdb9)
        ASM_EXPORT_ENTRY(0x637fdc5, public_637fdc5)
        ASM_EXPORT_ENTRY(0x637fdd1, public_637fdd1)
        ASM_EXPORT_ENTRY_LAST(0x637fddd, public_637fddd)
    }
}

#undef public_637fd83
#undef public_637fda1
#undef public_637fdad
#undef public_637fdb9
#undef public_637fdc5
#undef public_637fdd1
#undef public_637fddd
#undef public_637fdef
#undef public_637fdf7
#undef public_637fdff
#undef public_637fe07
#undef public_637fe0f
#undef public_637fe28
#undef public_637fe4d
#undef public_637fe5f
#undef public_637fe80
#undef public_637feb3
#undef public_637feef

#pragma init_seg(compiler)
extern "C" void const* const public_637fd83 = __AsmFindLabelExport(&internal_637fd60, 0x637fd83);
extern "C" void const* const public_637fda1 = __AsmFindLabelExport(&internal_637fd60, 0x637fda1);
extern "C" void const* const public_637fdad = __AsmFindLabelExport(&internal_637fd60, 0x637fdad);
extern "C" void const* const public_637fdb9 = __AsmFindLabelExport(&internal_637fd60, 0x637fdb9);
extern "C" void const* const public_637fdc5 = __AsmFindLabelExport(&internal_637fd60, 0x637fdc5);
extern "C" void const* const public_637fdd1 = __AsmFindLabelExport(&internal_637fd60, 0x637fdd1);
extern "C" void const* const public_637fddd = __AsmFindLabelExport(&internal_637fd60, 0x637fddd);
