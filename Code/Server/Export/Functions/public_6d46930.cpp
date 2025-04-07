#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46930);

#define public_6d46969 _public_6d46969
#define public_6d4699a _public_6d4699a
#define public_6d469c0 _public_6d469c0
#define public_6d469f1 _public_6d469f1
#define public_6d46a18 _public_6d46a18
#define public_6d46a49 _public_6d46a49
#define public_6d46a70 _public_6d46a70
#define public_6d46aa1 _public_6d46aa1

PROC_DECLARE(0x6d46930, internal_6d46930, public_6d46930);
extern "C" NAKED register_t __cdecl internal_6d46930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x100
        push ebx
        mov ebx, dword ptr ds : [public_6d647b8]
        push ebp
        mov ebp, dword ptr ds : [public_6d6487c]
        push esi
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        push edi
        je public_6d4699a
        call ebx
        push esi
        xor edi, edi
        push edi
        mov ecx, eax
        call ebp
        test eax, eax
        je public_6d46969
        mov ecx, eax
        call dword ptr ds : [public_6d64878]
        mov edi, eax
        public_6d46969 : nop
        test edi, edi
        je public_6d4699a
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6d6aef0 @0x6d46979*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aef0
        push edx
        call dword ptr ds : [public_6d64c74]
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x14]
        public_6d4699a : nop
        mov eax, dword ptr ss : [esp+0x11C]
        mov edi, dword ptr ds : [eax]
        test edi, edi
        je public_6d469f1
        call ebx
        push edi
        push 1
        mov ecx, eax
        xor esi, esi
        call ebp
        test eax, eax
        je public_6d469c0
        mov ecx, eax
        call dword ptr ds : [public_6d64878]
        mov esi, eax
        public_6d469c0 : nop
        test esi, esi
        je public_6d469f1
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6d6aee8 @0x6d469d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aee8
        push edx
        call dword ptr ds : [public_6d64c74]
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x14]
        public_6d469f1 : nop
        mov eax, dword ptr ss : [esp+0x11C]
        mov edi, dword ptr ds : [eax+8]
        test edi, edi
        je public_6d46a49
        call ebx
        push edi
        push 2
        mov ecx, eax
        xor esi, esi
        call ebp
        test eax, eax
        je public_6d46a18
        mov ecx, eax
        call dword ptr ds : [public_6d64878]
        mov esi, eax
        public_6d46a18 : nop
        test esi, esi
        je public_6d46a49
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6d6aedc @0x6d46a28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aedc
        push edx
        call dword ptr ds : [public_6d64c74]
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x14]
        public_6d46a49 : nop
        mov eax, dword ptr ss : [esp+0x11C]
        mov edi, dword ptr ds : [eax+0xC]
        test edi, edi
        je public_6d46aa1
        call ebx
        push edi
        push 3
        mov ecx, eax
        xor esi, esi
        call ebp
        test eax, eax
        je public_6d46a70
        mov ecx, eax
        call dword ptr ds : [public_6d64878]
        mov esi, eax
        public_6d46a70 : nop
        test esi, esi
        je public_6d46aa1
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6d6aed0 @0x6d46a80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aed0
        push edx
        call dword ptr ds : [public_6d64c74]
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x14]
        public_6d46aa1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x6d46930)
    }
}

#undef public_6d46969
#undef public_6d4699a
#undef public_6d469c0
#undef public_6d469f1
#undef public_6d46a18
#undef public_6d46a49
#undef public_6d46a70
#undef public_6d46aa1
