#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cb00);

#define public_6f2cb3a _public_6f2cb3a
#define public_6f2cb4c _public_6f2cb4c
#define public_6f2cb72 _public_6f2cb72

PROC_DECLARE(0x6f2cb00, internal_6f2cb00, public_6f2cb00);
extern "C" NAKED register_t __cdecl internal_6f2cb00()
{
    __asm
    {
        sub esp, 0x200
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6f5a06c]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x218]
        mov al, byte ptr ds : [edi]
        xor ebx, ebx
        test al, al
        mov esi, ecx
        je public_6f2cb3a
        mov eax, dword ptr ss : [esp+0x214]
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6f5f6d4 @0x6f2cb2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6d4
        push ecx
        call ebp
        add esp, 0xC
        jmp public_6f2cb4c
        public_6f2cb3a : nop
        mov edx, dword ptr ss : [esp+0x214]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call ebp
        add esp, 8
        public_6f2cb4c : nop
        mov byte ptr ds : [edi], 1
        mov edx, dword ptr ds : [esi+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x10]
        repne scasb
        mov eax, dword ptr ds : [esi+8]
        not ecx
        dec ecx
        add ecx, edx
        cmp ecx, eax
        jbe public_6f2cb72
        mov ecx, esi
        call public_6f2ca80
        mov ebx, eax
        public_6f2cb72 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        add edx, eax
/*FIXUP push offset public_6f5f6c8 @0x6f2cb7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        push edx
        call ebp
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        add ecx, eax
        pop edi
        mov dword ptr ds : [esi+0xC], ecx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x200
        ret 8
        UNREACHABLE_TRAP(0x6f2cb00)
    }
}

#undef public_6f2cb3a
#undef public_6f2cb4c
#undef public_6f2cb72
