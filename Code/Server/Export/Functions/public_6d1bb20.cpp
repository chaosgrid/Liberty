#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6219e);

#define public_6d1bb60 _public_6d1bb60
#define public_6d1bb84 _public_6d1bb84
#define public_6d1bba0 _public_6d1bba0
#define public_6d1bbc4 _public_6d1bbc4

PROC_DECLARE(0x6d1bb20, internal_6d1bb20, public_6d1bb20);
extern "C" NAKED register_t __cdecl internal_6d1bb20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6219e @0x6d1bb22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6219e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, dword ptr ds : [ebx+0x4C]
        mov eax, dword ptr ds : [edi]
        lea esi, ds:[ebx+0x48]
        xor ebp, ebp
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6d1bb84
        lea esp, ss:[esp]
        public_6d1bb60 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6d23fd0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d1bb60
        public_6d1bb84 : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov edi, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ds:[ebx+0x3C]
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6d1bbc4
        nop 
        public_6d1bba0 : nop
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6d23fd0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d1bba0
        public_6d1bbc4 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        pop edi
        mov dword ptr ds : [ebx+0x30], ebp
        mov dword ptr ds : [ebx+0x34], ebp
        mov dword ptr ds : [ebx+0x38], ebp
        pop esi
        mov dword ptr ds : [ebx], offset public_6d68b9c
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d1bb20)
    }
}

#undef public_6d1bb60
#undef public_6d1bb84
#undef public_6d1bba0
#undef public_6d1bbc4
