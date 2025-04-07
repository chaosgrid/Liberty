#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3f1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ab2);

#define public_6d3f25b _public_6d3f25b
#define public_6d3f2c4 _public_6d3f2c4

PROC_DECLARE(0x6d3f1d0, internal_6d3f1d0, public_6d3f1d0);
extern "C" NAKED register_t __cdecl internal_6d3f1d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
/*FIXUP push public_6d62ab2 @0x6d3f1dc*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ab2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        cmp eax, ecx
        jne public_6d3f2c4
        mov cl, byte ptr ss : [esp+0x3C]
        push ebx
        push ebp
        mov byte ptr ss : [esp+8], cl
        push edi
        xor ebx, ebx
        xor eax, eax
        mov edi, offset public_6d6a21c
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d3f25b
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6d6a21c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ebp
        mov byte ptr ds : [eax+ebp], bl
        pop esi
        public_6d3f25b : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x4C], offset public_6d66ee4
        call dword ptr ds : [public_6d64c5c]
        mov dl, byte ptr ss : [esp+0xC]
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x44], 1
        mov byte ptr ss : [esp+0x2C], dl
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_6d64b70]
/*FIXUP push offset public_6d72fc0 @0x6d3f2a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x20]
        push eax
        mov byte ptr ss : [esp+0x48], bl
        mov dword ptr ss : [esp+0x24], offset public_6d68ab0
        call public_6d601a2
        pop edi
        pop ebp
        pop ebx
        public_6d3f2c4 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6d3f1d0)
    }
}

#undef public_6d3f25b
#undef public_6d3f2c4
