#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d27d0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_639510b);

#define public_62d2806 _public_62d2806
#define public_62d2820 _public_62d2820

PROC_DECLARE(0x62d27d0, internal_62d27d0, public_62d27d0);
/* CHUNK of public_62d2530 */
extern "C" NAKED register_t __cdecl internal_62d27d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_639510b @0x62d27d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639510b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x10], 0
        je public_62d2806
        push 0
        call public_6341610
        public_62d2806 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_62d2820
        push 0
        call public_6341610
        public_62d2820 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d27d0)
        ASM_EXPORT_ENTRY_FIRST(0x62d2806, public_62d2806)
        ASM_EXPORT_ENTRY_LAST(0x62d2820, public_62d2820)
    }
}

#undef public_62d2806
#undef public_62d2820

#pragma init_seg(compiler)
extern "C" void const* const public_62d2806 = __AsmFindLabelExport(&internal_62d27d0, 0x62d2806);
extern "C" void const* const public_62d2820 = __AsmFindLabelExport(&internal_62d27d0, 0x62d2820);
