#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ca10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f870);
CLANG_FORWARD_PROC_SYMBOL(public_6f52550);

#define public_6f4ca2b _public_6f4ca2b
#define public_6f4ca3c _public_6f4ca3c
#define public_6f4ca4e _public_6f4ca4e
#define public_6f4ca83 _public_6f4ca83
#define public_6f4cacc _public_6f4cacc

PROC_DECLARE(0x6f4ca10, internal_6f4ca10, public_6f4ca10);
extern "C" NAKED register_t __cdecl internal_6f4ca10()
{
    __asm
    {
        sub esp, 0x218
        push ebx
        mov ebx, dword ptr ss : [esp+0x220]
        test ebx, ebx
        push esi
        jne public_6f4ca2b
        mov esi, dword ptr ds : [public_6f5a0b8]
        jmp public_6f4ca3c
/*FIXUP public_6f4ca2b : nop
        push offset public_6f6058c @0x6f4ca2b*/
  FIXUP public_6f4ca2b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6058c
        push ebx
        call dword ptr ds : [public_6f5a0b4]
        add esp, 8
        mov esi, eax
        public_6f4ca3c : nop
        test esi, esi
        jne public_6f4ca4e
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0x218
        ret 
        public_6f4ca4e : nop
        push edi
        push esi
        call dword ptr ds : [public_6f5a0b0]
        mov edi, eax
        push esi
        push edi
        call dword ptr ds : [public_6f5a0ac]
        xor eax, eax
        add esp, 0xC
        cmp edi, 0x1B
        sete al
        mov edi, eax
        test edi, edi
        je public_6f4ca83
        push esi
/*FIXUP push offset public_6f60588 @0x6f4ca72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60588
        push ebx
        call dword ptr ds : [public_6f5a0a8]
        add esp, 0xC
        mov esi, eax
        public_6f4ca83 : nop
        push 0x104
        lea ecx, ss:[esp+0x10]
        push ebx
        push ecx
        call public_6f4f870
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x120]
        push esi
        push eax
        call public_6f52550
        lea ecx, ss:[esp+0x128]
        push edi
        push ecx
        call public_6f4cae0
        mov edi, eax
        mov eax, dword ptr ds : [public_6f5a0b8]
        add esp, 0x20
        cmp esi, eax
        je public_6f4cacc
        push esi
        call dword ptr ds : [public_6f5a0a4]
        add esp, 4
        public_6f4cacc : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x218
        ret 
        UNREACHABLE_TRAP(0x6f4ca10)
    }
}

#undef public_6f4ca2b
#undef public_6f4ca3c
#undef public_6f4ca4e
#undef public_6f4ca83
#undef public_6f4cacc
