#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe71);

#define public_6f6fa15 _public_6f6fa15
#define public_6f6fa1d _public_6f6fa1d
#define public_6f6fa23 _public_6f6fa23
#define public_6f6fa42 _public_6f6fa42
#define public_6f6fa4a _public_6f6fa4a
#define public_6f6fa54 _public_6f6fa54
#define public_6f6fa5b _public_6f6fa5b

PROC_DECLARE(0x6f6f9d0, internal_6f6f9d0, public_6f6f9d0);
extern "C" NAKED register_t __cdecl internal_6f6f9d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafe71 @0x6f6f9d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe71
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
        je public_6f6fa5b
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6f6fa15
        xor eax, eax
        jmp public_6f6fa1d
        public_6f6fa15 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6f6fa1d : nop
        test eax, eax
        jge public_6f6fa23
        xor eax, eax
        public_6f6fa23 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6f6fa54
        public_6f6fa42 : nop
        test ecx, ecx
        je public_6f6fa4a
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f6fa4a : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f6fa42
        public_6f6fa54 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        pop esi
        public_6f6fa5b : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f6f9d0)
    }
}

#undef public_6f6fa15
#undef public_6f6fa1d
#undef public_6f6fa23
#undef public_6f6fa42
#undef public_6f6fa4a
#undef public_6f6fa54
#undef public_6f6fa5b
