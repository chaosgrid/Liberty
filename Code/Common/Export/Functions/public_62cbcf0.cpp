#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cbcf0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5890);
CLANG_FORWARD_PROC_SYMBOL(public_62d7590);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_62d94a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_63275d0);

#define public_62cbd14 _public_62cbd14
#define public_62cbd24 _public_62cbd24
#define public_62cbd32 _public_62cbd32
#define public_62cbd34 _public_62cbd34
#define public_62cbd5e _public_62cbd5e
#define public_62cbe12 _public_62cbe12
#define public_62cbe51 _public_62cbe51
#define public_62cbe7a _public_62cbe7a

PROC_DECLARE(0x62cbcf0, internal_62cbcf0, public_62cbcf0);
extern "C" NAKED register_t __cdecl internal_62cbcf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1810]
        cmp ecx, 3
        ja public_62cbe7a
        mov ebx, dword ptr ss : [esp+0x48]
/*FIXUP jmp dword ptr ds : [ecx*4+public_62cbe84] @0x62cbd0d*/
  JMPTB cmp ecx, 0
  JMPTB je public_62cbd24
  JMPTB cmp ecx, 1
  JMPTB je public_62cbd14
  JMPTB cmp ecx, 2
  JMPTB je public_62cbe12
  JMPTB cmp ecx, 3
  JMPTB je public_62cbe51
  JMPTB int 3
        public_62cbd14 : nop
        mov eax, dword ptr ds : [esi+0x264]
        lea ecx, ds:[esi+0x264]
        push ebx
        call dword ptr ds : [eax+4]
        public_62cbd24 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        push ebp
        push edi
        je public_62cbd32
        lea ebp, ds:[eax-8]
        jmp public_62cbd34
        public_62cbd32 : nop
        xor ebp, ebp
        public_62cbd34 : nop
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62cbd5e
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62cbd5e : nop
        lea ecx, ss:[esp+0x40]
        push ebp
        push ecx
        call public_62e60e0
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ds : [eax+8]
        add esp, 8
        fld dword ptr ds : [edi+0x10]
        lea edx, ss:[esp+0x10]
        fsub dword ptr ds : [eax+4]
        push edx
        fld dword ptr ds : [edi+0xC]
        lea edi, ds:[esi+0x90]
        fsub dword ptr ds : [eax]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_62d7590
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1814]
        push ecx
        mov ecx, edi
        call public_62d9490
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        add esi, 0x150
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        push eax
        fchs 
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x40]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        call public_62d5890
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop edi
        pop ebp
        pop esi
        pop ebx
        add esp, 0x3C
        ret 4
        public_62cbe12 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[eax+0x18]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call public_62e8c20
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        push 0xBF800000
        add ecx, 0x18
        call public_62e89a0
        pop esi
        pop ebx
        add esp, 0x3C
        ret 4
        public_62cbe51 : nop
        mov edx, dword ptr ds : [eax+0x1818]
        add esi, 0x1C8
        push edx
        mov ecx, esi
        call public_62d94a0
        push 0
        mov ecx, esi
        call public_63275d0
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        public_62cbe7a : nop
        pop esi
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x62cbcf0)
        ASM_EXPORT_ENTRY_FIRST(0x62cbd14, public_62cbd14)
        ASM_EXPORT_ENTRY(0x62cbd24, public_62cbd24)
        ASM_EXPORT_ENTRY(0x62cbe12, public_62cbe12)
        ASM_EXPORT_ENTRY_LAST(0x62cbe51, public_62cbe51)
    }
}

#undef public_62cbd14
#undef public_62cbd24
#undef public_62cbd32
#undef public_62cbd34
#undef public_62cbd5e
#undef public_62cbe12
#undef public_62cbe51
#undef public_62cbe7a

#pragma init_seg(compiler)
extern "C" void const* const public_62cbd14 = __AsmFindLabelExport(&internal_62cbcf0, 0x62cbd14);
extern "C" void const* const public_62cbd24 = __AsmFindLabelExport(&internal_62cbcf0, 0x62cbd24);
extern "C" void const* const public_62cbe12 = __AsmFindLabelExport(&internal_62cbcf0, 0x62cbe12);
extern "C" void const* const public_62cbe51 = __AsmFindLabelExport(&internal_62cbcf0, 0x62cbe51);
