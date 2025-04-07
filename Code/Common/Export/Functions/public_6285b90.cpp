#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348f60);
CLANG_FORWARD_JUMP_SYMBOL(public_6392ff3);

#define public_6285be6 _public_6285be6
#define public_6285bed _public_6285bed
#define public_6285bf1 _public_6285bf1
#define public_6285c0c _public_6285c0c
#define public_6285c13 _public_6285c13

PROC_DECLARE(0x6285b90, internal_6285b90, public_6285b90);
extern "C" NAKED register_t __cdecl internal_6285b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392ff3 @0x6285b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392ff3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_639b60c
        xor ebx, ebx
        cmp word ptr ds : [esi+6], bx
        mov dword ptr ss : [esp+0x14], 1
        jbe public_6285bf1
        push 1
        push esi
        call public_6348f60
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        add esp, 8
        cmp eax, ecx
        je public_6285bed
        cmp eax, ebx
        je public_6285be6
        push eax
        call public_6343fb0
        add esp, 4
        public_6285be6 : nop
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [esi+4], bx
        public_6285bed : nop
        mov word ptr ds : [esi+6], bx
        public_6285bf1 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[esi+0xC]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], bl
        je public_6285c13
        cmp eax, ebx
        je public_6285c0c
        push eax
        call public_6343fb0
        add esp, 4
        public_6285c0c : nop
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [esi+4], bx
        public_6285c13 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+6], bx
        mov dword ptr ds : [esi], offset public_639b64c
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6285b90)
    }
}

#undef public_6285be6
#undef public_6285bed
#undef public_6285bf1
#undef public_6285c0c
#undef public_6285c13
