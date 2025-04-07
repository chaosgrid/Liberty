#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);

#define public_6cf8785 _public_6cf8785
#define public_6cf87da _public_6cf87da

PROC_DECLARE(0x6cf8700, internal_6cf8700, public_6cf8700);
extern "C" NAKED register_t __cdecl internal_6cf8700()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0xC
        push esi
        test al, al
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, 0xFFFFFFFC
        je public_6cf8785
        test eax, eax
        je public_6cf87da
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov esi, 0xFFFFFFFE
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf87da
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6cf87da
        mov al, byte ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        test al, al
        sete al
        mov byte ptr ss : [esp+9], al
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+4]
        mov dword ptr ss : [esp+4], 3
        mov byte ptr ss : [esp+8], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x194]
        xor esi, esi
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        public_6cf8785 : nop
        test eax, eax
        je public_6cf87da
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov esi, 0xFFFFFFFE
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf87da
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6cf87da
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+4], 3
        mov byte ptr ss : [esp+9], 0
        mov byte ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x194]
        xor esi, esi
        public_6cf87da : nop
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf8700)
    }
}

#undef public_6cf8785
#undef public_6cf87da
