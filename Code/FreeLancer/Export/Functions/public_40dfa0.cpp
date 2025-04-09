#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b876c);

#define public_40dfe9 _public_40dfe9
#define public_40dff1 _public_40dff1
#define public_40dff7 _public_40dff7
#define public_40e015 _public_40e015
#define public_40e01d _public_40e01d
#define public_40e028 _public_40e028
#define public_40e044 _public_40e044
#define public_40e04c _public_40e04c
#define public_40e052 _public_40e052
#define public_40e070 _public_40e070
#define public_40e078 _public_40e078
#define public_40e082 _public_40e082
#define public_40e089 _public_40e089

PROC_DECLARE(0x40dfa0, internal_40dfa0, public_40dfa0);
extern "C" NAKED register_t __cdecl internal_40dfa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b876c @0x40dfa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b876c
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
        je public_40e089
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_40dfe9
        xor eax, eax
        jmp public_40dff1
        public_40dfe9 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_40dff1 : nop
        test eax, eax
        jge public_40dff7
        xor eax, eax
        public_40dff7 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, edx
        je public_40e028
        push ebx
        public_40e015 : nop
        test eax, eax
        je public_40e01d
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_40e01d : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_40e015
        pop ebx
        public_40e028 : nop
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+0x10], eax
        mov al, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], al
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_40e044
        xor eax, eax
        jmp public_40e04c
        public_40e044 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        public_40e04c : nop
        test eax, eax
        jge public_40e052
        xor eax, eax
        public_40e052 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov esi, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp esi, ecx
        je public_40e082
        nop 
        public_40e070 : nop
        test eax, eax
        je public_40e078
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_40e078 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_40e070
        public_40e082 : nop
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x20], eax
        pop esi
        public_40e089 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40dfa0)
    }
}

#undef public_40dfe9
#undef public_40dff1
#undef public_40dff7
#undef public_40e015
#undef public_40e01d
#undef public_40e028
#undef public_40e044
#undef public_40e04c
#undef public_40e052
#undef public_40e070
#undef public_40e078
#undef public_40e082
#undef public_40e089
