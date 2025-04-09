#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_589ba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c465b);

#define public_58c2a1 _public_58c2a1
#define public_58c2a3 _public_58c2a3
#define public_58c2e4 _public_58c2e4

PROC_DECLARE(0x58c230, internal_58c230, public_58c230);
extern "C" NAKED register_t __cdecl internal_58c230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c465b @0x58c232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c465b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x3B0
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_58c2a1
        mov ecx, esi
        call public_589ba0
        mov dword ptr ds : [esi], offset public_5e501c
        mov dword ptr ds : [esi+0x7C], offset public_5e500c
        mov dword ptr ds : [esi+0x3A0], ebx
        mov byte ptr ds : [esi+0x3A4], bl
        mov dword ptr ds : [esi+0x3A8], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x3AC], 1
        mov byte ptr ds : [esi+0x3AD], bl
        jmp public_58c2a3
        public_58c2a1 : nop
        xor esi, esi
        public_58c2a3 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_58c2e4
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_58c2e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x58c230)
    }
}

#undef public_58c2a1
#undef public_58c2a3
#undef public_58c2e4
