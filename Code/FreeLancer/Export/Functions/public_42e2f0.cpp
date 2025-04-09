#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e2f0);

#define public_42e301 _public_42e301
#define public_42e313 _public_42e313

PROC_DECLARE(0x42e2f0, internal_42e2f0, public_42e2f0);
/* CHUNK of public_40ef30 */
extern "C" NAKED register_t __cdecl internal_42e2f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_42e301
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        public_42e301 : nop
        mov edx, dword ptr ds : [public_5c6dd4]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_42e313
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        public_42e313 : nop
        mov byte ptr ds : [public_667e14], 0
        ret 
        UNREACHABLE_TRAP(0x42e2f0)
        ASM_EXPORT_ENTRY_FIRST(0x42e301, public_42e301)
        ASM_EXPORT_ENTRY_LAST(0x42e313, public_42e313)
    }
}

#undef public_42e301
#undef public_42e313

#pragma init_seg(compiler)
extern "C" void const* const public_42e301 = __AsmFindLabelExport(&internal_42e2f0, 0x42e301);
extern "C" void const* const public_42e313 = __AsmFindLabelExport(&internal_42e2f0, 0x42e313);
