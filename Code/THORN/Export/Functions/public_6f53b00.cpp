#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f53b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f53bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53c00);
CLANG_FORWARD_PROC_SYMBOL(public_6f53c60);

#define public_6f53b39 _public_6f53b39
#define public_6f53b56 _public_6f53b56
#define public_6f53b5d _public_6f53b5d
#define public_6f53ba5 _public_6f53ba5
#define public_6f53bc4 _public_6f53bc4

PROC_DECLARE(0x6f53b00, internal_6f53b00, public_6f53b00);
extern "C" NAKED register_t __cdecl internal_6f53b00()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push esi
        mov esi, dword ptr ss : [esp+0x60]
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        push ebx
        push esi
        mov dword ptr ss : [esp+0x68], 0
        call public_6f53c60
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6f61148 @0x6f53b25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61148
        push ecx
        call public_6f53a50
        mov edi, eax
        add esp, 0x14
        test edi, edi
        jl public_6f53ba5
        public_6f53b39 : nop
        push ebx
        push esi
        add edi, 2
        call public_6f53530
        add esp, 8
        cmp edi, 0xD
        jne public_6f53b56
        mov edx, dword ptr ds : [public_6f611b0]
        lea eax, ds:[edx+1]
        jmp public_6f53b5d
        public_6f53b56 : nop
        mov eax, dword ptr ds : [edi*4+public_6f6117c]
        public_6f53b5d : nop
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call public_6f53c00
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        call public_6f53bd0
        push esi
        call public_6f52920
        lea edx, ss:[esp+0x28]
        push edx
        push ebx
        push esi
        call public_6f53c60
        push ebx
        push esi
        call public_6f53530
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6f61148 @0x6f53b91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61148
        push eax
        call public_6f53a50
        mov edi, eax
        add esp, 0x38
        test edi, edi
        jge public_6f53b39
        public_6f53ba5 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        jle public_6f53bc4
        push ebx
        push esi
        call public_6f53530
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call public_6f53c00
        add esp, 0x14
        public_6f53bc4 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x6f53b00)
    }
}

#undef public_6f53b39
#undef public_6f53b56
#undef public_6f53b5d
#undef public_6f53ba5
#undef public_6f53bc4
