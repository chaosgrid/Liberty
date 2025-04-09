#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4563d0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba063);

#define public_456408 _public_456408
#define public_45641f _public_45641f
#define public_456445 _public_456445
#define public_456454 _public_456454
#define public_456491 _public_456491

PROC_DECLARE(0x4563d0, internal_4563d0, public_4563d0);
/* CHUNK of public_456350 */
extern "C" NAKED register_t __cdecl internal_4563d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5ba063 @0x4563d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba063
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5ce114
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_456445
        public_456408 : nop
        mov ebp, dword ptr ds : [edi+8]
        test ebp, ebp
        je public_45641f
        mov ecx, ebp
        call public_454bb0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_45641f : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [eax+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        mov dword ptr ds : [esi+0xC], ecx
        cmp ebp, dword ptr ds : [esi+8]
        mov edi, ebp
        jne public_456408
        public_456445 : nop
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 0
        je public_456491
        public_456454 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0xC], ecx
        jne public_456454
        public_456491 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_576010
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4563d0)
        ASM_EXPORT_ENTRY_FIRST(0x456408, public_456408)
        ASM_EXPORT_ENTRY(0x45641f, public_45641f)
        ASM_EXPORT_ENTRY(0x456445, public_456445)
        ASM_EXPORT_ENTRY(0x456454, public_456454)
        ASM_EXPORT_ENTRY_LAST(0x456491, public_456491)
    }
}

#undef public_456408
#undef public_45641f
#undef public_456445
#undef public_456454
#undef public_456491

#pragma init_seg(compiler)
extern "C" void const* const public_456408 = __AsmFindLabelExport(&internal_4563d0, 0x456408);
extern "C" void const* const public_45641f = __AsmFindLabelExport(&internal_4563d0, 0x45641f);
extern "C" void const* const public_456445 = __AsmFindLabelExport(&internal_4563d0, 0x456445);
extern "C" void const* const public_456454 = __AsmFindLabelExport(&internal_4563d0, 0x456454);
extern "C" void const* const public_456491 = __AsmFindLabelExport(&internal_4563d0, 0x456491);
