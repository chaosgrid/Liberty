#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637cf50);
CLANG_FORWARD_PROC_SYMBOL(public_637d300);
CLANG_FORWARD_PROC_SYMBOL(public_637d470);

#define public_637d4a3 _public_637d4a3
#define public_637d4c0 _public_637d4c0
#define public_637d4d0 _public_637d4d0

PROC_DECLARE(0x637d470, internal_637d470, public_637d470);
extern "C" NAKED register_t __cdecl internal_637d470()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call public_637cf50
        add esp, 8
        test eax, eax
        je public_637d4c0
        mov edi, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_63edccc @0x637d48c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        cmp esi, eax
        jge public_637d4c0
        public_637d4a3 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+public_658bfe8]
        push 0
        push ecx
        push edi
        call public_637d300
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        inc esi
        cmp esi, eax
        jl public_637d4a3
        public_637d4c0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        pop edi
        pop esi
        je public_637d4d0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        public_637d4d0 : nop
        ret 
        UNREACHABLE_TRAP(0x637d470)
    }
}

#undef public_637d4a3
#undef public_637d4c0
#undef public_637d4d0
