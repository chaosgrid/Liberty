#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534460);

#define public_5344a9 _public_5344a9
#define public_5344ab _public_5344ab
#define public_5344e5 _public_5344e5
#define public_534512 _public_534512
#define public_53453f _public_53453f
#define public_53457b _public_53457b
#define public_534590 _public_534590
#define public_5345b3 _public_5345b3
#define public_5345b5 _public_5345b5
#define public_534601 _public_534601
#define public_53462f _public_53462f
#define public_534650 _public_534650
#define public_534673 _public_534673
#define public_534675 _public_534675
#define public_5346ba _public_5346ba
#define public_5346e7 _public_5346e7
#define public_5346f8 _public_5346f8
#define public_534706 _public_534706

PROC_DECLARE(0x534460, internal_534460, public_534460);
extern "C" NAKED register_t __cdecl internal_534460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x2C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi]
        sub eax, 0x18
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0xF], 0
        je public_5346ba
        dec eax
        jne public_534706
        test edi, edi
        mov ecx, dword ptr ds : [esi+0x10]
        je public_5344a9
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_5344a9
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5344a9
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_5344ab
        public_5344a9 : nop
        xor eax, eax
        public_5344ab : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov ebp, eax
        test ebp, ebp
        je public_534706
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        test al, al
        jne public_534706
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, 4
        ja public_534706
/*FIXUP jmp dword ptr ds : [esi*4+public_534714] @0x5344de*/
  JMPTB cmp esi, 0
  JMPTB je public_5344e5
  JMPTB cmp esi, 1
  JMPTB je public_534512
  JMPTB cmp esi, 2
  JMPTB je public_53453f
  JMPTB cmp esi, 3
  JMPTB je public_53457b
  JMPTB cmp esi, 4
  JMPTB je public_53462f
  JMPTB int 3
        public_5344e5 : nop
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+8]
        push eax
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[edi+4]
        call dword ptr ds : [edx+0x4C]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        add esp, 0x2C
        ret 4
        public_534512 : nop
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+8]
        push eax
        push 1
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ds:[edi+4]
        call dword ptr ds : [edx+0x4C]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        add esp, 0x2C
        ret 4
        public_53453f : nop
        mov edx, dword ptr ds : [public_673344]
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+8]
        lea esi, ds:[edi+4]
        mov edi, dword ptr ds : [esi]
        push edx
        mov dword ptr ss : [esp+0x1C], ecx
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        neg al
        sbb al, al
        inc al
        lea ecx, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edi+0x4C]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        add esp, 0x2C
        ret 4
        public_53457b : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c64f4]
        lea esp, ss:[esp]
        public_534590 : nop
        test edi, edi
        je public_5345b3
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_5345b3
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5345b3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5345b5
        public_5345b3 : nop
        xor eax, eax
        public_5345b5 : nop
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        je public_534706
        cmp esi, ebp
        mov ecx, esi
        je public_534601
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        test al, al
        je public_534590
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push eax
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ds:[edi+4]
        call dword ptr ds : [edx+0x4C]
        jmp public_534590
        public_534601 : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        test al, al
        jne public_534590
        mov edx, dword ptr ds : [edi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        push 1
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x4C]
        jmp public_534590
        public_53462f : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+4]
        mov ebp, dword ptr ss : [ebp+0x14]
        push ebp
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x40], al
        call dword ptr ds : [public_5c64f4]
        mov ebp, dword ptr ds : [public_5c64f0]
        nop 
        public_534650 : nop
        test edi, edi
        je public_534673
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_534673
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_534673
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_534675
        public_534673 : nop
        xor eax, eax
        public_534675 : nop
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[eax+0xE4]
        call ebp
        mov esi, eax
        test esi, esi
        je public_534706
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        cmp al, byte ptr ss : [esp+0x3C]
        je public_534650
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ds:[edi+4]
        call dword ptr ds : [edx+0x4C]
        jmp public_534650
        public_5346ba : nop
        fld dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x1C]
        test eax, eax
        mov eax, dword ptr ds : [public_673344]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x20]
        push eax
        lea eax, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x34]
        push eax
        jne public_5346e7
        push 0
        push 0
        jmp public_5346f8
        public_5346e7 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x10]
        push 1
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x4C], ecx
        public_5346f8 : nop
        mov edx, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+4]
        call dword ptr ds : [edx+0x34]
        mov byte ptr ss : [esp+0xF], 1
        public_534706 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x534460)
        ASM_EXPORT_ENTRY_SINGLE(0x53462f, public_53462f)
    }
}

#undef public_5344a9
#undef public_5344ab
#undef public_5344e5
#undef public_534512
#undef public_53453f
#undef public_53457b
#undef public_534590
#undef public_5345b3
#undef public_5345b5
#undef public_534601
#undef public_53462f
#undef public_534650
#undef public_534673
#undef public_534675
#undef public_5346ba
#undef public_5346e7
#undef public_5346f8
#undef public_534706

#pragma init_seg(compiler)
extern "C" void const* const public_53462f = __AsmFindLabelExport(&internal_534460, 0x53462f);
