#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3daf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d414d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d416d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d419c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ce8);

#define public_6d41510 _public_6d41510
#define public_6d41550 _public_6d41550
#define public_6d41559 _public_6d41559
#define public_6d41590 _public_6d41590
#define public_6d41594 _public_6d41594
#define public_6d415a1 _public_6d415a1
#define public_6d415ae _public_6d415ae
#define public_6d415cf _public_6d415cf
#define public_6d415d7 _public_6d415d7
#define public_6d415e5 _public_6d415e5
#define public_6d415ee _public_6d415ee
#define public_6d415f2 _public_6d415f2
#define public_6d41601 _public_6d41601
#define public_6d4166a _public_6d4166a
#define public_6d41670 _public_6d41670
#define public_6d41695 _public_6d41695

PROC_DECLARE(0x6d414d0, internal_6d414d0, public_6d414d0);
/* CHUNK of public_6d40b10 */
extern "C" NAKED register_t __cdecl internal_6d414d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d62ce8 @0x6d414d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ce8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+8], esi
        je public_6d41601
        push ebx
        push ebp
        nop 
        lea esp, ss:[esp]
        public_6d41510 : nop
        mov ebx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [public_6d64b80]
        mov ebp, dword ptr ds : [eax]
        add esi, 0x10
        test ebx, ebx
        je public_6d41550
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_6d41550
        cmp al, 0xFF
        je public_6d41550
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64b08]
        mov edi, dword ptr ss : [esp+0x14]
        public_6d41550 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_6d41559
        mov ebp, eax
        public_6d41559 : nop
        test ebp, ebp
        jbe public_6d41594
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6d64c90]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d41590
        mov eax, dword ptr ds : [esi+4]
        add eax, edi
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [eax], 0
        public_6d41590 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6d41594 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6d415a1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d415a1 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_6d415ae
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d415ae : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x29]
        test dl, dl
        jne public_6d415cf
        push eax
        call public_6d416d0
        add esp, 4
        jmp public_6d415ee
        public_6d415cf : nop
        mov eax, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d415e5
        public_6d415d7 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d415d7
        public_6d415e5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [ecx+8], eax
        je public_6d415f2
        public_6d415ee : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6d415f2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6d41510
        pop ebp
        pop ebx
        public_6d41601 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax]
        mov esi, eax
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], edx
        je public_6d4166a
        lea edx, ss:[esp+8]
        push edx
        mov ecx, edi
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax]
        jne public_6d4166a
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, ecx
        jne public_6d4166a
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, edi
        call public_6d41f10
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_6d5c540
        jmp public_6d41695
        public_6d4166a : nop
        cmp edx, esi
        je public_6d41695
        mov edi, edi
        public_6d41670 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6d419c0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6d3daf0
        cmp dword ptr ss : [esp+0xC], esi
        jne public_6d41670
        public_6d41695 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ds : [edi+8]
        xor esi, esi
        push edx
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+0x10], esi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d414d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d41510, public_6d41510)
        ASM_EXPORT_ENTRY(0x6d41550, public_6d41550)
        ASM_EXPORT_ENTRY(0x6d41559, public_6d41559)
        ASM_EXPORT_ENTRY(0x6d41590, public_6d41590)
        ASM_EXPORT_ENTRY(0x6d41594, public_6d41594)
        ASM_EXPORT_ENTRY(0x6d415a1, public_6d415a1)
        ASM_EXPORT_ENTRY(0x6d415ae, public_6d415ae)
        ASM_EXPORT_ENTRY(0x6d415cf, public_6d415cf)
        ASM_EXPORT_ENTRY(0x6d415d7, public_6d415d7)
        ASM_EXPORT_ENTRY(0x6d415e5, public_6d415e5)
        ASM_EXPORT_ENTRY(0x6d415ee, public_6d415ee)
        ASM_EXPORT_ENTRY(0x6d415f2, public_6d415f2)
        ASM_EXPORT_ENTRY(0x6d41601, public_6d41601)
        ASM_EXPORT_ENTRY(0x6d4166a, public_6d4166a)
        ASM_EXPORT_ENTRY(0x6d41670, public_6d41670)
        ASM_EXPORT_ENTRY_LAST(0x6d41695, public_6d41695)
    }
}

#undef public_6d41510
#undef public_6d41550
#undef public_6d41559
#undef public_6d41590
#undef public_6d41594
#undef public_6d415a1
#undef public_6d415ae
#undef public_6d415cf
#undef public_6d415d7
#undef public_6d415e5
#undef public_6d415ee
#undef public_6d415f2
#undef public_6d41601
#undef public_6d4166a
#undef public_6d41670
#undef public_6d41695

#pragma init_seg(compiler)
extern "C" void const* const public_6d41510 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41510);
extern "C" void const* const public_6d41550 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41550);
extern "C" void const* const public_6d41559 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41559);
extern "C" void const* const public_6d41590 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41590);
extern "C" void const* const public_6d41594 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41594);
extern "C" void const* const public_6d415a1 = __AsmFindLabelExport(&internal_6d414d0, 0x6d415a1);
extern "C" void const* const public_6d415ae = __AsmFindLabelExport(&internal_6d414d0, 0x6d415ae);
extern "C" void const* const public_6d415cf = __AsmFindLabelExport(&internal_6d414d0, 0x6d415cf);
extern "C" void const* const public_6d415d7 = __AsmFindLabelExport(&internal_6d414d0, 0x6d415d7);
extern "C" void const* const public_6d415e5 = __AsmFindLabelExport(&internal_6d414d0, 0x6d415e5);
extern "C" void const* const public_6d415ee = __AsmFindLabelExport(&internal_6d414d0, 0x6d415ee);
extern "C" void const* const public_6d415f2 = __AsmFindLabelExport(&internal_6d414d0, 0x6d415f2);
extern "C" void const* const public_6d41601 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41601);
extern "C" void const* const public_6d4166a = __AsmFindLabelExport(&internal_6d414d0, 0x6d4166a);
extern "C" void const* const public_6d41670 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41670);
extern "C" void const* const public_6d41695 = __AsmFindLabelExport(&internal_6d414d0, 0x6d41695);
