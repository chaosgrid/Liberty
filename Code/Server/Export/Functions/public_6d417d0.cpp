#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d416d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d417d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d419c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41f50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62d08);

#define public_6d41807 _public_6d41807
#define public_6d41841 _public_6d41841
#define public_6d4184a _public_6d4184a
#define public_6d41883 _public_6d41883
#define public_6d41890 _public_6d41890
#define public_6d4189d _public_6d4189d
#define public_6d418ba _public_6d418ba
#define public_6d418c2 _public_6d418c2
#define public_6d418cc _public_6d418cc
#define public_6d418d1 _public_6d418d1
#define public_6d418d3 _public_6d418d3
#define public_6d418e1 _public_6d418e1
#define public_6d4194e _public_6d4194e
#define public_6d41952 _public_6d41952
#define public_6d41979 _public_6d41979

PROC_DECLARE(0x6d417d0, internal_6d417d0, public_6d417d0);
/* CHUNK of public_6d40af0 */
extern "C" NAKED register_t __cdecl internal_6d417d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d62d08 @0x6d417d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62d08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov edx, ecx
        push edi
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x2C], 0
        je public_6d418e1
        push ebp
        public_6d41807 : nop
        mov edi, dword ptr ds : [ebx+0x14]
        test edi, edi
        mov eax, dword ptr ds : [public_6d64b64]
        mov ebp, dword ptr ds : [eax]
        lea esi, ds:[ebx+0x10]
        je public_6d41841
        mov al, byte ptr ds : [edi-1]
        test al, al
        je public_6d41841
        cmp al, 0xFF
        je public_6d41841
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b58]
        push edi
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b24]
        public_6d41841 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_6d4184a
        mov ebp, eax
        public_6d4184a : nop
        test ebp, ebp
        jbe public_6d41883
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp*2]
        push edx
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d41883
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        lea edi, ds:[ecx+edi*2]
        mov word ptr ds : [edi], 0
        public_6d41883 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6d41890
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d41890 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_6d4189d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d4189d : nop
        xor eax, eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ebx+8]
        mov cl, byte ptr ds : [eax+0x29]
        test cl, cl
        jne public_6d418ba
        push eax
        call public_6d416d0
        add esp, 4
        jmp public_6d418d1
        public_6d418ba : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp ebx, dword ptr ds : [eax+8]
        jne public_6d418cc
        public_6d418c2 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [eax+8]
        je public_6d418c2
        public_6d418cc : nop
        cmp dword ptr ds : [ebx+8], eax
        je public_6d418d3
        public_6d418d1 : nop
        mov ebx, eax
        public_6d418d3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6d41807
        pop ebp
        public_6d418e1 : nop
        mov esi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d4194e
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edx
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d4194e
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+4]
        cmp esi, eax
        jne public_6d4194e
        mov eax, dword ptr ds : [eax+4]
        mov esi, edx
        push eax
        mov ecx, esi
        call public_6d41f50
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6d41979
        public_6d4194e : nop
        cmp ecx, esi
        je public_6d41979
        public_6d41952 : nop
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d419c0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_6d3dfa0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d41952
        public_6d41979 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        call public_6d5ffb0
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        push eax
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d417d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d41807, public_6d41807)
        ASM_EXPORT_ENTRY(0x6d41841, public_6d41841)
        ASM_EXPORT_ENTRY(0x6d4184a, public_6d4184a)
        ASM_EXPORT_ENTRY(0x6d41883, public_6d41883)
        ASM_EXPORT_ENTRY(0x6d41890, public_6d41890)
        ASM_EXPORT_ENTRY(0x6d4189d, public_6d4189d)
        ASM_EXPORT_ENTRY(0x6d418ba, public_6d418ba)
        ASM_EXPORT_ENTRY(0x6d418c2, public_6d418c2)
        ASM_EXPORT_ENTRY(0x6d418cc, public_6d418cc)
        ASM_EXPORT_ENTRY(0x6d418d1, public_6d418d1)
        ASM_EXPORT_ENTRY(0x6d418d3, public_6d418d3)
        ASM_EXPORT_ENTRY(0x6d418e1, public_6d418e1)
        ASM_EXPORT_ENTRY(0x6d4194e, public_6d4194e)
        ASM_EXPORT_ENTRY(0x6d41952, public_6d41952)
        ASM_EXPORT_ENTRY_LAST(0x6d41979, public_6d41979)
    }
}

#undef public_6d41807
#undef public_6d41841
#undef public_6d4184a
#undef public_6d41883
#undef public_6d41890
#undef public_6d4189d
#undef public_6d418ba
#undef public_6d418c2
#undef public_6d418cc
#undef public_6d418d1
#undef public_6d418d3
#undef public_6d418e1
#undef public_6d4194e
#undef public_6d41952
#undef public_6d41979

#pragma init_seg(compiler)
extern "C" void const* const public_6d41807 = __AsmFindLabelExport(&internal_6d417d0, 0x6d41807);
extern "C" void const* const public_6d41841 = __AsmFindLabelExport(&internal_6d417d0, 0x6d41841);
extern "C" void const* const public_6d4184a = __AsmFindLabelExport(&internal_6d417d0, 0x6d4184a);
extern "C" void const* const public_6d41883 = __AsmFindLabelExport(&internal_6d417d0, 0x6d41883);
extern "C" void const* const public_6d41890 = __AsmFindLabelExport(&internal_6d417d0, 0x6d41890);
extern "C" void const* const public_6d4189d = __AsmFindLabelExport(&internal_6d417d0, 0x6d4189d);
extern "C" void const* const public_6d418ba = __AsmFindLabelExport(&internal_6d417d0, 0x6d418ba);
extern "C" void const* const public_6d418c2 = __AsmFindLabelExport(&internal_6d417d0, 0x6d418c2);
extern "C" void const* const public_6d418cc = __AsmFindLabelExport(&internal_6d417d0, 0x6d418cc);
extern "C" void const* const public_6d418d1 = __AsmFindLabelExport(&internal_6d417d0, 0x6d418d1);
extern "C" void const* const public_6d418d3 = __AsmFindLabelExport(&internal_6d417d0, 0x6d418d3);
extern "C" void const* const public_6d418e1 = __AsmFindLabelExport(&internal_6d417d0, 0x6d418e1);
extern "C" void const* const public_6d4194e = __AsmFindLabelExport(&internal_6d417d0, 0x6d4194e);
extern "C" void const* const public_6d41952 = __AsmFindLabelExport(&internal_6d417d0, 0x6d41952);
extern "C" void const* const public_6d41979 = __AsmFindLabelExport(&internal_6d417d0, 0x6d41979);
