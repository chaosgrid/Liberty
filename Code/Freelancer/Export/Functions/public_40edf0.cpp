#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b87d9);

#define public_40ee4f _public_40ee4f
#define public_40ee58 _public_40ee58
#define public_40ee8e _public_40ee8e
#define public_40ee90 _public_40ee90
#define public_40eeb9 _public_40eeb9
#define public_40eec2 _public_40eec2
#define public_40eecb _public_40eecb
#define public_40eee2 _public_40eee2
#define public_40eeff _public_40eeff
#define public_40ef08 _public_40ef08

PROC_DECLARE(0x40edf0, internal_40edf0, public_40edf0);
/* CHUNK of public_40eac0 */
extern "C" NAKED register_t __cdecl internal_40edf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5b87d9 @0x40edf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b87d9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_5c7080]
        mov ebp, dword ptr ds : [eax]
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_40ee4f
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_40ee4f
        cmp al, 0xFF
        je public_40ee4f
        push 1
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c7088]
        xor edi, edi
        public_40ee4f : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_40ee58
        mov ebp, eax
        public_40ee58 : nop
        cmp ebp, edi
        jbe public_40ee90
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_5c709c]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_40ee8e
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        public_40ee8e : nop
        xor edi, edi
        public_40ee90 : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_40eecb
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_5c6ef8]
        je public_40eec2
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_40eeb9
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_40eeb9 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_40eec2 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call ebx
        mov dword ptr ds : [esi+0x10], ebp
        public_40eecb : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_40eee2
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_40eee2 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov dword ptr ds : [esi+0x20], edi
        je public_40ef08
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_40eeff
        cmp cl, 0xFF
        je public_40eeff
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40ef08
        public_40eeff : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_40ef08 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40edf0)
        ASM_EXPORT_ENTRY_FIRST(0x40ee4f, public_40ee4f)
        ASM_EXPORT_ENTRY(0x40ee58, public_40ee58)
        ASM_EXPORT_ENTRY(0x40ee8e, public_40ee8e)
        ASM_EXPORT_ENTRY(0x40ee90, public_40ee90)
        ASM_EXPORT_ENTRY(0x40eeb9, public_40eeb9)
        ASM_EXPORT_ENTRY(0x40eec2, public_40eec2)
        ASM_EXPORT_ENTRY(0x40eecb, public_40eecb)
        ASM_EXPORT_ENTRY(0x40eee2, public_40eee2)
        ASM_EXPORT_ENTRY(0x40eeff, public_40eeff)
        ASM_EXPORT_ENTRY_LAST(0x40ef08, public_40ef08)
    }
}

#undef public_40ee4f
#undef public_40ee58
#undef public_40ee8e
#undef public_40ee90
#undef public_40eeb9
#undef public_40eec2
#undef public_40eecb
#undef public_40eee2
#undef public_40eeff
#undef public_40ef08

#pragma init_seg(compiler)
extern "C" void const* const public_40ee4f = __AsmFindLabelExport(&internal_40edf0, 0x40ee4f);
extern "C" void const* const public_40ee58 = __AsmFindLabelExport(&internal_40edf0, 0x40ee58);
extern "C" void const* const public_40ee8e = __AsmFindLabelExport(&internal_40edf0, 0x40ee8e);
extern "C" void const* const public_40ee90 = __AsmFindLabelExport(&internal_40edf0, 0x40ee90);
extern "C" void const* const public_40eeb9 = __AsmFindLabelExport(&internal_40edf0, 0x40eeb9);
extern "C" void const* const public_40eec2 = __AsmFindLabelExport(&internal_40edf0, 0x40eec2);
extern "C" void const* const public_40eecb = __AsmFindLabelExport(&internal_40edf0, 0x40eecb);
extern "C" void const* const public_40eee2 = __AsmFindLabelExport(&internal_40edf0, 0x40eee2);
extern "C" void const* const public_40eeff = __AsmFindLabelExport(&internal_40edf0, 0x40eeff);
extern "C" void const* const public_40ef08 = __AsmFindLabelExport(&internal_40edf0, 0x40ef08);
