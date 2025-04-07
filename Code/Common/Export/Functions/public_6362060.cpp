#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362060);

#define public_636206d _public_636206d
#define public_636207b _public_636207b

PROC_DECLARE(0x6362060, internal_6362060, public_6362060);
/* CHUNK of public_6362160 */
extern "C" NAKED register_t __cdecl internal_6362060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0xE]
        dec esi
        js public_636207b
        public_636206d : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx]
        dec esi
        jns public_636206d
        public_636207b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6362060)
        ASM_EXPORT_ENTRY_FIRST(0x636206d, public_636206d)
        ASM_EXPORT_ENTRY_LAST(0x636207b, public_636207b)
    }
}

#undef public_636206d
#undef public_636207b

#pragma init_seg(compiler)
extern "C" void const* const public_636206d = __AsmFindLabelExport(&internal_6362060, 0x636206d);
extern "C" void const* const public_636207b = __AsmFindLabelExport(&internal_6362060, 0x636207b);
