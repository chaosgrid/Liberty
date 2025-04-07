#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0f50);

#define public_6ec33e6 _public_6ec33e6
#define public_6ec33fa _public_6ec33fa
#define public_6ec3410 _public_6ec3410
#define public_6ec344e _public_6ec344e
#define public_6ec3462 _public_6ec3462
#define public_6ec349c _public_6ec349c
#define public_6ec34ae _public_6ec34ae
#define public_6ec3510 _public_6ec3510
#define public_6ec351a _public_6ec351a

PROC_DECLARE(0x6ec33b0, internal_6ec33b0, public_6ec33b0);
extern "C" NAKED register_t __cdecl internal_6ec33b0()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        mov ebx, dword ptr ss : [esp+0x7C]
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
        mov edi, ecx
/*FIXUP push offset public_6fb579c @0x6ec33c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edi
        call esi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec33e6
        mov byte ptr ds : [edi+0x34], 1
        jmp public_6ec33fa
        public_6ec33e6 : nop
        push 0
        mov ecx, ebx
        call esi
        push eax
        add edi, 0x30
        push edi
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec33fa : nop
        mov ebp, 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec34ae
        public_6ec3410 : nop
        cmp ebp, 0x32
        jge public_6ec34ae
/*FIXUP push offset public_6fb4708 @0x6ec3419*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        push ebp
        mov ecx, ebx
        call esi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec349c
        push ebp
        mov ecx, ebx
        call esi
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov byte ptr ss : [esp+0x1C], cl
        jne public_6ec344e
        mov dword ptr ss : [esp+0x18], ecx
        mov byte ptr ss : [esp+0x1C], cl
        jmp public_6ec3462
        public_6ec344e : nop
        push eax
        lea eax, ss:[esp+0x20]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], eax
        public_6ec3462 : nop
        mov ecx, 0xD
        lea esi, ss:[esp+0x18]
        lea edi, ss:[esp+0x4C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        add ecx, 0xC
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x8C], 0
        call public_6ed0f50
        mov esi, dword ptr ds : [public_6fb3048]
        public_6ec349c : nop
        inc ebp
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ec3410
/*FIXUP public_6ec34ae : nop
        push offset public_6fb4708 @0x6ec34ae*/
  FIXUP public_6ec34ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        lea ecx, ss:[esp+0x20]
        push 0x30
        push ecx
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        call public_6ea9f40
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, 0xD
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x58]
        rep movsd
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 0xC
        lea ecx, ds:[esi+0xC]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        xor edi, edi
        push eax
        mov dword ptr ss : [esp+0x8C], edi
        call public_6ed0f50
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6ec351a
        mov edi, edi
        public_6ec3510 : nop
        mov dword ptr ds : [eax+0x3C], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6ec3510
        public_6ec351a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x74
        ret 4
        UNREACHABLE_TRAP(0x6ec33b0)
    }
}

#undef public_6ec33e6
#undef public_6ec33fa
#undef public_6ec3410
#undef public_6ec344e
#undef public_6ec3462
#undef public_6ec349c
#undef public_6ec34ae
#undef public_6ec3510
#undef public_6ec351a
