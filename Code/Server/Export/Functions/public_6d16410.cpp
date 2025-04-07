#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16410);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61d3b);

#define public_6d16438 _public_6d16438
#define public_6d16441 _public_6d16441
#define public_6d16443 _public_6d16443
#define public_6d16460 _public_6d16460
#define public_6d16465 _public_6d16465
#define public_6d16470 _public_6d16470
#define public_6d16483 _public_6d16483
#define public_6d1648c _public_6d1648c
#define public_6d16490 _public_6d16490
#define public_6d164a6 _public_6d164a6
#define public_6d164b9 _public_6d164b9
#define public_6d164c2 _public_6d164c2
#define public_6d164c6 _public_6d164c6
#define public_6d164d3 _public_6d164d3
#define public_6d164e4 _public_6d164e4

PROC_DECLARE(0x6d16410, internal_6d16410, public_6d16410);
extern "C" NAKED register_t __cdecl internal_6d16410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61d3b @0x6d16412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61d3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor edi, edi
        push ebp
        public_6d16438 : nop
        cmp edi, ebx
        jne public_6d16441
        mov edi, dword ptr ds : [esi+8]
        jmp public_6d16443
        public_6d16441 : nop
        mov edi, dword ptr ds : [edi]
        public_6d16443 : nop
        cmp edi, ebx
        je public_6d16465
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_6d16460
        lea ecx, ss:[ebp+0xC]
        call dword ptr ds : [public_6d64748]
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16460 : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d16438
        public_6d16465 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        pop ebp
        je public_6d16490
        lea ecx, ds:[ecx]
        public_6d16470 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16483
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d1648c
        public_6d16483 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1648c : nop
        cmp edi, ebx
        jne public_6d16470
        public_6d16490 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], ebx
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi+4], offset public_6d68340
        je public_6d164c6
        public_6d164a6 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d164b9
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d164c2
        public_6d164b9 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d164c2 : nop
        cmp edi, ebx
        jne public_6d164a6
        public_6d164c6 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        je public_6d164e4
        public_6d164d3 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d164d3
        public_6d164e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d16410)
    }
}

#undef public_6d16438
#undef public_6d16441
#undef public_6d16443
#undef public_6d16460
#undef public_6d16465
#undef public_6d16470
#undef public_6d16483
#undef public_6d1648c
#undef public_6d16490
#undef public_6d164a6
#undef public_6d164b9
#undef public_6d164c2
#undef public_6d164c6
#undef public_6d164d3
#undef public_6d164e4
