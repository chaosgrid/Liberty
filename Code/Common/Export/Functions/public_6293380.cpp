#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285630);
CLANG_FORWARD_PROC_SYMBOL(public_6293380);
CLANG_FORWARD_PROC_SYMBOL(public_629ede0);
CLANG_FORWARD_PROC_SYMBOL(public_62aa680);

#define public_6293436 _public_6293436
#define public_6293444 _public_6293444
#define public_6293463 _public_6293463
#define public_62934b2 _public_62934b2
#define public_62934bf _public_62934bf
#define public_62934c6 _public_62934c6

PROC_DECLARE(0x6293380, internal_6293380, public_6293380);
extern "C" NAKED register_t __cdecl internal_6293380()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_62934c6
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, 2
        jne public_6293463
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        push eax
        call public_62aa680
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+0x7C]
        mov ecx, dword ptr ds : [esi+0x28]
        fld dword ptr ss : [esp+0x20]
        add esp, 0x10
        fmul st, st(1)
        push 1
        push esi
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ds : [eax+0x78]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [eax+0x14]
        test eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        je public_6293444
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_6293436
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call public_6285630
        add esp, 0xC
        public_6293436 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 5
        call dword ptr ds : [eax+0xC8]
        public_6293444 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62934b2
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call public_6285630
        add esp, 0xC
        jmp public_62934b2
        public_6293463 : nop
        cmp eax, 1
        je public_62934b2
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 6
        call dword ptr ds : [eax+0xC8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, 3
        je public_62934b2
        cmp eax, 4
        je public_62934b2
/*FIXUP push offset public_639c880 @0x629348e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c880
        push 0xD1
/*FIXUP push offset public_639c81c @0x6293498*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62934a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62934b2 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_62934bf
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_62934bf : nop
        mov dword ptr ds : [esi+0x28], 0
        public_62934c6 : nop
        mov ecx, esi
        call public_629ede0
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6293380)
    }
}

#undef public_6293436
#undef public_6293444
#undef public_6293463
#undef public_62934b2
#undef public_62934bf
#undef public_62934c6
