#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31040);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae7c1);

#define public_6f31085 _public_6f31085
#define public_6f3108d _public_6f3108d
#define public_6f31093 _public_6f31093
#define public_6f310b3 _public_6f310b3
#define public_6f310c1 _public_6f310c1
#define public_6f310cc _public_6f310cc
#define public_6f310d9 _public_6f310d9

PROC_DECLARE(0x6f31040, internal_6f31040, public_6f31040);
extern "C" NAKED register_t __cdecl internal_6f31040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae7c1 @0x6f31042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae7c1
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
        je public_6f310d9
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6f31085
        xor eax, eax
        jmp public_6f3108d
        public_6f31085 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f3108d : nop
        test eax, eax
        jge public_6f31093
        xor eax, eax
        public_6f31093 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6f310cc
        push ebx
        public_6f310b3 : nop
        test ecx, ecx
        je public_6f310c1
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        public_6f310c1 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f310b3
        pop ebx
        public_6f310cc : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        pop esi
        public_6f310d9 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f31040)
    }
}

#undef public_6f31085
#undef public_6f3108d
#undef public_6f31093
#undef public_6f310b3
#undef public_6f310c1
#undef public_6f310cc
#undef public_6f310d9
