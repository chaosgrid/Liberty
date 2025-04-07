#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac9250);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9360);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9430);
CLANG_FORWARD_PROC_SYMBOL(public_6aceb0f);

#define public_6aced80 _public_6aced80
#define public_6aced82 _public_6aced82

PROC_DECLARE(0x6aceb0f, internal_6aceb0f, public_6aceb0f);
extern "C" NAKED register_t __cdecl internal_6aceb0f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC8
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        push esi
        push edi
        test ebx, ebx
        je public_6aced80
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_6aced80
        mov edi, dword ptr ss : [ebp+0xC]
        shr edi, 2
        je public_6aced80
        add eax, edi
        add ebx, 0x14
        mov dword ptr ss : [ebp+0xC], eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9250
        push 0x14
        lea eax, ss:[ebp-0x78]
        pop esi
        push esi
        push dword ptr ss : [ebp+0x10]
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+8]
        push eax
        call public_6ac9360
        push esi
        lea eax, ss:[ebp-0x78]
        push ebx
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0xC8]
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9250
        push esi
        lea eax, ss:[ebp-0x78]
        push ebx
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ac9360
        push esi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+0x10]
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+8]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0xB4]
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9430
        lea eax, ds:[ebx+0x28]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, edi
        mov dword ptr ss : [ebp-4], eax
        add eax, edi
        mov dword ptr ss : [ebp+0xC], eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9250
        lea eax, ds:[ebx+0x14]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp-4]
        push eax
        call public_6ac9360
        push esi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+8]
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0xA0]
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9250
        push esi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+8]
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ac9360
        lea eax, ds:[ebx+0x14]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        push edi
        lea eax, ss:[ebp-0x78]
        push dword ptr ss : [ebp-4]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0x8C]
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9250
        lea eax, ss:[ebp-0xC8]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0xA0]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        push dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9250
        lea eax, ss:[ebp-0xB4]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0x8C]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        push ebx
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x78]
        add ebx, esi
        push eax
        call public_6ac9250
        lea eax, ss:[ebp-0xA0]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0xC8]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0x78]
        push ebx
        push eax
        call public_6ac9430
        lea eax, ss:[ebp-0x78]
        add ebx, esi
        push eax
        call public_6ac9250
        lea eax, ss:[ebp-0x8C]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0xB4]
        push esi
        push eax
        lea eax, ss:[ebp-0x78]
        push eax
        call public_6ac9360
        lea eax, ss:[ebp-0x78]
        push ebx
        push eax
        call public_6ac9430
        push 0x1D
        xor eax, eax
        pop ecx
        lea edi, ss:[ebp-0x78]
        rep stosd
        mov ecx, esi
        lea edi, ss:[ebp-0xC8]
        push 1
        rep stosd
        pop eax
        jmp public_6aced82
        public_6aced80 : nop
        xor eax, eax
        public_6aced82 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6aceb0f)
    }
}

#undef public_6aced80
#undef public_6aced82
