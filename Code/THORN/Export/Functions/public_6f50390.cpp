#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4afc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);

#define public_6f503b6 _public_6f503b6
#define public_6f503e7 _public_6f503e7

PROC_DECLARE(0x6f50390, internal_6f50390, public_6f50390);
extern "C" NAKED register_t __cdecl internal_6f50390()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        push 1
        call public_6f4f5e0
        mov esi, eax
        mov al, byte ptr ds : [esi]
        add esp, 8
        cmp al, 0x1B
        jne public_6f503b6
/*FIXUP push offset public_6f60da8 @0x6f503a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60da8
        call public_6f4c7f0
        add esp, 4
        public_6f503b6 : nop
        push 0
        push esi
        push 2
        call public_6f4f630
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push esi
        call public_6f4cce0
        add esp, 0x18
        test eax, eax
        pop esi
        jne public_6f503e7
        call public_6f4afc0
        test eax, eax
        jne public_6f503e7
        push eax
        push eax
        call public_6f4b840
        add esp, 8
        public_6f503e7 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f50390)
    }
}

#undef public_6f503b6
#undef public_6f503e7
