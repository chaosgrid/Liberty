#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6807060);
CLANG_FORWARD_PROC_SYMBOL(public_68070c0);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_6807890);
CLANG_FORWARD_PROC_SYMBOL(public_6808140);
CLANG_FORWARD_PROC_SYMBOL(public_6808690);
CLANG_FORWARD_PROC_SYMBOL(public_6808920);
CLANG_FORWARD_PROC_SYMBOL(public_6808a00);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6808980 _public_6808980
#define public_6808996 _public_6808996
#define public_68089b8 _public_68089b8
#define public_68089e1 _public_68089e1

PROC_DECLARE(0x6808920, internal_6808920, public_6808920);
extern "C" NAKED register_t __cdecl internal_6808920()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
/*FIXUP push offset public_680dd34 @0x680892f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd34
        push 0x64
        push ebx
        push esi
        xor edi, edi
        call public_6807890
        mov ebp, dword ptr ss : [esp+0x30]
        push ebp
        push esi
        call public_6808a00
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x18
        cmp eax, 0x2C
        jne public_6808996
        push esi
        call public_6806a20
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call public_6808140
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp eax, 4
        jne public_6808980
/*FIXUP push offset public_680db60 @0x6808972*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db60
        push esi
        call public_680a850
        add esp, 8
        public_6808980 : nop
        lea ecx, ds:[ebx+1]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call public_6808920
        add esp, 0xC
        mov edi, eax
        jmp public_68089b8
        public_6808996 : nop
        push 0x3D
        push esi
        call public_6807230
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call public_6808690
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebx
        push esi
        call public_6807060
        add esp, 0x1C
        public_68089b8 : nop
        cmp dword ptr ss : [ebp], 3
        jne public_68089e1
        lea eax, ds:[edi+ebx-1]
        test eax, eax
        je public_68089e1
        push 0xFFFFFFFF
        push eax
        push 0x1B
        push esi
        call public_6806ed0
        add esp, 0x10
        add edi, 2
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_68089e1 : nop
        push ebp
        push esi
        call public_68070c0
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6808920)
    }
}

#undef public_6808980
#undef public_6808996
#undef public_68089b8
#undef public_68089e1
