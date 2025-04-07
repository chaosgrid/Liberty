#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215120);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624814e);

#define public_6215143 _public_6215143
#define public_6215145 _public_6215145
#define public_6215161 _public_6215161
#define public_6215175 _public_6215175
#define public_62151a2 _public_62151a2
#define public_62151b2 _public_62151b2
#define public_62151d7 _public_62151d7

PROC_DECLARE(0x6215120, internal_6215120, public_6215120);
extern "C" NAKED register_t __cdecl internal_6215120()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624814e @0x6215122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624814e
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
        je public_6215143
        lea esi, ds:[ecx+4]
        jmp public_6215145
        public_6215143 : nop
        xor esi, esi
        public_6215145 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_6215161
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_6215161 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_6215175
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_6215175 : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_62151a2
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_62151a2
        push eax
        call public_62460e0
        add esp, 4
        public_62151a2 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_62151b2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_62151b2 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_62151d7
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_62151d7
        push esi
        call public_62460e0
        add esp, 4
        public_62151d7 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6215120)
    }
}

#undef public_6215143
#undef public_6215145
#undef public_6215161
#undef public_6215175
#undef public_62151a2
#undef public_62151b2
#undef public_62151d7
