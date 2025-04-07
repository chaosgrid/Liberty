#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807150);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_68072a0);
CLANG_FORWARD_PROC_SYMBOL(public_68073b0);
CLANG_FORWARD_PROC_SYMBOL(public_6808a30);
CLANG_FORWARD_PROC_SYMBOL(public_6808ad0);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6808a9e _public_6808a9e
#define public_6808aa2 _public_6808aa2

PROC_DECLARE(0x6808a30, internal_6808a30, public_6808a30);
extern "C" NAKED register_t __cdecl internal_6808a30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [esi+0x1C]
        push edi
        push esi
        call public_68073b0
        push 1
        push esi
        mov ebp, eax
        call public_6806990
        push 0x7B
        push esi
        call public_6807230
        lea eax, ss:[esp+0x24]
        push eax
        push esi
        call public_6808ad0
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        cmp eax, 0x3B
        jne public_6808aa2
        push esi
        call public_6806a20
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        call public_6808ad0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        cmp edx, eax
        jne public_6808a9e
/*FIXUP push offset public_680dd58 @0x6808a90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd58
        push esi
        call public_680a850
        add esp, 8
        public_6808a9e : nop
        add edi, dword ptr ss : [esp+0x18]
        public_6808aa2 : nop
        push ebx
        push 0x7B
        push 0x7D
        push esi
        call public_68072a0
        push edi
        push 0x16
        push ebp
        push esi
        call public_6807150
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6808a30)
    }
}

#undef public_6808a9e
#undef public_6808aa2
