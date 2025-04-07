#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);

#define public_6f4b77d _public_6f4b77d
#define public_6f4b795 _public_6f4b795
#define public_6f4b79c _public_6f4b79c

PROC_DECLARE(0x6f4b720, internal_6f4b720, public_6f4b720);
extern "C" NAKED register_t __cdecl internal_6f4b720()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_6f4b79c
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xA]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x18], 0
        mov byte ptr ss : [esp+0x13], 0
        call dword ptr ds : [edx+0xA0]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x9C]
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f4b77d
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xB]
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        public_6f4b77d : nop
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        jne public_6f4b795
        mov al, byte ptr ss : [esp+0xA]
        test al, al
        jne public_6f4b795
        mov al, byte ptr ss : [esp+0xB]
        test al, al
        je public_6f4b79c
        public_6f4b795 : nop
        mov ecx, edi
        call public_6f1d110
        public_6f4b79c : nop
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f4b720)
    }
}

#undef public_6f4b77d
#undef public_6f4b795
#undef public_6f4b79c
