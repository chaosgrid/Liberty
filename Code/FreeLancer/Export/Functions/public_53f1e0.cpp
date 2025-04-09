#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_53f1e0);
CLANG_FORWARD_PROC_SYMBOL(public_5425f0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0cf6);

#define public_53f231 _public_53f231
#define public_53f247 _public_53f247
#define public_53f25c _public_53f25c
#define public_53f277 _public_53f277
#define public_53f290 _public_53f290
#define public_53f2a6 _public_53f2a6
#define public_53f2bb _public_53f2bb

PROC_DECLARE(0x53f1e0, internal_53f1e0, public_53f1e0);
extern "C" NAKED register_t __cdecl internal_53f1e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0cf6 @0x53f1e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0cf6
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
        mov dword ptr ds : [esi-0xC], offset public_5dd67c
        mov dword ptr ds : [esi-8], offset public_5dd5fc
        mov dword ptr ds : [esi], offset public_5dd5f4
        mov ecx, dword ptr ds : [esi+0xBC]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], 1
        je public_53f231
        call public_4f7a90
        mov dword ptr ds : [esi+0xBC], ebx
        public_53f231 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        cmp eax, ebx
        je public_53f247
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xB8], ebx
        public_53f247 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        cmp ecx, ebx
        je public_53f25c
        call public_537ad0
        mov dword ptr ds : [esi+0xC0], ebx
        public_53f25c : nop
        mov dword ptr ds : [esi+0xB4], ebx
        mov ecx, dword ptr ds : [esi+0xC4]
        cmp ecx, ebx
        je public_53f277
        call public_4f7a90
        mov dword ptr ds : [esi+0xC4], ebx
        public_53f277 : nop
        mov ecx, dword ptr ds : [esi+0xBC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x14], bl
        je public_53f290
        call public_4f7a90
        mov dword ptr ds : [esi+0xBC], ebx
        public_53f290 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        cmp eax, ebx
        je public_53f2a6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xB8], ebx
        public_53f2a6 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        cmp ecx, ebx
        je public_53f2bb
        call public_537ad0
        mov dword ptr ds : [esi+0xC0], ebx
        public_53f2bb : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_5425f0
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x53f1e0)
    }
}

#undef public_53f231
#undef public_53f247
#undef public_53f25c
#undef public_53f277
#undef public_53f290
#undef public_53f2a6
#undef public_53f2bb
