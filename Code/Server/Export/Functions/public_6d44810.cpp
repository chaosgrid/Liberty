#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d44810);

#define public_6d44851 _public_6d44851
#define public_6d44868 _public_6d44868
#define public_6d4487c _public_6d4487c

PROC_DECLARE(0x6d44810, internal_6d44810, public_6d44810);
extern "C" NAKED register_t __cdecl internal_6d44810()
{
    __asm
    {
        sub esp, 0xC10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC1C]
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64644]
        mov ebx, dword ptr ds : [public_6d64540]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call ebx
        test al, al
        je public_6d4487c
        mov edi, dword ptr ds : [public_6d64538]
/*FIXUP public_6d44851 : nop
        push offset public_6d6ad78 @0x6d44851*/
  FIXUP public_6d44851 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad78
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        jne public_6d44868
        call ebx
        test al, al
        jne public_6d44851
        jmp public_6d4487c
        public_6d44868 : nop
        call dword ptr ds : [public_6d6455c]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp qword ptr ss : [esp+0xC]
        public_6d4487c : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d644e4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, offset public_6d8f970
        mov dword ptr ds : [public_6d8fb20], edx
        mov dword ptr ds : [public_6d8fb24], eax
        call dword ptr ds : [public_6d64830]
        call dword ptr ds : [public_6d6482c]
        push esi
        call dword ptr ds : [public_6d64828]
        push esi
        push 0x40
        call public_6d43650
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0xC10
        ret 
        UNREACHABLE_TRAP(0x6d44810)
    }
}

#undef public_6d44851
#undef public_6d44868
#undef public_6d4487c
