#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_62b2c3c _public_62b2c3c
#define public_62b2cc7 _public_62b2cc7
#define public_62b2cf0 _public_62b2cf0
#define public_62b2d09 _public_62b2d09
#define public_62b2d0d _public_62b2d0d
#define public_62b2d12 _public_62b2d12
#define public_62b2d21 _public_62b2d21

PROC_DECLARE(0x62b2c10, internal_62b2c10, public_62b2c10);
extern "C" NAKED register_t __cdecl internal_62b2c10()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        sub esp, 0x18
        push esi
        mov esi, ecx
        dec dword ptr ds : [esi+0x2A8]
        jne public_62b2d21
        mov eax, dword ptr ds : [esi+0x2AC]
        cmp eax, 3
        je public_62b2c3c
        cmp eax, 2
        jne public_62b2d0d
        public_62b2c3c : nop
        mov ecx, dword ptr ds : [esi+0x22C]
        cmp ecx, 0xFFFFFFFF
        je public_62b2d12
        push 0
        fstp st(0)
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        mov dword ptr ds : [esi+0x2AC], 1
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [esi+0x22C]
        push eax
        call public_627d8a0
        mov ecx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x22C]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x168]
        test eax, eax
        je public_62b2cc7
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+7]
        push eax
        push 2
        mov ecx, esi
        mov byte ptr ss : [esp+0xF], 0
        call dword ptr ds : [edx+0xC8]
        public_62b2cc7 : nop
        push 0x100
        lea ecx, ss:[esp+0x10]
        call public_629b990
        lea ecx, ss:[esp+0xC]
        add esi, 0xE4
        push ecx
        mov ecx, esi
        call public_629b440
        test eax, eax
        je public_62b2d09
        nop 
        lea esp, ss:[esp]
        public_62b2cf0 : nop
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x30]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_629b440
        test eax, eax
        jne public_62b2cf0
        public_62b2d09 : nop
        fld dword ptr ss : [esp+8]
        public_62b2d0d : nop
        pop esi
        add esp, 0x18
        ret 
        public_62b2d12 : nop
        mov dword ptr ds : [esi+0x2AC], 0
        pop esi
        add esp, 0x18
        ret 
        public_62b2d21 : nop
        mov ecx, dword ptr ds : [public_6399038]
        fstp st(0)
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x22C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62b2c10)
    }
}

#undef public_62b2c3c
#undef public_62b2cc7
#undef public_62b2cf0
#undef public_62b2d09
#undef public_62b2d0d
#undef public_62b2d12
#undef public_62b2d21
