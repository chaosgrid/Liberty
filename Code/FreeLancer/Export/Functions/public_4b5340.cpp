#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5340);
CLANG_FORWARD_PROC_SYMBOL(public_4b6870);
CLANG_FORWARD_PROC_SYMBOL(public_526960);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd114);

#define public_4b5382 _public_4b5382
#define public_4b53d8 _public_4b53d8
#define public_4b53e0 _public_4b53e0
#define public_4b5406 _public_4b5406
#define public_4b540a _public_4b540a
#define public_4b5454 _public_4b5454
#define public_4b5463 _public_4b5463
#define public_4b548f _public_4b548f
#define public_4b54a6 _public_4b54a6

PROC_DECLARE(0x4b5340, internal_4b5340, public_4b5340);
extern "C" NAKED register_t __cdecl internal_4b5340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd114 @0x4b5342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd114
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [ebp], offset public_5d5454
        mov eax, dword ptr ds : [public_672288]
        xor ebx, ebx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x34], 1
        jne public_4b5382
        mov dword ptr ds : [public_672288], ebx
        public_4b5382 : nop
        mov edi, dword ptr ss : [ebp+0x154]
        mov ecx, dword ptr ss : [ebp+0x160]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x150]
        mov dword ptr ss : [esp+0x10], eax
        je public_4b53d8
        mov ecx, eax
        cmp eax, ecx
        jne public_4b53d8
        cmp edi, edi
        jne public_4b53d8
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_4b6870
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_4b540a
        public_4b53d8 : nop
        cmp eax, edi
        je public_4b5406
        lea esp, ss:[esp]
        public_4b53e0 : nop
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_526960
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4b53e0
        public_4b5406 : nop
        mov dword ptr ss : [esp+0x14], eax
        public_4b540a : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        lea esi, ss:[ebp+0xEC]
        add esp, 8
        mov dword ptr ss : [esp+0x18], esi
        add esi, 0x10
        mov dword ptr ss : [esp+0x28], esi
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 4
        call public_4144f0
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x34], 3
        je public_4b5463
        public_4b5454 : nop
        push ebx
        mov ecx, edi
        call public_418f70
        add edi, 8
        cmp edi, ebp
        jne public_4b5454
        public_4b5463 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_5b7e1d
        mov edi, dword ptr ds : [public_5c71d8]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebx
        je public_4b548f
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        public_4b548f : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_4b54a6
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        public_4b54a6 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_5a1af0
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4b5340)
    }
}

#undef public_4b5382
#undef public_4b53d8
#undef public_4b53e0
#undef public_4b5406
#undef public_4b540a
#undef public_4b5454
#undef public_4b5463
#undef public_4b548f
#undef public_4b54a6
