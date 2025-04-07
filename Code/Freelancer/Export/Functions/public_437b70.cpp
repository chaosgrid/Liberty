#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437b70);
CLANG_FORWARD_PROC_SYMBOL(public_4382b0);
CLANG_FORWARD_PROC_SYMBOL(public_438520);
CLANG_FORWARD_PROC_SYMBOL(public_4388f0);
CLANG_FORWARD_PROC_SYMBOL(public_438930);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9298);

#define public_437bc0 _public_437bc0
#define public_437bdf _public_437bdf
#define public_437c04 _public_437c04
#define public_437c08 _public_437c08
#define public_437c28 _public_437c28
#define public_437c74 _public_437c74
#define public_437c78 _public_437c78
#define public_437c9c _public_437c9c

PROC_DECLARE(0x437b70, internal_437b70, public_437b70);
extern "C" NAKED register_t __cdecl internal_437b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9298 @0x437b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9298
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_437c04
        mov ecx, eax
        cmp eax, ecx
        jne public_437c04
        cmp edi, edi
        jne public_437c04
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_437bdf
        lea esp, ss:[esp]
        public_437bc0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4388f0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_437bc0
        public_437bdf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_437c28
        public_437c04 : nop
        cmp eax, edi
        je public_437c28
        public_437c08 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_438930
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_438520
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_437c08
        public_437c28 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_437c74
        mov ecx, eax
        cmp eax, ecx
        jne public_437c74
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_4388f0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_437c9c
        public_437c74 : nop
        cmp eax, edi
        je public_437c9c
        public_437c78 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_4382b0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_438520
        cmp dword ptr ss : [esp+0x10], edi
        jne public_437c78
        public_437c9c : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x437b70)
    }
}

#undef public_437bc0
#undef public_437bdf
#undef public_437c04
#undef public_437c08
#undef public_437c28
#undef public_437c74
#undef public_437c78
#undef public_437c9c
