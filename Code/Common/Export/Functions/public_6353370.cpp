#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352e40);
CLANG_FORWARD_PROC_SYMBOL(public_6353370);
CLANG_FORWARD_PROC_SYMBOL(public_6353510);
CLANG_FORWARD_PROC_SYMBOL(public_6363350);
CLANG_FORWARD_PROC_SYMBOL(public_6363ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6364890);
CLANG_FORWARD_PROC_SYMBOL(public_63651c0);

#define public_6353451 _public_6353451
#define public_635346c _public_635346c
#define public_6353487 _public_6353487
#define public_63534a2 _public_63534a2
#define public_63534bd _public_63534bd
#define public_63534d6 _public_63534d6

PROC_DECLARE(0x6353370, internal_6353370, public_6353370);
extern "C" NAKED register_t __cdecl internal_6353370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x14]
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        mov eax, dword ptr ds : [ecx+0x14]
        xor eax, 0x100
        push ebx
        shr eax, 8
        and eax, 3
        push ebp
        mov ebp, dword ptr ds : [ecx+edx*4+0x2C]
        push esi
        lea esi, ds:[ecx+edx*4+0x18]
        lea edx, ds:[eax*8]
        sub edx, eax
        mov eax, dword ptr ds : [ecx+edx*4+0x28]
        push edi
        lea edi, ds:[ecx+edx*4+0x18]
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        mov eax, ebp
        and eax, 0xFFFFFFF0
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub eax, edx
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x20], ebx
        call public_6353510
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, ebx
        and eax, 0xFFFFFFF0
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub eax, edx
        mov ebx, eax
        mov dword ptr ss : [esp+0x34], ebx
        call public_6353510
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x3C], eax
        mov ecx, dword ptr ds : [ebx]
        add ecx, ebx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x40], edi
        movsx edx, word ptr ds : [esi+0x1A]
        movsx eax, word ptr ds : [edi+0x1A]
        lea eax, ds:[eax+edx*4]
        cmp eax, 5
        ja public_63534bd
/*FIXUP jmp dword ptr ds : [eax*4+public_63534f0] @0x635344a*/
  JMPTB cmp eax, 0
  JMPTB je public_6353451
  JMPTB cmp eax, 1
  JMPTB je public_635346c
  JMPTB cmp eax, 2
  JMPTB je public_6353487
  JMPTB cmp eax, 3
  JMPTB je public_63534bd
  JMPTB cmp eax, 4
  JMPTB je public_63534bd
  JMPTB cmp eax, 5
  JMPTB je public_63534a2
  JMPTB int 3
        public_6353451 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call public_6364890
        jmp public_63534d6
        public_635346c : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call public_63651c0
        jmp public_63534d6
        public_6353487 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call public_6363350
        jmp public_63534d6
        public_63534a2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call public_6363ab0
        jmp public_63534d6
        public_63534bd : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call public_6352e40
        public_63534d6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        dec dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        pop esi
        dec edx
        pop ebp
        mov dword ptr ds : [ecx+4], edx
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6353370)
        ASM_EXPORT_ENTRY_FIRST(0x6353451, public_6353451)
        ASM_EXPORT_ENTRY(0x635346c, public_635346c)
        ASM_EXPORT_ENTRY(0x6353487, public_6353487)
        ASM_EXPORT_ENTRY(0x63534a2, public_63534a2)
        ASM_EXPORT_ENTRY_LAST(0x63534bd, public_63534bd)
    }
}

#undef public_6353451
#undef public_635346c
#undef public_6353487
#undef public_63534a2
#undef public_63534bd
#undef public_63534d6

#pragma init_seg(compiler)
extern "C" void const* const public_6353451 = __AsmFindLabelExport(&internal_6353370, 0x6353451);
extern "C" void const* const public_635346c = __AsmFindLabelExport(&internal_6353370, 0x635346c);
extern "C" void const* const public_6353487 = __AsmFindLabelExport(&internal_6353370, 0x6353487);
extern "C" void const* const public_63534a2 = __AsmFindLabelExport(&internal_6353370, 0x63534a2);
extern "C" void const* const public_63534bd = __AsmFindLabelExport(&internal_6353370, 0x63534bd);
