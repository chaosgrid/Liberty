#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435b80);
CLANG_FORWARD_PROC_SYMBOL(public_443a90);
CLANG_FORWARD_PROC_SYMBOL(public_443b10);
CLANG_FORWARD_PROC_SYMBOL(public_443ed0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9179);

#define public_435c55 _public_435c55
#define public_435c57 _public_435c57

PROC_DECLARE(0x435b80, internal_435b80, public_435b80);
extern "C" NAKED register_t __cdecl internal_435b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9179 @0x435b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9179
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA4
        push esi
        push edi
        lea ecx, ss:[esp+0xC]
        call public_443a90
        mov eax, dword ptr ss : [esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xB8], 0
        call dword ptr ds : [public_5c60ec]
        mov ecx, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0xC4]
        mov al, byte ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ss : [esp+0xD4]
        mov byte ptr ss : [esp+0x78], al
        mov eax, dword ptr ss : [esp+0xD8]
        mov dword ptr ss : [esp+0x7C], ecx
        mov dword ptr ss : [esp+0x80], edx
        mov dword ptr ss : [esp+0x84], eax
        mov ecx, 9
        lea esi, ss:[esp+0xDC]
        lea edi, ss:[esp+0x88]
        push 0x3B0
        rep movsd
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov byte ptr ss : [esp+0xB4], 1
        je public_435c55
        mov edx, dword ptr ss : [esp+0xC8]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, eax
        call public_443ed0
        mov esi, eax
        jmp public_435c57
        public_435c55 : nop
        xor esi, esi
        public_435c57 : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xB4], 0xFFFFFFFF
        call public_443b10
        mov ecx, dword ptr ss : [esp+0xAC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xB0
        ret 
        UNREACHABLE_TRAP(0x435b80)
    }
}

#undef public_435c55
#undef public_435c57
