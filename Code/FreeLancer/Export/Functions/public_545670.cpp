#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e250);
CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5154a0);
CLANG_FORWARD_PROC_SYMBOL(public_534730);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);
CLANG_FORWARD_PROC_SYMBOL(public_544230);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0f23);

#define public_5456ad _public_5456ad
#define public_5456d6 _public_5456d6
#define public_5456d8 _public_5456d8
#define public_54570c _public_54570c
#define public_54570e _public_54570e
#define public_54573b _public_54573b
#define public_5457b3 _public_5457b3
#define public_5457f9 _public_5457f9
#define public_5457fb _public_5457fb
#define public_545809 _public_545809
#define public_54582c _public_54582c
#define public_54582e _public_54582e
#define public_54583a _public_54583a
#define public_5458e7 _public_5458e7
#define public_545904 _public_545904
#define public_545929 _public_545929
#define public_54593d _public_54593d
#define public_545953 _public_545953
#define public_545966 _public_545966
#define public_545992 _public_545992
#define public_5459a3 _public_5459a3
#define public_5459c0 _public_5459c0
#define public_5459d7 _public_5459d7
#define public_5459ee _public_5459ee
#define public_545a30 _public_545a30
#define public_545a3b _public_545a3b

PROC_DECLARE(0x545670, internal_545670, public_545670);
extern "C" NAKED register_t __cdecl internal_545670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5c0f23 @0x545672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0f23
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE8
        mov eax, dword ptr ss : [esp+0xF8]
        push ebp
        add eax, 0xFFFFFFFE
        cmp eax, 7
        mov ebp, ecx
        push esi
        mov dword ptr ss : [esp+0x18], ebp
        ja public_545a3b
