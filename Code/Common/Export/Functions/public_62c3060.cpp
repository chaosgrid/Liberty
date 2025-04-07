#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3060);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394aab);

#define public_62c309c _public_62c309c
#define public_62c30b6 _public_62c30b6

PROC_DECLARE(0x62c3060, internal_62c3060, public_62c3060);
/* CHUNK of public_62c2e60 */
extern "C" NAKED register_t __cdecl internal_62c3060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6394aab @0x62c3062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394aab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xA0]
        test eax, eax
        lea ecx, ds:[esi+0xA0]
        mov dword ptr ss : [esp+0x10], 0
        je public_62c309c
        push 0
        call public_6341610
        public_62c309c : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        lea ecx, ds:[esi+0x28]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_62c30b6
        push 0
        call public_6341610
        public_62c30b6 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62c3060)
        ASM_EXPORT_ENTRY_FIRST(0x62c309c, public_62c309c)
        ASM_EXPORT_ENTRY_LAST(0x62c30b6, public_62c30b6)
    }
}

#undef public_62c309c
#undef public_62c30b6

#pragma init_seg(compiler)
extern "C" void const* const public_62c309c = __AsmFindLabelExport(&internal_62c3060, 0x62c309c);
extern "C" void const* const public_62c30b6 = __AsmFindLabelExport(&internal_62c3060, 0x62c30b6);
