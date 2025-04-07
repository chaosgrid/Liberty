#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea080);
CLANG_FORWARD_PROC_SYMBOL(public_6eecec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabd2e);

#define public_6ee9af0 _public_6ee9af0
#define public_6ee9b05 _public_6ee9b05

PROC_DECLARE(0x6ee9aa0, internal_6ee9aa0, public_6ee9aa0);
extern "C" NAKED register_t __cdecl internal_6ee9aa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabd2e @0x6ee9aa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabd2e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6fb7488
/*FIXUP push offset public_6fb6210 @0x6ee9ac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6210
        mov dword ptr ss : [esp+0x24], 2
        call public_6eea080
        mov ebx, dword ptr ss : [ebp+0x1C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x18]
        mov byte ptr ss : [esp+0x20], 1
        je public_6ee9b05
        lea esp, ss:[esp]
        public_6ee9af0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6ee9af0
        public_6ee9b05 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], bl
        call public_6eecec0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb7494
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ee9aa0)
    }
}

#undef public_6ee9af0
#undef public_6ee9b05
