#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434b90);
CLANG_FORWARD_PROC_SYMBOL(public_436090);
CLANG_FORWARD_PROC_SYMBOL(public_4362f0);
CLANG_FORWARD_PROC_SYMBOL(public_4363e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b90fe);

#define public_434c2f _public_434c2f
#define public_434c47 _public_434c47
#define public_434c6f _public_434c6f
#define public_434cc8 _public_434cc8
#define public_434cdd _public_434cdd

PROC_DECLARE(0x434b90, internal_434b90, public_434b90);
/* CHUNK of public_4354d0 */
extern "C" NAKED register_t __cdecl internal_434b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5b90fe @0x434b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b90fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], 2
        call public_436090
        mov ebx, dword ptr ds : [edi+0x10]
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0xC]
        push ecx
        mov ecx, esi
        call public_53e430
        mov edx, dword ptr ds : [eax]
        push ebx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_4362f0
        mov ebx, dword ptr ds : [edi+0x24]
        lea ecx, ss:[esp+0x14]
        lea ebp, ds:[edi+0x20]
        push ecx
        mov ecx, ebp
        call public_53e430
        mov edx, dword ptr ds : [eax]
        push ebx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_4a2f80
        mov eax, dword ptr ds : [edi+0x2C]
        cmp eax, 0xFFFFFFFF
        je public_434c2f
        mov ecx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [edi+0x2C], 0xFFFFFFFF
        public_434c2f : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        xor ebx, ebx
        cmp ecx, eax
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_434c6f
        public_434c47 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_516f70
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_434c47
        public_434c6f : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], bl
        call public_4362f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        add esp, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_434cdd
        public_434cc8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_4363e0
        cmp esi, ebp
        jne public_434cc8
        public_434cdd : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x434b90)
        ASM_EXPORT_ENTRY_FIRST(0x434c2f, public_434c2f)
        ASM_EXPORT_ENTRY(0x434c47, public_434c47)
        ASM_EXPORT_ENTRY(0x434c6f, public_434c6f)
        ASM_EXPORT_ENTRY(0x434cc8, public_434cc8)
        ASM_EXPORT_ENTRY_LAST(0x434cdd, public_434cdd)
    }
}

#undef public_434c2f
#undef public_434c47
#undef public_434c6f
#undef public_434cc8
#undef public_434cdd

#pragma init_seg(compiler)
extern "C" void const* const public_434c2f = __AsmFindLabelExport(&internal_434b90, 0x434c2f);
extern "C" void const* const public_434c47 = __AsmFindLabelExport(&internal_434b90, 0x434c47);
extern "C" void const* const public_434c6f = __AsmFindLabelExport(&internal_434b90, 0x434c6f);
extern "C" void const* const public_434cc8 = __AsmFindLabelExport(&internal_434b90, 0x434cc8);
extern "C" void const* const public_434cdd = __AsmFindLabelExport(&internal_434b90, 0x434cdd);
