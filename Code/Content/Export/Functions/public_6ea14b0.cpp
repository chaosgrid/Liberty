#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa93b9);

#define public_6ea150f _public_6ea150f
#define public_6ea1518 _public_6ea1518
#define public_6ea154e _public_6ea154e
#define public_6ea1550 _public_6ea1550
#define public_6ea1579 _public_6ea1579
#define public_6ea1582 _public_6ea1582
#define public_6ea158b _public_6ea158b
#define public_6ea15a2 _public_6ea15a2
#define public_6ea15bf _public_6ea15bf
#define public_6ea15c8 _public_6ea15c8

PROC_DECLARE(0x6ea14b0, internal_6ea14b0, public_6ea14b0);
/* CHUNK of public_6ea1220 */
extern "C" NAKED register_t __cdecl internal_6ea14b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fa93b9 @0x6ea14b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa93b9
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
        mov eax, dword ptr ds : [public_6fb3304]
        mov ebp, dword ptr ds : [eax]
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_6ea150f
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_6ea150f
        cmp al, 0xFF
        je public_6ea150f
        push 1
        call dword ptr ds : [public_6fb32f8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb32fc]
        xor edi, edi
        public_6ea150f : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_6ea1518
        mov ebp, eax
        public_6ea1518 : nop
        cmp ebp, edi
        jbe public_6ea1550
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6fb3388]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ea154e
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        public_6ea154e : nop
        xor edi, edi
        public_6ea1550 : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_6ea158b
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_6fb32a8]
        je public_6ea1582
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_6ea1579
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_6ea1579 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_6ea1582 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call ebx
        mov dword ptr ds : [esi+0x10], ebp
        public_6ea158b : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_6ea15a2
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_6ea15a2 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov dword ptr ds : [esi+0x20], edi
        je public_6ea15c8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ea15bf
        cmp cl, 0xFF
        je public_6ea15bf
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea15c8
        public_6ea15bf : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea15c8 : nop
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
        UNREACHABLE_TRAP(0x6ea14b0)
        ASM_EXPORT_ENTRY_FIRST(0x6ea150f, public_6ea150f)
        ASM_EXPORT_ENTRY(0x6ea1518, public_6ea1518)
        ASM_EXPORT_ENTRY(0x6ea154e, public_6ea154e)
        ASM_EXPORT_ENTRY(0x6ea1550, public_6ea1550)
        ASM_EXPORT_ENTRY(0x6ea1579, public_6ea1579)
        ASM_EXPORT_ENTRY(0x6ea1582, public_6ea1582)
        ASM_EXPORT_ENTRY(0x6ea158b, public_6ea158b)
        ASM_EXPORT_ENTRY(0x6ea15a2, public_6ea15a2)
        ASM_EXPORT_ENTRY(0x6ea15bf, public_6ea15bf)
        ASM_EXPORT_ENTRY_LAST(0x6ea15c8, public_6ea15c8)
    }
}

#undef public_6ea150f
#undef public_6ea1518
#undef public_6ea154e
#undef public_6ea1550
#undef public_6ea1579
#undef public_6ea1582
#undef public_6ea158b
#undef public_6ea15a2
#undef public_6ea15bf
#undef public_6ea15c8

#pragma init_seg(compiler)
extern "C" void const* const public_6ea150f = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea150f);
extern "C" void const* const public_6ea1518 = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea1518);
extern "C" void const* const public_6ea154e = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea154e);
extern "C" void const* const public_6ea1550 = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea1550);
extern "C" void const* const public_6ea1579 = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea1579);
extern "C" void const* const public_6ea1582 = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea1582);
extern "C" void const* const public_6ea158b = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea158b);
extern "C" void const* const public_6ea15a2 = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea15a2);
extern "C" void const* const public_6ea15bf = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea15bf);
extern "C" void const* const public_6ea15c8 = __AsmFindLabelExport(&internal_6ea14b0, 0x6ea15c8);
