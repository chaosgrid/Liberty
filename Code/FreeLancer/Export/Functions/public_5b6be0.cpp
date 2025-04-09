#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6be0);

#define public_5b6c1e _public_5b6c1e

PROC_DECLARE(0x5b6be0, internal_5b6be0, public_5b6be0);
/* CHUNK of public_5a9950 */
extern "C" NAKED register_t __cdecl internal_5b6be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        lea esi, ds:[ecx+4]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_5b6c1e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_5b6c1e
        lea eax, ss:[esp+8]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, edi
        setne dl
        pop edi
        mov al, dl
        pop esi
        pop ecx
        ret 4
        public_5b6c1e : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, edi
        setne dl
        pop edi
        mov al, dl
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5b6be0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b6c1e, public_5b6c1e)
    }
}

#undef public_5b6c1e

#pragma init_seg(compiler)
extern "C" void const* const public_5b6c1e = __AsmFindLabelExport(&internal_5b6be0, 0x5b6c1e);
