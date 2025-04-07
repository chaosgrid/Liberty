#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247fdb);

#define public_6212f0a _public_6212f0a
#define public_6212f1e _public_6212f1e
#define public_6212f43 _public_6212f43

PROC_DECLARE(0x6212ec0, internal_6212ec0, public_6212ec0);
/* CHUNK of public_6212810 */
extern "C" NAKED register_t __cdecl internal_6212ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6247fdb @0x6212ec2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247fdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_6212f0a
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6212f0a
        push eax
        call public_62460e0
        add esp, 4
        public_6212f0a : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6212f1e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6212f1e : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_6212f43
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_6212f43
        push esi
        call public_62460e0
        add esp, 4
        public_6212f43 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6212ec0)
        ASM_EXPORT_ENTRY_FIRST(0x6212f0a, public_6212f0a)
        ASM_EXPORT_ENTRY(0x6212f1e, public_6212f1e)
        ASM_EXPORT_ENTRY_LAST(0x6212f43, public_6212f43)
    }
}

#undef public_6212f0a
#undef public_6212f1e
#undef public_6212f43

#pragma init_seg(compiler)
extern "C" void const* const public_6212f0a = __AsmFindLabelExport(&internal_6212ec0, 0x6212f0a);
extern "C" void const* const public_6212f1e = __AsmFindLabelExport(&internal_6212ec0, 0x6212f1e);
extern "C" void const* const public_6212f43 = __AsmFindLabelExport(&internal_6212ec0, 0x6212f43);
