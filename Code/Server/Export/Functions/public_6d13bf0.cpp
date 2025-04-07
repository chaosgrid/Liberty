#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12900);
CLANG_FORWARD_PROC_SYMBOL(public_6d13bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d157d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15920);
CLANG_FORWARD_PROC_SYMBOL(public_6d15a70);
CLANG_FORWARD_PROC_SYMBOL(public_6d15bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6d13cab _public_6d13cab

PROC_DECLARE(0x6d13bf0, internal_6d13bf0, public_6d13bf0);
/* CHUNK of public_6d18850 */
extern "C" NAKED register_t __cdecl internal_6d13bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+8]
        push eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_6d157d0
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x1C]
        push eax
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        call public_6d15920
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x30]
        push eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_6d15920
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x44]
        push eax
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        call public_6d15a70
        mov eax, dword ptr ds : [esi+0x5C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x58]
        push eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_6d15bc0
        mov eax, dword ptr ds : [esi+0x70]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x6C]
        push eax
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        call public_6d15bc0
        mov eax, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x80]
        push eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_6d15a70
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d13cab
        mov ecx, dword ptr ds : [eax-4]
        push edi
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_6d12900 @0x6d13c93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d12900
        push ecx
        push 0x54
        push eax
        call public_6d6001e
        push edi
        call public_6d5ffb0
        add esp, 4
        pop edi
        public_6d13cab : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d13bf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d13cab, public_6d13cab)
    }
}

#undef public_6d13cab

#pragma init_seg(compiler)
extern "C" void const* const public_6d13cab = __AsmFindLabelExport(&internal_6d13bf0, 0x6d13cab);
