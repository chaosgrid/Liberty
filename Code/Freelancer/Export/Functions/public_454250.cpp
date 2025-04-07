#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_454250);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4542af _public_4542af
#define public_45436f _public_45436f
#define public_454376 _public_454376

PROC_DECLARE(0x454250, internal_454250, public_454250);
/* CHUNK of public_454760 */
extern "C" NAKED register_t __cdecl internal_454250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, ecx
        cmp byte ptr ds : [esi], 0
        je public_45436f
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_45436f
        push 0x27
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_45436f
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        mov al, 1
        je public_4542af
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xD
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        setne al
        public_4542af : nop
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_454376
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x1C
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x22
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x24
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x25
        push eax
        mov dword ptr ss : [esp+0x10], edx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x26
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x23
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x8C
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop esi
        pop ecx
        ret 
        public_45436f : nop
        xor al, al
        jmp public_4542af
        public_454376 : nop
        push 0xB60
        call public_421ed0
        add esp, 4
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x454250)
        ASM_EXPORT_ENTRY_FIRST(0x4542af, public_4542af)
        ASM_EXPORT_ENTRY(0x45436f, public_45436f)
        ASM_EXPORT_ENTRY_LAST(0x454376, public_454376)
    }
}

#undef public_4542af
#undef public_45436f
#undef public_454376

#pragma init_seg(compiler)
extern "C" void const* const public_4542af = __AsmFindLabelExport(&internal_454250, 0x4542af);
extern "C" void const* const public_45436f = __AsmFindLabelExport(&internal_454250, 0x45436f);
extern "C" void const* const public_454376 = __AsmFindLabelExport(&internal_454250, 0x454376);
