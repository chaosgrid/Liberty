#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4120);
CLANG_FORWARD_PROC_SYMBOL(public_4f4b90);

#define public_4d4148 _public_4d4148
#define public_4d4182 _public_4d4182
#define public_4d41a1 _public_4d41a1
#define public_4d41ee _public_4d41ee
#define public_4d4214 _public_4d4214

PROC_DECLARE(0x4d4120, internal_4d4120, public_4d4120);
extern "C" NAKED register_t __cdecl internal_4d4120()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 0xC
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        je public_4d4148
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4d4148
        cmp dword ptr ds : [ecx+0x10], edi
        jne public_4d4148
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d4148 : nop
        mov eax, dword ptr ds : [ecx]
        cmp eax, 4
        jne public_4d41a1
        mov esi, dword ptr ds : [ecx+0x14]
        call public_4c4690
        cmp esi, eax
        jge public_4d4214
        push esi
        call public_4c46a0
        mov ecx, dword ptr ds : [public_674bc8]
        add esp, 4
        mov esi, eax
        push esi
        call public_4f4b90
        test al, al
        je public_4d4182
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d4182 : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_4d4214
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_4d4214
        cmp eax, edi
        jne public_4d4214
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d41a1 : nop
        cmp eax, 3
        jne public_4d4214
        mov esi, dword ptr ds : [ecx+0x14]
        call public_4c4fb0
        cmp esi, eax
        jge public_4d4214
        push esi
        call public_4c4ff0
        mov esi, eax
        add esp, 4
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_4c52d0
        test al, al
        je public_4d41ee
        mov ecx, dword ptr ds : [public_674bc8]
        lea edx, ss:[esp+8]
        push edx
        call public_4f4b90
        test al, al
        je public_4d41ee
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d41ee : nop
        mov ecx, esi
        call public_4c5110
        mov cl, byte ptr ss : [esp+0x20]
        test cl, cl
        je public_4d4214
        test eax, eax
        je public_4d4214
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, edi
        jne public_4d4214
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4d4214 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4d4120)
    }
}

#undef public_4d4148
#undef public_4d4182
#undef public_4d41a1
#undef public_4d41ee
#undef public_4d4214
