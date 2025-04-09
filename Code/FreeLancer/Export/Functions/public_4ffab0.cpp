#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_4ffab0);
CLANG_FORWARD_PROC_SYMBOL(public_4ffe50);

#define public_4ffadf _public_4ffadf
#define public_4ffb45 _public_4ffb45
#define public_4ffb80 _public_4ffb80
#define public_4ffb9f _public_4ffb9f

PROC_DECLARE(0x4ffab0, internal_4ffab0, public_4ffab0);
/* CHUNK of public_504890 */
extern "C" NAKED register_t __cdecl internal_4ffab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        inc dword ptr ds : [public_674fbc]
        mov eax, dword ptr ds : [esi+0x2A4]
        test eax, eax
        je public_4ffb9f
        mov ecx, dword ptr ds : [esi+0x2A8]
        test ecx, ecx
        je public_4ffadf
        test byte ptr ds : [ecx+0xB4], 8
        jne public_4ffadf
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4ffadf : nop
        mov ecx, dword ptr ss : [esp+8]
        push edi
        push ecx
        call public_422950
        push 0xB44
        call public_421ed0
        movzx edx, byte ptr ds : [esi+0x74]
        push edx
        call public_422190
        push 0xBE2
        call public_421dd0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        push 1
        push 0xD
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        jle public_4ffb80
        push ebx
        lea ebx, ds:[esi+0xC]
        public_4ffb45 : nop
        fld dword ptr ds : [esi+0xA0]
        push edi
        push ebx
        fchs 
        push 0xBC23D70A
        fstp dword ptr ds : [esi+0xA0]
        push 0x3DCCCCCD
        mov ecx, esi
        call public_4ffe50
        fld dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [esi+8]
        fchs 
        inc edi
        fstp dword ptr ds : [esi+0xA0]
        add ebx, 0x34
        cmp edi, eax
        jl public_4ffb45
        pop ebx
        public_4ffb80 : nop
        push 0xB44
        call public_421dd0
        push 1
        call public_422190
        push 0xBE2
        call public_421ed0
        add esp, 0xC
        pop edi
        public_4ffb9f : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4ffab0)
        ASM_EXPORT_ENTRY_FIRST(0x4ffadf, public_4ffadf)
        ASM_EXPORT_ENTRY(0x4ffb45, public_4ffb45)
        ASM_EXPORT_ENTRY(0x4ffb80, public_4ffb80)
        ASM_EXPORT_ENTRY_LAST(0x4ffb9f, public_4ffb9f)
    }
}

#undef public_4ffadf
#undef public_4ffb45
#undef public_4ffb80
#undef public_4ffb9f

#pragma init_seg(compiler)
extern "C" void const* const public_4ffadf = __AsmFindLabelExport(&internal_4ffab0, 0x4ffadf);
extern "C" void const* const public_4ffb45 = __AsmFindLabelExport(&internal_4ffab0, 0x4ffb45);
extern "C" void const* const public_4ffb80 = __AsmFindLabelExport(&internal_4ffab0, 0x4ffb80);
extern "C" void const* const public_4ffb9f = __AsmFindLabelExport(&internal_4ffab0, 0x4ffb9f);
