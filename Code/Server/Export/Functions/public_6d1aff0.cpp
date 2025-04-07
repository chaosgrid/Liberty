#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d1aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d620c4);

#define public_6d1b040 _public_6d1b040
#define public_6d1b065 _public_6d1b065
#define public_6d1b092 _public_6d1b092
#define public_6d1b0a3 _public_6d1b0a3
#define public_6d1b0b8 _public_6d1b0b8
#define public_6d1b0e6 _public_6d1b0e6
#define public_6d1b0f2 _public_6d1b0f2
#define public_6d1b115 _public_6d1b115
#define public_6d1b121 _public_6d1b121

PROC_DECLARE(0x6d1aff0, internal_6d1aff0, public_6d1aff0);
extern "C" NAKED register_t __cdecl internal_6d1aff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d620c4 @0x6d1aff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d620c4
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
        mov dword ptr ds : [esi], offset public_6d68a20
        mov dword ptr ss : [esp+0x28], 5
        call public_6d1c1a0
        mov ebp, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        lea edi, ds:[esi+0x5C]
        mov byte ptr ss : [esp+0x28], 4
        mov dword ptr ss : [esp+0x10], eax
        je public_6d1b065
        nop 
        lea esp, ss:[esp]
        public_6d1b040 : nop
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6d0f620
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6d1b040
        public_6d1b065 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov cl, byte ptr ds : [esi+0x54]
        add esp, 4
        test cl, cl
        mov byte ptr ss : [esp+0x28], 3
        je public_6d1b092
        mov ecx, dword ptr ds : [esi+0x58]
        cmp ecx, eax
        je public_6d1b092
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d1b092 : nop
        mov ebx, dword ptr ds : [esi+0x4C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0x48]
        mov byte ptr ss : [esp+0x28], 2
        je public_6d1b0b8
        public_6d1b0a3 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_6d0f620
        cmp edi, ebx
        jne public_6d1b0a3
        public_6d1b0b8 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        xor edi, edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov eax, dword ptr ds : [esi+0x3C]
        add esp, 4
        cmp eax, edi
        je public_6d1b0f2
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d1b0e6
        cmp cl, 0xFF
        je public_6d1b0e6
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1b0f2
        public_6d1b0e6 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1b0f2 : nop
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x44], edi
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, edi
        je public_6d1b121
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d1b115
        cmp cl, 0xFF
        je public_6d1b115
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1b121
        public_6d1b115 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1b121 : nop
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6d1b6f0
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d1aff0)
    }
}

#undef public_6d1b040
#undef public_6d1b065
#undef public_6d1b092
#undef public_6d1b0a3
#undef public_6d1b0b8
#undef public_6d1b0e6
#undef public_6d1b0f2
#undef public_6d1b115
#undef public_6d1b121
