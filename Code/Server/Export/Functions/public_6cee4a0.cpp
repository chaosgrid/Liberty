#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60776);

#define public_6cee510 _public_6cee510
#define public_6cee535 _public_6cee535
#define public_6cee558 _public_6cee558
#define public_6cee56d _public_6cee56d
#define public_6cee591 _public_6cee591
#define public_6cee5a6 _public_6cee5a6
#define public_6cee5ea _public_6cee5ea
#define public_6cee5ec _public_6cee5ec

PROC_DECLARE(0x6cee4a0, internal_6cee4a0, public_6cee4a0);
extern "C" NAKED register_t __cdecl internal_6cee4a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60776 @0x6cee4a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60776
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi-0xC]
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [eax], offset public_6d657ec
        mov dword ptr ds : [esi-8], offset public_6d6576c
        mov dword ptr ds : [esi], offset public_6d65764
        xor ebp, ebp
        push ebp
        mov dword ptr ss : [esp+0x30], 3
        call dword ptr ds : [public_6d64188]
        mov ecx, dword ptr ds : [esi+4]
        call dword ptr ds : [public_6d64364]
        mov ebx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        lea edi, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6cee535
        nop 
        lea esp, ss:[esp]
        public_6cee510 : nop
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d641e8]
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6cee510
        public_6cee535 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov ebx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [ebx]
        lea ebp, ds:[esi+0x20]
        add esp, 4
        cmp edi, ebx
        mov byte ptr ss : [esp+0x2C], 1
        je public_6cee56d
        public_6cee558 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebp
        call public_6d0f620
        cmp edi, ebx
        jne public_6cee558
        public_6cee56d : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov ebx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [ebx]
        lea ebp, ds:[esi+8]
        add esp, 4
        cmp edi, ebx
        mov byte ptr ss : [esp+0x2C], al
        je public_6cee5a6
        public_6cee591 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_6d0f620
        cmp edi, ebx
        jne public_6cee591
        public_6cee5a6 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        xor edi, edi
        add esp, 4
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [esp+0x1C], esi
        lea ecx, ds:[esi-0xC]
        neg ecx
        sbb ecx, ecx
        and ecx, esi
        mov dword ptr ss : [esp+0x2C], 4
        call dword ptr ds : [public_6d64360]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6cee5ea
        lea ecx, ds:[eax+8]
        jmp public_6cee5ec
        public_6cee5ea : nop
        xor ecx, ecx
        public_6cee5ec : nop
        call dword ptr ds : [public_6d6435c]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6cee4a0)
    }
}

#undef public_6cee510
#undef public_6cee535
#undef public_6cee558
#undef public_6cee56d
#undef public_6cee591
#undef public_6cee5a6
#undef public_6cee5ea
#undef public_6cee5ec
