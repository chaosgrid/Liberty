#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_62b2ad6 _public_62b2ad6
#define public_62b2b7f _public_62b2b7f
#define public_62b2ba3 _public_62b2ba3
#define public_62b2bbc _public_62b2bbc
#define public_62b2bc0 _public_62b2bc0
#define public_62b2bc5 _public_62b2bc5
#define public_62b2bd4 _public_62b2bd4

PROC_DECLARE(0x62b2aa0, internal_62b2aa0, public_62b2aa0);
extern "C" NAKED register_t __cdecl internal_62b2aa0()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2A8]
        test eax, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi+0x2A8], ecx
        jne public_62b2bd4
        mov eax, dword ptr ds : [esi+0x2AC]
        cmp eax, 1
        je public_62b2ad6
        test eax, eax
        jne public_62b2bc0
        public_62b2ad6 : nop
        mov ecx, dword ptr ds : [esi+0x22C]
        cmp ecx, 0xFFFFFFFF
        je public_62b2bc5
        push 0
        fstp st(0)
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        mov dword ptr ds : [esi+0x2AC], 3
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0
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
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x22C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        fsub dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x168]
        test eax, eax
        fstp dword ptr ss : [esp+8]
        je public_62b2b7f
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+7]
        push ecx
        push 2
        mov ecx, esi
        mov byte ptr ss : [esp+0xF], 1
        call dword ptr ds : [eax+0xC8]
        public_62b2b7f : nop
        push 0x100
        lea ecx, ss:[esp+0x10]
        call public_629b990
        lea edx, ss:[esp+0xC]
        add esi, 0xE4
        push edx
        mov ecx, esi
        call public_629b440
        test eax, eax
        je public_62b2bbc
        public_62b2ba3 : nop
        mov edx, dword ptr ds : [eax]
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0x30]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_629b440
        test eax, eax
        jne public_62b2ba3
        public_62b2bbc : nop
        fld dword ptr ss : [esp+8]
        public_62b2bc0 : nop
        pop esi
        add esp, 0x18
        ret 
        public_62b2bc5 : nop
        mov dword ptr ds : [esi+0x2AC], 2
        pop esi
        add esp, 0x18
        ret 
        public_62b2bd4 : nop
        mov ecx, dword ptr ds : [public_6399038]
        fstp st(0)
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x22C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x22C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        fsub dword ptr ss : [esp+8]
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62b2aa0)
    }
}

#undef public_62b2ad6
#undef public_62b2b7f
#undef public_62b2ba3
#undef public_62b2bbc
#undef public_62b2bc0
#undef public_62b2bc5
#undef public_62b2bd4
