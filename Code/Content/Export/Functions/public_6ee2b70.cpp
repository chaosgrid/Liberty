#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee2b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab8db);

#define public_6ee2bb0 _public_6ee2bb0
#define public_6ee2bbc _public_6ee2bbc
#define public_6ee2bd0 _public_6ee2bd0
#define public_6ee2bde _public_6ee2bde
#define public_6ee2bee _public_6ee2bee

PROC_DECLARE(0x6ee2b70, internal_6ee2b70, public_6ee2b70);
extern "C" NAKED register_t __cdecl internal_6ee2b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab8db @0x6ee2b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab8db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6fb6284
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        xor ebp, ebp
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], ebp
        je public_6ee2bee
        push ebx
        lea ebx, ds:[edi+4]
        lea esp, ss:[esp]
        public_6ee2bb0 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebp
        je public_6ee2bbc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ee2bbc : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, ebx
        cmp eax, ecx
        je public_6ee2bde
        mov edx, edi
        sub edx, ebx
        lea esp, ss:[esp]
        public_6ee2bd0 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6ee2bd0
        xor ebp, ebp
        public_6ee2bde : nop
        mov ecx, dword ptr ds : [esi+0xC]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6ee2bb0
        pop ebx
        public_6ee2bee : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x10], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ee2b70)
    }
}

#undef public_6ee2bb0
#undef public_6ee2bbc
#undef public_6ee2bd0
#undef public_6ee2bde
#undef public_6ee2bee
