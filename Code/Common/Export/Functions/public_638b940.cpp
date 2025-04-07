#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6386800);
CLANG_FORWARD_PROC_SYMBOL(public_638b940);
CLANG_FORWARD_PROC_SYMBOL(public_638ba00);
CLANG_FORWARD_PROC_SYMBOL(public_638c3d0);
CLANG_FORWARD_PROC_SYMBOL(public_638c4a0);

#define public_638b964 _public_638b964
#define public_638b975 _public_638b975
#define public_638b986 _public_638b986
#define public_638b99f _public_638b99f
#define public_638b9fa _public_638b9fa

PROC_DECLARE(0x638b940, internal_638b940, public_638b940);
extern "C" NAKED register_t __cdecl internal_638b940()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        xor esi, esi
        xor edi, edi
        test ebx, ebx
        je public_638b9fa
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 0x19
        jne public_638b964
        mov edi, offset _public_638c4a0
        jmp public_638b99f
        public_638b964 : nop
        cmp eax, 9
        jne public_638b975
        mov esi, 1
        mov edi, offset _public_638c3d0
        jmp public_638b99f
        public_638b975 : nop
        cmp eax, 0xC
        jne public_638b986
        mov esi, 2
        mov edi, offset _public_638c3d0
        jmp public_638b99f
        public_638b986 : nop
        push eax
/*FIXUP push offset public_63f9d44 @0x638b987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9d44
        call public_6356960
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x14
        public_638b99f : nop
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ecx
        call public_6386800
        push 0
        push esi
        push eax
        push 0
        push 0
        mov dword ptr ss : [esp+0x3C], eax
        call public_638ba00
        add esp, 0x28
        push eax
/*FIXUP push offset public_63f7cb4 @0x638b9d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push ebx
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ss : [esp+0x20]
        push 1
        push esi
        push edx
        push edi
        push ebx
        call public_638ba00
        lea eax, ss:[esp+0x34]
        push eax
        call public_636ecc0
        add esp, 0x24
        public_638b9fa : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638b940)
    }
}

#undef public_638b964
#undef public_638b975
#undef public_638b986
#undef public_638b99f
#undef public_638b9fa
