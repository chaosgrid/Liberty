#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6358b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6398176);

#define public_6358b3f _public_6358b3f
#define public_6358b46 _public_6358b46
#define public_6358b65 _public_6358b65
#define public_6358b6c _public_6358b6c
#define public_6358b8f _public_6358b8f
#define public_6358b96 _public_6358b96

PROC_DECLARE(0x6358b00, internal_6358b00, public_6358b00);
extern "C" NAKED register_t __cdecl internal_6358b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398176 @0x6358b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398176
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
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x20]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 1
        je public_6358b46
        cmp eax, ebx
        je public_6358b3f
        push eax
        call public_6343fb0
        add esp, 4
        public_6358b3f : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov word ptr ds : [esi+0x18], bx
        public_6358b46 : nop
        mov word ptr ds : [esi+0x1A], bx
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ds:[esi+0x18]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], bl
        je public_6358b6c
        cmp eax, ebx
        je public_6358b65
        push eax
        call public_6343fb0
        add esp, 4
        public_6358b65 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov word ptr ds : [esi+0x10], bx
        public_6358b6c : nop
        mov word ptr ds : [esi+0x12], bx
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[esi+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_6358b96
        cmp eax, ebx
        je public_6358b8f
        push eax
        call public_6343fb0
        add esp, 4
        public_6358b8f : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov word ptr ds : [esi+8], bx
        public_6358b96 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0xA], bx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6358b00)
    }
}

#undef public_6358b3f
#undef public_6358b46
#undef public_6358b65
#undef public_6358b6c
#undef public_6358b8f
#undef public_6358b96