/*FIXUP jmp dword ptr ds : [eax*4+public_545a6c] @0x5456a6*/
  JMPTB cmp eax, 0
  JMPTB je public_5456ad
  JMPTB cmp eax, 1
  JMPTB je public_5459d7
  JMPTB cmp eax, 2
  JMPTB je public_5459c0
  JMPTB cmp eax, 3
  JMPTB je public_545a3b
  JMPTB cmp eax, 4
  JMPTB je public_545a3b
  JMPTB cmp eax, 5
  JMPTB je public_545a3b
  JMPTB cmp eax, 6
  JMPTB je public_545a3b
  JMPTB cmp eax, 7
  JMPTB je public_5459ee
  JMPTB int 3
        public_5456ad : nop
        add ebp, 0xFFFFFF54
        test ebp, ebp
        je public_5456d6
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_5456d6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5456d6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5456d8
        public_5456d6 : nop
        xor eax, eax
        public_5456d8 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [eax+0xE0]
        cmp byte ptr ds : [edx], 0
        je public_54573b
        test ebp, ebp
        je public_54570c
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_54570c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_54570c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_54570e
        public_54570c : nop
        xor eax, eax
        public_54570e : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+0xE0]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        jne public_5457b3
        public_54573b : nop
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        public_5457b3 : nop
        lea ecx, ss:[esp+0x98]
        call public_40e250
        mov eax, dword ptr ss : [esp+0x104]
        cmp byte ptr ds : [eax], 0
        mov dword ptr ss : [esp+0xF8], 0
        je public_545809
        test ebp, ebp
        je public_5457f9
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_5457f9
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5457f9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5457fb
        public_5457f9 : nop
        xor eax, eax
        public_5457fb : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x58
        jmp public_54583a
        public_545809 : nop
        test ebp, ebp
        je public_54582c
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_54582c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_54582c
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_54582e
        public_54582c : nop
        xor eax, eax
        public_54582e : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x5C
        public_54583a : nop
        push eax
        call public_42ae40
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 4
        push edi
        mov dword ptr ss : [esp+0xB4], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x94], ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x98], edx
        call dword ptr ds : [eax+0x1C]
        push 0x25
        mov esi, eax
        call public_5792b0
        add esp, 4
        test eax, eax
        pop edi
        je public_5459a3
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_5154a0
        push 0x26
        mov byte ptr ss : [esp+0xFC], 1
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5458e7
        mov eax, dword ptr ss : [esp+0xA0]
        test eax, eax
        je public_5458e7
        mov edx, dword ptr ds : [eax]
        cmp byte ptr ds : [edx], 0
        je public_5458e7
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        public_5458e7 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        test eax, eax
        je public_545904
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0xC], eax
        public_545904 : nop
        fld dword ptr ss : [esp+0xE0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_545929
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        public_545929 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_54593d
        lea edx, ss:[esp+0x68]
        push edx
        push esi
        push ebp
        call public_4f7d20
        public_54593d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_545953
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x68]
        push edx
        push esi
        call dword ptr ds : [eax+0x94]
        public_545953 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_545966
        lea eax, ss:[esp+0x68]
        push eax
        push esi
        call public_5377c0
        public_545966 : nop
        lea ecx, ss:[esp+0x98]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_674c60
        call public_544230
        test al, al
        je public_545992
        test ebp, ebp
        je public_545992
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[ebp+0x28]
        call public_4fcea0
        public_545992 : nop
        lea ecx, ss:[esp+8]
        mov byte ptr ss : [esp+0xF8], 0
        call public_502d90
        public_5459a3 : nop
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xF8], 0xFFFFFFFF
        call public_40e2a0
        mov ebp, dword ptr ss : [esp+0x18]
        jmp public_545a3b
        public_5459c0 : nop
        call public_54baf0
        lea ecx, ss:[ebp-0xAC]
        cmp ecx, eax
        jne public_545a3b
        mov edx, dword ptr ds : [public_678b58]
        jmp public_545a30
        public_5459d7 : nop
        call public_54baf0
        lea ecx, ss:[ebp-0xAC]
        cmp ecx, eax
        jne public_545a3b
        mov edx, dword ptr ds : [public_678b54]
        jmp public_545a30
        public_5459ee : nop
        call public_54baf0
        lea ecx, ss:[ebp-0xAC]
        cmp ecx, eax
        jne public_545a3b
        mov esi, dword ptr ss : [esp+0x104]
        test esi, esi
        je public_545a3b
        mov ecx, esi
        call dword ptr ds : [public_5c6578]
        test ah, 0x3F
        je public_545a3b
        mov ecx, esi
        call dword ptr ds : [public_5c6598]
        fcomp qword ptr ds : [public_5d5b58]
        fnstsw ax
        test ah, 5
        jp public_545a3b
        mov edx, dword ptr ds : [public_678b4c]
        public_545a30 : nop
        push 0
        push edx
        call public_489e80
        add esp, 8
        public_545a3b : nop
        mov eax, dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [esp+0x100]
        push eax
        push ecx
        mov ecx, ebp
        call public_534730
        mov ecx, dword ptr ss : [esp+0xF0]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 8
        UNREACHABLE_TRAP(0x545670)
        ASM_EXPORT_ENTRY_SINGLE(0x5459ee, public_5459ee)
    }
}

#undef public_5456ad
#undef public_5456d6
#undef public_5456d8
#undef public_54570c
#undef public_54570e
#undef public_54573b
#undef public_5457b3
#undef public_5457f9
#undef public_5457fb
#undef public_545809
#undef public_54582c
#undef public_54582e
#undef public_54583a
#undef public_5458e7
#undef public_545904
#undef public_545929
#undef public_54593d
#undef public_545953
#undef public_545966
#undef public_545992
#undef public_5459a3
#undef public_5459c0
#undef public_5459d7
#undef public_5459ee
#undef public_545a30
#undef public_545a3b

#pragma init_seg(compiler)
extern "C" void const* const public_5459ee = __AsmFindLabelExport(&internal_545670, 0x5459ee);
