#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532800);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_JUMP_SYMBOL(public_5c07a8);

#define public_53288a _public_53288a
#define public_53288c _public_53288c

PROC_DECLARE(0x532800, internal_532800, public_532800);
extern "C" NAKED register_t __cdecl internal_532800()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c07a8 @0x532808*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c07a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        push esi
        mov ecx, edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi], offset public_5de13c
        call dword ptr ds : [public_5c6934]
        push edi
        call dword ptr ds : [public_5c6570]
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_53288c
        mov ebx, dword ptr ds : [public_5c6930]
        mov ecx, edi
        call ebx
        mov ecx, eax
        add ecx, 0x70
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_53288a
        mov ecx, edi
        call ebx
        add eax, 0x70
        push eax
        call dword ptr ds : [public_5c63c8]
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], eax
        je public_53288c
        push eax
        call public_536100
        add esp, 4
        jmp public_53288c
        public_53288a : nop
        xor ebx, ebx
        public_53288c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_5de18c
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x532800)
    }
}

#undef public_53288a
#undef public_53288c
