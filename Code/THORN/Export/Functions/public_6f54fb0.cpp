#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f54fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55010);

#define public_6f54ff7 _public_6f54ff7

PROC_DECLARE(0x6f54fb0, internal_6f54fb0, public_6f54fb0);
extern "C" NAKED register_t __cdecl internal_6f54fb0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
/*FIXUP push offset public_6f614f0 @0x6f54fb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f614f0
        push ebx
        call public_6f54f00
        mov esi, eax
        lea eax, ds:[esi+5]
        push eax
        push 0
        call public_6f4fe10
        mov edi, eax
        push esi
        push edi
        push ebx
        call public_6f55010
        mov al, byte ptr ds : [esi+edi-1]
        add esi, edi
        add esp, 0x1C
        test al, al
        je public_6f54ff7
        mov ecx, dword ptr ds : [ebx+0x10]
        push ecx
/*FIXUP push offset public_6f614e0 @0x6f54fea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f614e0
        call public_6f4f7a0
        add esp, 8
        public_6f54ff7 : nop
        xor edx, edx
        mov dword ptr ds : [esi], edx
        mov eax, edi
        pop edi
        mov byte ptr ds : [esi+4], dl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f54fb0)
    }
}

#undef public_6f54ff7
