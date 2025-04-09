#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_503a80);
CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5444a0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0edd);

#define public_54450d _public_54450d
#define public_54451c _public_54451c
#define public_54453d _public_54453d
#define public_54455e _public_54455e
#define public_54457f _public_54457f
#define public_5445ac _public_5445ac
#define public_5445b3 _public_5445b3
#define public_5445bc _public_5445bc
#define public_5445d4 _public_5445d4
#define public_5445d6 _public_5445d6
#define public_5445e7 _public_5445e7
#define public_544608 _public_544608
#define public_54460a _public_54460a
#define public_544613 _public_544613
#define public_544631 _public_544631
#define public_544641 _public_544641
#define public_544650 _public_544650
#define public_544667 _public_544667
#define public_544677 _public_544677
#define public_544686 _public_544686
#define public_5446b3 _public_5446b3
#define public_5446c9 _public_5446c9
#define public_5446de _public_5446de

PROC_DECLARE(0x5444a0, internal_5444a0, public_5444a0);
extern "C" NAKED register_t __cdecl internal_5444a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0edd @0x5444a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0edd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+0xA0]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi-0xC], offset public_5dfd6c
        mov dword ptr ds : [esi-8], offset public_5dfcec
        mov dword ptr ds : [esi], offset public_5dfce0
        mov dword ptr ss : [ebp], offset public_5dfcd8
        lea ecx, ds:[esi+0xFC]
        mov dword ptr ss : [esp+0x1C], 3
        call public_420f70
        mov ecx, dword ptr ds : [esi+0xF8]
        xor ebx, ebx
        cmp ecx, ebx
        je public_54450d
        call dword ptr ds : [public_5c65c8]
        mov dword ptr ds : [esi+0xF8], ebx
        public_54450d : nop
        mov ecx, dword ptr ds : [esi+0x13C]
        cmp ecx, ebx
        je public_54451c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_54451c : nop
        mov ecx, dword ptr ds : [esi+0x140]
        cmp ecx, ebx
        je public_54453d
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x140]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x140], ebx
        public_54453d : nop
        mov ecx, dword ptr ds : [esi+0xE4]
        cmp ecx, ebx
        je public_54455e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xE4], ebx
        public_54455e : nop
        push edi
        mov edi, dword ptr ds : [esi+0x17C]
        cmp edi, ebx
        je public_54457f
        mov ecx, edi
        call public_503a80
        push edi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x17C], ebx
        public_54457f : nop
        cmp dword ptr ds : [esi+4], ebx
        je public_544613
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_5445bc
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_5445ac
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_5445ac
        mov edi, dword ptr ds : [eax+0xB4]
        jmp public_5445b3
        public_5445ac : nop
        call public_54bb00
        mov edi, eax
        public_5445b3 : nop
        call public_54bb00
        cmp edi, eax
        jne public_5445e7
        public_5445bc : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_5445d4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5445d6
        public_5445d4 : nop
        xor eax, eax
        public_5445d6 : nop
        mov ecx, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x94]
        public_5445e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi-0xC]
        neg eax
        sbb eax, eax
        and eax, ebp
        cmp ecx, ebx
        je public_544608
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_54460a
        public_544608 : nop
        xor ecx, ecx
        public_54460a : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xBC]
        public_544613 : nop
        lea edi, ds:[esi+0x154]
        mov dword ptr ss : [esp+0x14], edi
        mov ecx, dword ptr ds : [edi+0x1C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x20], 4
        je public_544631
        call public_4f7a90
        mov dword ptr ds : [edi+0x1C], ebx
        public_544631 : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_544641
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x18], ebx
        public_544641 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        cmp ecx, ebx
        je public_544650
        call public_537ad0
        mov dword ptr ds : [edi+0x20], ebx
        public_544650 : nop
        mov dword ptr ds : [edi+0x14], ebx
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x20], 2
        je public_544667
        call public_4f7a90
        mov dword ptr ds : [edi+0xC], ebx
        public_544667 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebx
        je public_544677
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        public_544677 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        cmp ecx, ebx
        je public_544686
        call public_537ad0
        mov dword ptr ds : [edi+0x10], ebx
        public_544686 : nop
        lea ecx, ds:[esi+0xFC]
        mov dword ptr ds : [edi+4], ebx
        mov byte ptr ss : [esp+0x20], 1
        call public_420d10
        mov ecx, dword ptr ds : [esi+0xF0]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x20], bl
        pop edi
        je public_5446b3
        call public_4f7a90
        mov dword ptr ds : [esi+0xF0], ebx
        public_5446b3 : nop
        mov eax, dword ptr ds : [esi+0xEC]
        cmp eax, ebx
        je public_5446c9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xEC], ebx
        public_5446c9 : nop
        mov ecx, dword ptr ds : [esi+0xF4]
        cmp ecx, ebx
        je public_5446de
        call public_537ad0
        mov dword ptr ds : [esi+0xF4], ebx
        public_5446de : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_532d40
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5444a0)
    }
}

#undef public_54450d
#undef public_54451c
#undef public_54453d
#undef public_54455e
#undef public_54457f
#undef public_5445ac
#undef public_5445b3
#undef public_5445bc
#undef public_5445d4
#undef public_5445d6
#undef public_5445e7
#undef public_544608
#undef public_54460a
#undef public_544613
#undef public_544631
#undef public_544641
#undef public_544650
#undef public_544667
#undef public_544677
#undef public_544686
#undef public_5446b3
#undef public_5446c9
#undef public_5446de
