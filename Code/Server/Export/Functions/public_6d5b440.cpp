#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce42f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4350);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7540);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b440);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c550);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63d26);

#define public_6d5b487 _public_6d5b487
#define public_6d5b4b0 _public_6d5b4b0
#define public_6d5b4bf _public_6d5b4bf
#define public_6d5b55b _public_6d5b55b
#define public_6d5b560 _public_6d5b560
#define public_6d5b584 _public_6d5b584

PROC_DECLARE(0x6d5b440, internal_6d5b440, public_6d5b440);
extern "C" NAKED register_t __cdecl internal_6d5b440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63d26 @0x6d5b442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63d26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_6d64ee8
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [public_6d90450]
        cmp eax, ecx
        lea esi, ds:[edi+4]
        mov dword ptr ss : [esp+0x24], 1
        jne public_6d5b487
        mov eax, ecx
        dec eax
        mov dword ptr ds : [public_6d90450], eax
        public_6d5b487 : nop
        push esi
        mov ecx, offset public_6d90400
        call public_6cf7a40
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6d90400
        mov ebx, eax
        call public_6d5c810
        mov esi, dword ptr ds : [eax]
        cmp esi, ebx
        mov dword ptr ss : [esp+0xC], esi
        je public_6d5b4bf
        mov edi, edi
        public_6d5b4b0 : nop
        lea ecx, ss:[esp+0xC]
        call public_6d160d0
        cmp dword ptr ss : [esp+0xC], ebx
        jne public_6d5b4b0
        public_6d5b4bf : nop
        push ebx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_6d90400
        call public_6d5c550
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x1C]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        xor ebx, ebx
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], bl
        call public_6cf7540
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [edi+0x18]
        lea esi, ds:[edi+8]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_6d5b55b
        mov ecx, eax
        cmp eax, ecx
        jne public_6d5b55b
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_6ce42f0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        jmp public_6d5b584
        public_6d5b55b : nop
        cmp eax, edi
        je public_6d5b584
        nop 
        public_6d5b560 : nop
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6ce4350
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6ce3ea0
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6d5b560
        public_6d5b584 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d5b440)
    }
}

#undef public_6d5b487
#undef public_6d5b4b0
#undef public_6d5b4bf
#undef public_6d5b55b
#undef public_6d5b560
#undef public_6d5b584
