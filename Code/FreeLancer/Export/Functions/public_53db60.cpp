#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53db95 _public_53db95
#define public_53db97 _public_53db97
#define public_53dbb8 _public_53dbb8
#define public_53dbf8 _public_53dbf8
#define public_53dc26 _public_53dc26
#define public_53dc7e _public_53dc7e
#define public_53ddcf _public_53ddcf
#define public_53ddef _public_53ddef
#define public_53de3d _public_53de3d
#define public_53de4b _public_53de4b

PROC_DECLARE(0x53db60, internal_53db60, public_53db60);
extern "C" NAKED register_t __cdecl internal_53db60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xB8
        push ebx
        push esi
        push edi
        call public_54baf0
        xor ebx, ebx
        cmp eax, ebx
        je public_53de4b
        add eax, 0xC
        cmp eax, ebx
        je public_53db95
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_53db95
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_53db97
        public_53db95 : nop
        xor ecx, ecx
        public_53db97 : nop
        call dword ptr ds : [public_5c62e8]
        mov esi, dword ptr ss : [esp+0xCC]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        cmp eax, 5
        ja public_53de4b
/*FIXUP jmp dword ptr ds : [eax*4+public_53de58] @0x53dbb1*/
  JMPTB cmp eax, 0
  JMPTB je public_53ddcf
  JMPTB cmp eax, 1
  JMPTB je public_53dbf8
  JMPTB cmp eax, 2
  JMPTB je public_53dc26
  JMPTB cmp eax, 3
  JMPTB je public_53ddef
  JMPTB cmp eax, 4
  JMPTB je public_53dc7e
  JMPTB cmp eax, 5
  JMPTB je public_53dbb8
  JMPTB int 3
        public_53dbb8 : nop
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x1C], 6
        call dword ptr ds : [public_5c6530]
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6478]
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c647c]
        pop edi
        pop esi
        pop ebx
        add esp, 0xB8
        ret 8
        public_53dbf8 : nop
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], 1
        mov dword ptr ss : [esp+0x14], 0x14
        call dword ptr ds : [public_5c6a68]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x50], edx
        lea eax, ss:[esp+0x44]
        jmp public_53de3d
        public_53dc26 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], 1
        mov dword ptr ss : [esp+0x14], 7
        call dword ptr ds : [public_5c6518]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov cl, byte ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov byte ptr ss : [esp+0x2C], cl
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        lea eax, ss:[esp+0x18]
        jmp public_53de3d
        public_53dc7e : nop
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], 1
        mov dword ptr ss : [esp+0x14], 2
        call dword ptr ds : [public_5c6520]
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x60], edx
        lea eax, ds:[esi+0x44]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], ecx
        lea edx, ds:[esi+0x54]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        lea eax, ds:[esi+0x60]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x88], eax
        lea ecx, ds:[esi+0x78]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0xA0], ecx
        lea edx, ds:[esi+0x6C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x90], ecx
        mov ecx, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x94], edx
        mov dl, byte ptr ds : [esi+0x8C]
        mov dword ptr ss : [esp+0x8C], eax
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0xA8], ecx
        mov cl, byte ptr ds : [esi+0x8E]
        mov byte ptr ss : [esp+0xAC], dl
        mov dl, byte ptr ds : [esi+0x8F]
        mov dword ptr ss : [esp+0xA4], eax
        mov al, byte ptr ds : [esi+0x8D]
        mov byte ptr ss : [esp+0xAE], cl
        mov ecx, dword ptr ds : [esi+0x20]
        mov byte ptr ss : [esp+0xAF], dl
        mov edx, dword ptr ds : [esi+0x24]
        mov byte ptr ss : [esp+0xAD], al
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0xB4], ecx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xB8], edx
        push ecx
        mov dword ptr ss : [esp+0xB4], eax
        mov al, byte ptr ds : [esi+0x90]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0xC8], al
        call dword ptr ds : [public_5c6530]
        pop edi
        pop esi
        pop ebx
        add esp, 0xB8
        ret 8
        public_53ddcf : nop
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [public_5c6a64]
        lea eax, ss:[esp+0x44]
        jmp public_53de3d
        public_53ddef : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], 1
        mov dword ptr ss : [esp+0x14], 0x11
        call dword ptr ds : [public_5c6a60]
        mov edx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        lea eax, ss:[esp+0x18]
        public_53de3d : nop
        lea ecx, ss:[esp+0xC]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6530]
        public_53de4b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xB8
        ret 8
        UNREACHABLE_TRAP(0x53db60)
        ASM_EXPORT_ENTRY_SINGLE(0x53dbb8, public_53dbb8)
    }
}

#undef public_53db95
#undef public_53db97
#undef public_53dbb8
#undef public_53dbf8
#undef public_53dc26
#undef public_53dc7e
#undef public_53ddcf
#undef public_53ddef
#undef public_53de3d
#undef public_53de4b

#pragma init_seg(compiler)
extern "C" void const* const public_53dbb8 = __AsmFindLabelExport(&internal_53db60, 0x53dbb8);
