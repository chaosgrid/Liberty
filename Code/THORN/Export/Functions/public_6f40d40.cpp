#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40d40);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58ff4);

#define public_6f40d7e _public_6f40d7e
#define public_6f40d99 _public_6f40d99
#define public_6f40db3 _public_6f40db3

PROC_DECLARE(0x6f40d40, internal_6f40d40, public_6f40d40);
extern "C" NAKED register_t __cdecl internal_6f40d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58ff4 @0x6f40d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58ff4
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
        mov eax, dword ptr ds : [esi+0xD4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 2
        je public_6f40d7e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xD4], ebx
        public_6f40d7e : nop
        mov eax, dword ptr ds : [esi+0xD0]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], 1
        je public_6f40d99
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xD0], ebx
        public_6f40d99 : nop
        mov eax, dword ptr ds : [esi+0xCC]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], bl
        je public_6f40db3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xCC], ebx
        public_6f40db3 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f40d40)
    }
}

#undef public_6f40d7e
#undef public_6f40d99
#undef public_6f40db3
