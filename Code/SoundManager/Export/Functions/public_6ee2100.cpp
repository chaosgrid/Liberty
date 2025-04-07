#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7600);

#define public_6ee213e _public_6ee213e
#define public_6ee2157 _public_6ee2157
#define public_6ee215b _public_6ee215b
#define public_6ee2177 _public_6ee2177
#define public_6ee2190 _public_6ee2190
#define public_6ee2194 _public_6ee2194
#define public_6ee21b0 _public_6ee21b0
#define public_6ee21c9 _public_6ee21c9
#define public_6ee21cd _public_6ee21cd
#define public_6ee22e1 _public_6ee22e1
#define public_6ee232f _public_6ee232f
#define public_6ee2339 _public_6ee2339
#define public_6ee2342 _public_6ee2342

PROC_DECLARE(0x6ee2100, internal_6ee2100, public_6ee2100);
extern "C" NAKED register_t __cdecl internal_6ee2100()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [esi+0x12C]
        test eax, eax
        je public_6ee2342
        mov eax, dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x70]
        fcomp qword ptr ds : [public_6ee9238]
        cmp eax, 0x1A
        sbb ecx, ecx
        and ecx, eax
        mov dword ptr ds : [esi+0x58], ecx
        fnstsw ax
        test ah, 5
        jp public_6ee213e
        fld qword ptr ds : [public_6ee9238]
        jmp public_6ee215b
        public_6ee213e : nop
        fld dword ptr ss : [esp+0x70]
        fcomp qword ptr ds : [public_6ee9440]
        fnstsw ax
        test ah, 0x41
        jne public_6ee2157
        fld qword ptr ds : [public_6ee9440]
        jmp public_6ee215b
        public_6ee2157 : nop
        fld dword ptr ss : [esp+0x70]
        public_6ee215b : nop
        fstp dword ptr ds : [esi+0x5C]
        fld dword ptr ss : [esp+0x74]
        fcomp qword ptr ds : [public_6ee9438]
        fnstsw ax
        test ah, 5
        jp public_6ee2177
        fld qword ptr ds : [public_6ee9438]
        jmp public_6ee2194
        public_6ee2177 : nop
        fld dword ptr ss : [esp+0x74]
        fcomp qword ptr ds : [public_6ee9430]
        fnstsw ax
        test ah, 0x41
        jne public_6ee2190
        fld qword ptr ds : [public_6ee9430]
        jmp public_6ee2194
        public_6ee2190 : nop
        fld dword ptr ss : [esp+0x74]
        public_6ee2194 : nop
        fstp dword ptr ds : [esi+0x60]
        fld dword ptr ss : [esp+0x78]
        fcomp qword ptr ds : [public_6ee9238]
        fnstsw ax
        test ah, 5
        jp public_6ee21b0
        fld qword ptr ds : [public_6ee9238]
        jmp public_6ee21cd
        public_6ee21b0 : nop
        fld dword ptr ss : [esp+0x78]
        fcomp qword ptr ds : [public_6ee9248]
        fnstsw ax
        test ah, 0x41
        jne public_6ee21c9
        fld qword ptr ds : [public_6ee9248]
        jmp public_6ee21cd
        public_6ee21c9 : nop
        fld dword ptr ss : [esp+0x78]
        public_6ee21cd : nop
        mov al, byte ptr ds : [esi+0x8C]
        fstp dword ptr ds : [esi+0x64]
        mov ebx, 4
        test bl, al
        je public_6ee2342
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x40]
        mov word ptr ss : [esp+0x2C], 1
        mov word ptr ss : [esp+0x2E], 2
        mov dword ptr ss : [esp+0x30], 0x5622
        mov dword ptr ss : [esp+0x34], 0x15888
        mov word ptr ss : [esp+0x38], bx
        mov word ptr ss : [esp+0x3A], 0x10
        mov word ptr ss : [esp+0x3C], 0
        call public_6ee1000
        mov eax, dword ptr ds : [esi+0x12C]
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        mov dword ptr ss : [esp+0x80], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6ee2339
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
/*FIXUP push offset public_6ee917c @0x6ee2258*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee917c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6ee2339
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x74]
        push edx
        push 0
/*FIXUP push offset public_6ee913c @0x6ee2275*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee913c
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_6ee232f
        test byte ptr ss : [esp+0x74], 3
        je public_6ee232f
        test byte ptr ds : [esi+0x90], bl
        jne public_6ee22e1
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x10
        lea edx, ss:[esp+0x10]
        push edx
        push 0
        push 0
        push 0
/*FIXUP push offset public_6ee913c @0x6ee22ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee913c
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x68], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x74], eax
        mov eax, dword ptr ds : [esi+0x90]
        or eax, ebx
        mov dword ptr ds : [esi+0x6C], ecx
        mov dword ptr ds : [esi+0x70], edx
        mov dword ptr ds : [esi+0x90], eax
        public_6ee22e1 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [esi+0x5C]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x64]
        push 0x10
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0
        push 0
        push 0
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x84]
/*FIXUP push offset public_6ee913c @0x6ee230d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee913c
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        lea ecx, ss:[esp+0x3C]
        call public_6ee7600
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x5C
        ret 0x14
        public_6ee232f : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ee2339 : nop
        lea ecx, ss:[esp+0x3C]
        call public_6ee7600
        public_6ee2342 : nop
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x5C
        ret 0x14
        UNREACHABLE_TRAP(0x6ee2100)
    }
}

#undef public_6ee213e
#undef public_6ee2157
#undef public_6ee215b
#undef public_6ee2177
#undef public_6ee2190
#undef public_6ee2194
#undef public_6ee21b0
#undef public_6ee21c9
#undef public_6ee21cd
#undef public_6ee22e1
#undef public_6ee232f
#undef public_6ee2339
#undef public_6ee2342
