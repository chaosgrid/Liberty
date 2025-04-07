#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714810);

#define public_6714830 _public_6714830
#define public_671484f _public_671484f
#define public_6714882 _public_6714882
#define public_671489e _public_671489e

PROC_DECLARE(0x6714810, internal_6714810, public_6714810);
extern "C" NAKED register_t __cdecl internal_6714810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_671cef0]
        sub esp, 0x200
        test eax, eax
        push esi
        push edi
        je public_671484f
        mov eax, dword ptr ds : [public_671b7c0]
        test ax, ax
        je public_671489e
        mov esi, offset public_671b7c0
        public_6714830 : nop
        push eax
        call dword ptr ds : [public_671cef0]
        mov ax, word ptr ds : [esi+2]
        add esi, 2
        add esp, 4
        test ax, ax
        jne public_6714830
        pop edi
        pop esi
        add esp, 0x200
        ret 
        public_671484f : nop
        mov ecx, dword ptr ds : [public_671cfc8]
        push 0
        push 0
        lea eax, ss:[esp+0x10]
        push 0x200
        push eax
        push 0xFFFFFFFF
/*FIXUP push offset public_671b7c0 @0x6714865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        push 0
        push ecx
        call dword ptr ds : [public_671936c]
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle public_671489e
        push ebx
        mov ebx, dword ptr ds : [public_671710c]
        public_6714882 : nop
        mov eax, dword ptr ds : [public_671cf98]
        xor edx, edx
        mov dl, byte ptr ss : [esp+esi+0xC]
        push 0
        push edx
        push 0x102
        push eax
        call ebx
        inc esi
        cmp esi, edi
        jl public_6714882
        pop ebx
        public_671489e : nop
        pop edi
        pop esi
        add esp, 0x200
        ret 
        UNREACHABLE_TRAP(0x6714810)
    }
}

#undef public_6714830
#undef public_671484f
#undef public_6714882
#undef public_671489e
