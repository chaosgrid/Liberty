#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f58d70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf7e1);

#define public_6f58db5 _public_6f58db5
#define public_6f58dbd _public_6f58dbd
#define public_6f58dc3 _public_6f58dc3
#define public_6f58de2 _public_6f58de2
#define public_6f58dea _public_6f58dea
#define public_6f58df4 _public_6f58df4
#define public_6f58dfb _public_6f58dfb

PROC_DECLARE(0x6f58d70, internal_6f58d70, public_6f58d70);
extern "C" NAKED register_t __cdecl internal_6f58d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf7e1 @0x6f58d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf7e1
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
        je public_6f58dfb
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6f58db5
        xor eax, eax
        jmp public_6f58dbd
        public_6f58db5 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6f58dbd : nop
        test eax, eax
        jge public_6f58dc3
        xor eax, eax
        public_6f58dc3 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6f58df4
        public_6f58de2 : nop
        test ecx, ecx
        je public_6f58dea
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f58dea : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f58de2
        public_6f58df4 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        pop esi
        public_6f58dfb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f58d70)
    }
}

#undef public_6f58db5
#undef public_6f58dbd
#undef public_6f58dc3
#undef public_6f58de2
#undef public_6f58dea
#undef public_6f58df4
#undef public_6f58dfb
