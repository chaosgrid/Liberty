#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807750);
CLANG_FORWARD_PROC_SYMBOL(public_6807840);
CLANG_FORWARD_PROC_SYMBOL(public_6808720);
CLANG_FORWARD_PROC_SYMBOL(public_6808800);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6808764 _public_6808764
#define public_6808786 _public_6808786
#define public_68087ba _public_68087ba
#define public_68087dc _public_68087dc
#define public_68087ea _public_68087ea

PROC_DECLARE(0x6808720, internal_6808720, public_6808720);
extern "C" NAKED register_t __cdecl internal_6808720()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor edi, edi
        xor ebp, ebp
        sub eax, 0x29
        je public_68087ea
        sub eax, 0xEB
        je public_6808764
        sub eax, 2
        je public_68087dc
/*FIXUP push offset public_680dd0c @0x6808747*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd0c
        push esi
        call public_680a850
        add esp, 8
        push ebp
        push edi
        push esi
        call public_6808800
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        ret 
        public_6808764 : nop
        push 0
        push esi
        mov edi, 1
        call public_6807750
        add esp, 4
        push eax
        push esi
        call public_6807840
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        jne public_68087ea
        public_6808786 : nop
        push esi
        call public_6806a20
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        sub eax, 0x114
        jne public_68087ba
        mov eax, edi
        push eax
        push esi
        inc edi
        call public_6807750
        add esp, 4
        push eax
        push esi
        call public_6807840
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        jne public_68087ea
        jmp public_6808786
        public_68087ba : nop
        sub eax, 2
        je public_68087dc
/*FIXUP push offset public_680dd0c @0x68087bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd0c
        push esi
        call public_680a850
        add esp, 8
        push ebp
        push edi
        push esi
        call public_6808800
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        ret 
        public_68087dc : nop
        push esi
        call public_6806a20
        add esp, 4
        mov ebp, 1
        public_68087ea : nop
        push ebp
        push edi
        push esi
        call public_6808800
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6808720)
    }
}

#undef public_6808764
#undef public_6808786
#undef public_68087ba
#undef public_68087dc
#undef public_68087ea
