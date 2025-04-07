#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7f40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac549);

#define public_6ef7f84 _public_6ef7f84
#define public_6ef7f8c _public_6ef7f8c
#define public_6ef7f92 _public_6ef7f92
#define public_6ef7fb0 _public_6ef7fb0
#define public_6ef7fb8 _public_6ef7fb8
#define public_6ef7fc2 _public_6ef7fc2
#define public_6ef7ffc _public_6ef7ffc
#define public_6ef8004 _public_6ef8004
#define public_6ef800a _public_6ef800a
#define public_6ef8030 _public_6ef8030
#define public_6ef8038 _public_6ef8038
#define public_6ef8042 _public_6ef8042
#define public_6ef8050 _public_6ef8050

PROC_DECLARE(0x6ef7f40, internal_6ef7f40, public_6ef7f40);
extern "C" NAKED register_t __cdecl internal_6ef7f40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac549 @0x6ef7f42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac549
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6ef8050
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ef7f84
        xor eax, eax
        jmp public_6ef7f8c
        public_6ef7f84 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ef7f8c : nop
        test eax, eax
        jge public_6ef7f92
        xor eax, eax
        public_6ef7f92 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ecx, edx
        je public_6ef7fc2
        nop 
        public_6ef7fb0 : nop
        test eax, eax
        je public_6ef7fb8
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6ef7fb8 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6ef7fb0
        public_6ef7fc2 : nop
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], eax
        mov cl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+0x24], cl
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        mov byte ptr ss : [esp+0x18], 1
        jne public_6ef7ffc
        xor eax, eax
        jmp public_6ef8004
        public_6ef7ffc : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, ecx
        sar eax, 2
        public_6ef8004 : nop
        test eax, eax
        jge public_6ef800a
        xor eax, eax
        public_6ef800a : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x28], eax
        mov edx, dword ptr ds : [esi+0x2C]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp eax, edx
        je public_6ef8042
        lea esp, ss:[esp]
        public_6ef8030 : nop
        test ecx, ecx
        je public_6ef8038
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6ef8038 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ef8030
        public_6ef8042 : nop
        mov dword ptr ds : [edi+0x2C], ecx
        mov dword ptr ds : [edi+0x30], ecx
        mov eax, dword ptr ds : [esi+0x34]
        pop esi
        mov dword ptr ds : [edi+0x34], eax
        pop ebx
        public_6ef8050 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef7f40)
    }
}

#undef public_6ef7f84
#undef public_6ef7f8c
#undef public_6ef7f92
#undef public_6ef7fb0
#undef public_6ef7fb8
#undef public_6ef7fc2
#undef public_6ef7ffc
#undef public_6ef8004
#undef public_6ef800a
#undef public_6ef8030
#undef public_6ef8038
#undef public_6ef8042
#undef public_6ef8050
