#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807b50);
CLANG_FORWARD_PROC_SYMBOL(public_6807c00);
CLANG_FORWARD_PROC_SYMBOL(public_6807cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6807d00);
CLANG_FORWARD_PROC_SYMBOL(public_6807d60);

#define public_6807c39 _public_6807c39
#define public_6807c56 _public_6807c56
#define public_6807c5d _public_6807c5d
#define public_6807ca5 _public_6807ca5
#define public_6807cc4 _public_6807cc4

PROC_DECLARE(0x6807c00, internal_6807c00, public_6807c00);
extern "C" NAKED register_t __cdecl internal_6807c00()
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
        call public_6807d60
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_680da78 @0x6807c25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680da78
        push ecx
        call public_6807b50
        mov edi, eax
        add esp, 0x14
        test edi, edi
        jl public_6807ca5
        public_6807c39 : nop
        push ebx
        push esi
        add edi, 2
        call public_6807630
        add esp, 8
        cmp edi, 0xD
        jne public_6807c56
        mov edx, dword ptr ds : [public_680dae0]
        lea eax, ds:[edx+1]
        jmp public_6807c5d
        public_6807c56 : nop
        mov eax, dword ptr ds : [edi*4+public_680daac]
        public_6807c5d : nop
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call public_6807d00
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        call public_6807cd0
        push esi
        call public_6806a20
        lea edx, ss:[esp+0x28]
        push edx
        push ebx
        push esi
        call public_6807d60
        push ebx
        push esi
        call public_6807630
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_680da78 @0x6807c91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680da78
        push eax
        call public_6807b50
        mov edi, eax
        add esp, 0x38
        test edi, edi
        jge public_6807c39
        public_6807ca5 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        jle public_6807cc4
        push ebx
        push esi
        call public_6807630
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call public_6807d00
        add esp, 0x14
        public_6807cc4 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x6807c00)
    }
}

#undef public_6807c39
#undef public_6807c56
#undef public_6807c5d
#undef public_6807ca5
#undef public_6807cc4
