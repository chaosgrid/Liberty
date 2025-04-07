#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247a08);

#define public_620ceb6 _public_620ceb6
#define public_620cec4 _public_620cec4
#define public_620cecb _public_620cecb
#define public_620cf04 _public_620cf04

PROC_DECLARE(0x620ce80, internal_620ce80, public_620ce80);
/* CHUNK of public_6204e30 */
extern "C" NAKED register_t __cdecl internal_620ce80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6247a08 @0x620ce82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247a08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ebx, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        xor ebp, ebp
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_620cecb
        public_620ceb6 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_620cec4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], ebp
        public_620cec4 : nop
        add esi, 4
        cmp esi, ebx
        jne public_620ceb6
        public_620cecb : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebp
        mov dword ptr ds : [edi+0xA0], ebp
        mov dword ptr ds : [edi+0xA4], ebp
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_620cf04
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x7C], ebp
        public_620cf04 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x620ce80)
        ASM_EXPORT_ENTRY_FIRST(0x620ceb6, public_620ceb6)
        ASM_EXPORT_ENTRY(0x620cec4, public_620cec4)
        ASM_EXPORT_ENTRY(0x620cecb, public_620cecb)
        ASM_EXPORT_ENTRY_LAST(0x620cf04, public_620cf04)
    }
}

#undef public_620ceb6
#undef public_620cec4
#undef public_620cecb
#undef public_620cf04

#pragma init_seg(compiler)
extern "C" void const* const public_620ceb6 = __AsmFindLabelExport(&internal_620ce80, 0x620ceb6);
extern "C" void const* const public_620cec4 = __AsmFindLabelExport(&internal_620ce80, 0x620cec4);
extern "C" void const* const public_620cecb = __AsmFindLabelExport(&internal_620ce80, 0x620cecb);
extern "C" void const* const public_620cf04 = __AsmFindLabelExport(&internal_620ce80, 0x620cf04);
