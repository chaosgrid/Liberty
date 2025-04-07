#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d442ce);
CLANG_FORWARD_PROC_SYMBOL(public_6d4981d);

#define public_6d442ea _public_6d442ea
#define public_6d442f0 _public_6d442f0
#define public_6d4430c _public_6d4430c

PROC_DECLARE(0x6d442ce, internal_6d442ce, public_6d442ce);
/* CHUNK of public_6d48538 */
extern "C" NAKED register_t __cdecl internal_6d442ce()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        test byte ptr ds : [eax+0x10C], 0x20
        je public_6d442ea
        mov edx, dword ptr ds : [eax+0x5C]
        mov ecx, 0x300
        and edx, ecx
        cmp edx, ecx
        jne public_6d442f0
        ret 
        public_6d442ea : nop
        test byte ptr ds : [eax+0x5D], 8
        jne public_6d4430c
        public_6d442f0 : nop
        push esi
        push dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x100]
        push dword ptr ss : [esp+0x10]
        push dword ptr ds : [esi]
        call public_6d4981d
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        pop esi
        public_6d4430c : nop
        ret 
        UNREACHABLE_TRAP(0x6d442ce)
        ASM_EXPORT_ENTRY_FIRST(0x6d442ea, public_6d442ea)
        ASM_EXPORT_ENTRY(0x6d442f0, public_6d442f0)
        ASM_EXPORT_ENTRY_LAST(0x6d4430c, public_6d4430c)
    }
}

#undef public_6d442ea
#undef public_6d442f0
#undef public_6d4430c

#pragma init_seg(compiler)
extern "C" void const* const public_6d442ea = __AsmFindLabelExport(&internal_6d442ce, 0x6d442ea);
extern "C" void const* const public_6d442f0 = __AsmFindLabelExport(&internal_6d442ce, 0x6d442f0);
extern "C" void const* const public_6d4430c = __AsmFindLabelExport(&internal_6d442ce, 0x6d4430c);
