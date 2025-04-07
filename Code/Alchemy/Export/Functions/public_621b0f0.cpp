#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_62486b9);

#define public_621b113 _public_621b113
#define public_621b115 _public_621b115
#define public_621b131 _public_621b131
#define public_621b146 _public_621b146
#define public_621b15a _public_621b15a
#define public_621b187 _public_621b187
#define public_621b197 _public_621b197
#define public_621b1bc _public_621b1bc

PROC_DECLARE(0x621b0f0, internal_621b0f0, public_621b0f0);
extern "C" NAKED register_t __cdecl internal_621b0f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62486b9 @0x621b0f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62486b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        je public_621b113
        lea esi, ds:[ecx+4]
        jmp public_621b115
        public_621b113 : nop
        xor esi, esi
        public_621b115 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0x14], 2
        cmp eax, ebx
        je public_621b131
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_621b131 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_621b146
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_621b146 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_621b15a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_621b15a : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 3
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_621b187
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_621b187
        push eax
        call public_62460e0
        add esp, 4
        public_621b187 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_621b197
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_621b197 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_621b1bc
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_621b1bc
        push esi
        call public_62460e0
        add esp, 4
        public_621b1bc : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621b0f0)
    }
}

#undef public_621b113
#undef public_621b115
#undef public_621b131
#undef public_621b146
#undef public_621b15a
#undef public_621b187
#undef public_621b197
#undef public_621b1bc
