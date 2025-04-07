#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9500);

#define public_62e9525 _public_62e9525
#define public_62e95dd _public_62e95dd
#define public_62e96a5 _public_62e96a5
#define public_62e96e7 _public_62e96e7
#define public_62e96f5 _public_62e96f5
#define public_62e971f _public_62e971f
#define public_62e9722 _public_62e9722

PROC_DECLARE(0x62e9500, internal_62e9500, public_62e9500);
extern "C" NAKED register_t __cdecl internal_62e9500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [public_6399308]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+8]
        cmp eax, 4
        mov esi, ecx
        ja public_62e9722
/*FIXUP jmp dword ptr ds : [eax*4+public_62e9754] @0x62e951e*/
  JMPTB cmp eax, 0
  JMPTB je public_62e9525
  JMPTB cmp eax, 1
  JMPTB je public_62e96a5
  JMPTB cmp eax, 2
  JMPTB je public_62e96f5
  JMPTB cmp eax, 3
  JMPTB je public_62e96f5
  JMPTB cmp eax, 4
  JMPTB je public_62e96e7
  JMPTB int 3
        public_62e9525 : nop
        mov al, byte ptr ds : [edi+2]
        test al, al
        je public_62e95dd
        fld dword ptr ds : [esi+0x105C]
        mov eax, dword ptr ds : [esi+0x105C]
        fchs 
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x1054]
        fadd dword ptr ds : [esi+0x1054]
        fstp dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [esi+0x105C]
        fld dword ptr ds : [esi+0x105C]
        mov dword ptr ss : [esp+0xC], ecx
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x1058]
        fadd dword ptr ds : [esi+0x1058]
        fstp dword ptr ds : [edi+0x10]
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639df88]
        fadd qword ptr ds : [public_639fe28]
        fmul dword ptr ds : [esi+0x1044]
        jmp public_62e971f
        public_62e95dd : nop
        fld dword ptr ds : [esi+0x104C]
        mov edx, dword ptr ds : [esi+0x104C]
        fchs 
        mov dword ptr ss : [esp+0xC], edx
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x1048]
        fadd dword ptr ds : [esi+0x1048]
        fstp dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [esi+0x104C]
        fld dword ptr ds : [esi+0x104C]
        mov dword ptr ss : [esp+0xC], eax
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x1050]
        fadd dword ptr ds : [esi+0x1050]
        fstp dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [esi+0x1040]
        fld dword ptr ds : [esi+0x1040]
        mov dword ptr ss : [esp+0xC], ecx
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x103C]
        fadd dword ptr ds : [esi+0x103C]
        jmp public_62e971f
        public_62e96a5 : nop
        fld dword ptr ds : [esi+0x1064]
        mov edx, dword ptr ds : [esi+0x1064]
        fchs 
        mov dword ptr ss : [esp+0xC], edx
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x1060]
        fadd dword ptr ds : [esi+0x1060]
        jmp public_62e971f
        public_62e96e7 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x176C]
        mov dword ptr ds : [edi+0x14], ecx
        jmp public_62e9722
        public_62e96f5 : nop
        xor eax, eax
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+0x10], eax
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_63a07f0]
        fadd qword ptr ds : [public_63a07e8]
        fmul dword ptr ds : [esi+0x1060]
        public_62e971f : nop
        fstp dword ptr ds : [edi+0x14]
        public_62e9722 : nop
        fld dword ptr ds : [edi+0x14]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62e9500)
        ASM_EXPORT_ENTRY_FIRST(0x62e9525, public_62e9525)
        ASM_EXPORT_ENTRY(0x62e96a5, public_62e96a5)
        ASM_EXPORT_ENTRY(0x62e96e7, public_62e96e7)
        ASM_EXPORT_ENTRY_LAST(0x62e96f5, public_62e96f5)
    }
}

#undef public_62e9525
#undef public_62e95dd
#undef public_62e96a5
#undef public_62e96e7
#undef public_62e96f5
#undef public_62e971f
#undef public_62e9722

#pragma init_seg(compiler)
extern "C" void const* const public_62e9525 = __AsmFindLabelExport(&internal_62e9500, 0x62e9525);
extern "C" void const* const public_62e96a5 = __AsmFindLabelExport(&internal_62e9500, 0x62e96a5);
extern "C" void const* const public_62e96e7 = __AsmFindLabelExport(&internal_62e9500, 0x62e96e7);
extern "C" void const* const public_62e96f5 = __AsmFindLabelExport(&internal_62e9500, 0x62e96f5);
