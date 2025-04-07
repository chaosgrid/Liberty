#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_633bb20);

#define public_633bb65 _public_633bb65
#define public_633bb6d _public_633bb6d
#define public_633bb9d _public_633bb9d

PROC_DECLARE(0x633bb20, internal_633bb20, public_633bb20);
extern "C" NAKED register_t __cdecl internal_633bb20()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_630d3f0
        mov edi, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        add esp, 4
        lea eax, ss:[esp+0x18]
        add esi, 0x14
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_633bb65
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_633bb65
        lea eax, ss:[esp+0xC]
        jmp public_633bb6d
        public_633bb65 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_633bb6d : nop
        cmp dword ptr ds : [eax], edi
        jne public_633bb9d
        mov ecx, dword ptr ds : [public_6399028]
        push ebx
        push 0xBFF
/*FIXUP push offset public_63a4b20 @0x633bb7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a4b50 @0x633bb87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b50
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
        public_633bb9d : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x633bb20)
    }
}

#undef public_633bb65
#undef public_633bb6d
#undef public_633bb9d
