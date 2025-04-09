#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4221f0);

#define public_42229d _public_42229d
#define public_4222b2 _public_4222b2
#define public_422300 _public_422300
#define public_422319 _public_422319
#define public_42231b _public_42231b
#define public_42233d _public_42233d
#define public_422371 _public_422371

PROC_DECLARE(0x4221f0, internal_4221f0, public_4221f0);
extern "C" NAKED register_t __cdecl internal_4221f0()
{
    __asm
    {
        sub esp, 0x4C
        mov eax, dword ptr ds : [public_5c6de0]
        push esi
        push edi
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        lea edx, ss:[esp+8]
        push edx
        mov ecx, 0xC
        lea esi, ss:[esp+0x28]
        mov edi, offset public_6648dc
        rep movsd
        mov dword ptr ss : [esp+0xC], 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        je public_42229d
        call dword ptr ds : [ecx+0x7C]
        jmp public_4222b2
        public_42229d : nop
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x74]
        public_4222b2 : nop
        mov al, byte ptr ds : [public_610844]
        test al, al
        je public_42233d
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_66490c]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, 2
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], ecx
        setne al
        xor ecx, ecx
        public_422300 : nop
        test al, al
        jne public_422319
        fld dword ptr ds : [ecx+public_664910]
        fcomp dword ptr ss : [esp+ecx+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_422319
        xor al, al
        jmp public_42231b
        public_422319 : nop
        mov al, 1
        public_42231b : nop
        mov esi, dword ptr ss : [esp+ecx+0xC]
        mov dword ptr ds : [ecx+public_664910], esi
        add ecx, 4
        cmp ecx, 0x18
        jl public_422300
        test al, al
        je public_422371
        inc dword ptr ds : [public_664990]
        mov dword ptr ds : [public_66490c], edx
        public_42233d : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        pop edi
        pop esi
        add esp, 0x4C
        ret 
        public_422371 : nop
        mov eax, dword ptr ds : [public_66498c]
        inc eax
        pop edi
        mov dword ptr ds : [public_66498c], eax
        pop esi
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x4221f0)
    }
}

#undef public_42229d
#undef public_4222b2
#undef public_422300
#undef public_422319
#undef public_42231b
#undef public_42233d
#undef public_422371
