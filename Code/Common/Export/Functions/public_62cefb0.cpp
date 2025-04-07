#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4520);

#define public_62cefcc _public_62cefcc
#define public_62cefdf _public_62cefdf
#define public_62ceff7 _public_62ceff7
#define public_62cf02f _public_62cf02f
#define public_62cf036 _public_62cf036
#define public_62cf04e _public_62cf04e
#define public_62cf08d _public_62cf08d
#define public_62cf09d _public_62cf09d
#define public_62cf0ad _public_62cf0ad
#define public_62cf0bb _public_62cf0bb
#define public_62cf0ca _public_62cf0ca

PROC_DECLARE(0x62cefb0, internal_62cefb0, public_62cefb0);
extern "C" NAKED register_t __cdecl internal_62cefb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, 1
        push edi
        je public_62cefcc
        pop edi
        mov dword ptr ds : [esi+0x10], 2
        mov eax, 2
        pop esi
        pop ecx
        ret 
        public_62cefcc : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_62cefdf
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ecx
        ret 
        public_62cefdf : nop
        mov edx, dword ptr ds : [esi+0x30]
        cmp edx, 6
        mov edi, 1
        ja public_62cf0ca
/*FIXUP jmp dword ptr ds : [edx*4+public_62cf0d4] @0x62ceff0*/
  JMPTB cmp edx, 0
  JMPTB je public_62ceff7
  JMPTB cmp edx, 1
  JMPTB je public_62cf0ca
  JMPTB cmp edx, 2
  JMPTB je public_62cf0ca
  JMPTB cmp edx, 3
  JMPTB je public_62cf04e
  JMPTB cmp edx, 4
  JMPTB je public_62cf0ca
  JMPTB cmp edx, 5
  JMPTB je public_62cf0ad
  JMPTB cmp edx, 6
  JMPTB je public_62cf09d
  JMPTB int 3
        public_62ceff7 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        jne public_62cf036
        lea edx, ds:[esi+0x48]
        push edx
        lea edx, ds:[esi+0x3C]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x138]
        test eax, eax
        je public_62cf02f
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ecx
        ret 
        public_62cf02f : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x38], eax
        public_62cf036 : nop
        mov dword ptr ds : [esi+0x10], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+0x30], 3
        mov byte ptr ds : [esi+0x56], 1
        mov byte ptr ds : [esi+0x55], 0
        pop esi
        pop ecx
        ret 
        public_62cf04e : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [ecx+4]
        push eax
        mov eax, dword ptr ds : [esi+0x38]
        push 1
        push eax
        mov eax, dword ptr ds : [esi+0x34]
        add ecx, 4
        push eax
        call dword ptr ds : [edx+0x64]
        test eax, eax
        jne public_62cf08d
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        call public_62d4520
        xor edi, edi
        mov dword ptr ds : [esi+0x10], edi
        mov eax, edi
        pop edi
        mov byte ptr ds : [esi+0x54], 1
        mov dword ptr ds : [esi+0x30], 4
        pop esi
        pop ecx
        ret 
        public_62cf08d : nop
        mov dword ptr ds : [esi+0x10], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+0x30], 6
        pop esi
        pop ecx
        ret 
        public_62cf09d : nop
        mov edx, dword ptr ds : [esi]
        or al, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x28], al
        call dword ptr ds : [edx+0x10]
        push 2
        jmp public_62cf0bb
        public_62cf0ad : nop
        or al, 1
        mov byte ptr ds : [esi+0x28], al
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        push 0
        public_62cf0bb : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push 9
        call public_62d29a0
        mov edi, 2
        public_62cf0ca : nop
        mov dword ptr ds : [esi+0x10], edi
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62cefb0)
        ASM_EXPORT_ENTRY_FIRST(0x62ceff7, public_62ceff7)
        ASM_EXPORT_ENTRY(0x62cf04e, public_62cf04e)
        ASM_EXPORT_ENTRY(0x62cf09d, public_62cf09d)
        ASM_EXPORT_ENTRY(0x62cf0ad, public_62cf0ad)
        ASM_EXPORT_ENTRY_LAST(0x62cf0ca, public_62cf0ca)
    }
}

#undef public_62cefcc
#undef public_62cefdf
#undef public_62ceff7
#undef public_62cf02f
#undef public_62cf036
#undef public_62cf04e
#undef public_62cf08d
#undef public_62cf09d
#undef public_62cf0ad
#undef public_62cf0bb
#undef public_62cf0ca

#pragma init_seg(compiler)
extern "C" void const* const public_62ceff7 = __AsmFindLabelExport(&internal_62cefb0, 0x62ceff7);
extern "C" void const* const public_62cf04e = __AsmFindLabelExport(&internal_62cefb0, 0x62cf04e);
extern "C" void const* const public_62cf09d = __AsmFindLabelExport(&internal_62cefb0, 0x62cf09d);
extern "C" void const* const public_62cf0ad = __AsmFindLabelExport(&internal_62cefb0, 0x62cf0ad);
extern "C" void const* const public_62cf0ca = __AsmFindLabelExport(&internal_62cefb0, 0x62cf0ca);
