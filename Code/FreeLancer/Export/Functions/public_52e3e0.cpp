#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_52e3ff _public_52e3ff
#define public_52e422 _public_52e422
#define public_52e455 _public_52e455
#define public_52e457 _public_52e457
#define public_52e47d _public_52e47d
#define public_52e4d0 _public_52e4d0
#define public_52e4d2 _public_52e4d2
#define public_52e4f8 _public_52e4f8
#define public_52e543 _public_52e543
#define public_52e545 _public_52e545
#define public_52e581 _public_52e581
#define public_52e5db _public_52e5db
#define public_52e623 _public_52e623
#define public_52e625 _public_52e625
#define public_52e654 _public_52e654
#define public_52e6fb _public_52e6fb
#define public_52e70c _public_52e70c
#define public_52e71a _public_52e71a

PROC_DECLARE(0x52e3e0, internal_52e3e0, public_52e3e0);
extern "C" NAKED register_t __cdecl internal_52e3e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push esi
        lea eax, ds:[ebx-0xB]
        cmp eax, 8
        push edi
        mov esi, ecx
        ja public_52e71a
/*FIXUP jmp dword ptr ds : [eax*4+public_52e734] @0x52e3f8*/
  JMPTB cmp eax, 0
  JMPTB je public_52e3ff
  JMPTB cmp eax, 1
  JMPTB je public_52e422
  JMPTB cmp eax, 2
  JMPTB je public_52e71a
  JMPTB cmp eax, 3
  JMPTB je public_52e71a
  JMPTB cmp eax, 4
  JMPTB je public_52e71a
  JMPTB cmp eax, 5
  JMPTB je public_52e70c
  JMPTB cmp eax, 6
  JMPTB je public_52e654
  JMPTB cmp eax, 7
  JMPTB je public_52e47d
  JMPTB cmp eax, 8
  JMPTB je public_52e5db
  JMPTB int 3
        public_52e3ff : nop
        call public_54baf0
        cmp dword ptr ds : [esi+8], eax
        jne public_52e71a
        mov eax, dword ptr ds : [public_67546c]
        push 0
        push eax
        call public_489e80
        add esp, 8
        jmp public_52e71a
        public_52e422 : nop
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52e71a
        test edi, edi
        je public_52e455
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_52e455
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52e455
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_52e457
        public_52e455 : nop
        xor eax, eax
        public_52e457 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6510]
        test al, al
        jne public_52e71a
        mov edx, dword ptr ds : [public_675468]
        push 0
        push edx
        call public_489e80
        add esp, 8
        jmp public_52e71a
        public_52e47d : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x154]
        test al, al
        jne public_52e71a
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52e4f8
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x158]
        test al, al
        jne public_52e4f8
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_52e4d0
        add eax, 0xC
        test eax, eax
        je public_52e4d0
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52e4d0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_52e4d2
        public_52e4d0 : nop
        xor eax, eax
        public_52e4d2 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52e4f8
        mov edx, dword ptr ds : [public_675464]
        push 0
        push edx
        call public_489e80
        add esp, 8
        public_52e4f8 : nop
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push eax
        call dword ptr ds : [public_5c68d0]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52e581
        mov ecx, dword ptr ds : [eax+0x70]
        test ecx, ecx
        je public_52e581
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_52e581
        test ecx, ecx
        je public_52e543
        mov ecx, edx
        jmp public_52e545
        public_52e543 : nop
        xor ecx, ecx
        public_52e545 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[ecx+0x54]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52e581
        mov edx, dword ptr ss : [esp+0x3C]
        push 0
        push ebp
        push edx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503f40
        public_52e581 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        pop ebp
        je public_52e71a
        mov al, byte ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x38]
        and al, 0xF8
        add edx, 0x24
        mov edi, dword ptr ds : [edx]
        or al, 2
        push 0
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], edi
        mov edi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edx
        call public_428680
        add esp, 0x10
        jmp public_52e71a
        public_52e5db : nop
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52e71a
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x158]
        test al, al
        jne public_52e71a
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_52e623
        add eax, 0xC
        test eax, eax
        je public_52e623
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52e623
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_52e625
        public_52e623 : nop
        xor eax, eax
        public_52e625 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52e71a
        mov edx, dword ptr ds : [public_675460]
        push 0
        push edx
        call public_489e80
        add esp, 8
        jmp public_52e71a
        public_52e654 : nop
        mov edi, dword ptr ss : [esp+0x38]
        cmp byte ptr ds : [edi], 0
        je public_52e6fb
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_52e6fb
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c68d0]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov cl, byte ptr ss : [esp+0x1C]
        and cl, 0xF8
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        add eax, 0x24
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi+0x14]
        or cl, 2
        push 0
        mov byte ptr ss : [esp+0x20], cl
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x38], eax
        call public_428680
        add esp, 0x10
        public_52e6fb : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+0xAC]
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax]
        jmp public_52e71a
        public_52e70c : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        public_52e71a : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push 0
        push ecx
        mov ecx, esi
        call public_531b20
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x52e3e0)
        ASM_EXPORT_ENTRY_SINGLE(0x52e5db, public_52e5db)
    }
}

#undef public_52e3ff
#undef public_52e422
#undef public_52e455
#undef public_52e457
#undef public_52e47d
#undef public_52e4d0
#undef public_52e4d2
#undef public_52e4f8
#undef public_52e543
#undef public_52e545
#undef public_52e581
#undef public_52e5db
#undef public_52e623
#undef public_52e625
#undef public_52e654
#undef public_52e6fb
#undef public_52e70c
#undef public_52e71a

#pragma init_seg(compiler)
extern "C" void const* const public_52e5db = __AsmFindLabelExport(&internal_52e3e0, 0x52e5db);
