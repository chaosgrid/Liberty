#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509ca0);
CLANG_FORWARD_PROC_SYMBOL(public_50a170);
CLANG_FORWARD_PROC_SYMBOL(public_50b170);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfb4e);

#define public_50a1b7 _public_50a1b7
#define public_50a1cc _public_50a1cc

PROC_DECLARE(0x50a170, internal_50a170, public_50a170);
extern "C" NAKED register_t __cdecl internal_50a170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfb4e @0x50a172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfb4e
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
        mov dword ptr ss : [ebp], offset public_5db1b4
        mov dword ptr ss : [esp+0x20], 2
        call public_50b170
        mov ebx, dword ptr ss : [ebp+0x68]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x64]
        mov byte ptr ss : [esp+0x20], 1
        je public_50a1cc
        public_50a1b7 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_516f70
        cmp esi, ebx
        jne public_50a1b7
        public_50a1cc : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
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
        call public_509ca0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_5db1f0
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x50a170)
    }
}

#undef public_50a1b7
#undef public_50a1cc
