#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58ef1);

#define public_6f3fc15 _public_6f3fc15
#define public_6f3fc1d _public_6f3fc1d
#define public_6f3fc23 _public_6f3fc23
#define public_6f3fc43 _public_6f3fc43
#define public_6f3fc4b _public_6f3fc4b
#define public_6f3fc56 _public_6f3fc56
#define public_6f3fc63 _public_6f3fc63

PROC_DECLARE(0x6f3fbd0, internal_6f3fbd0, public_6f3fbd0);
extern "C" NAKED register_t __cdecl internal_6f3fbd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58ef1 @0x6f3fbd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58ef1
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
        je public_6f3fc63
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6f3fc15
        xor eax, eax
        jmp public_6f3fc1d
        public_6f3fc15 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6f3fc1d : nop
        test eax, eax
        jge public_6f3fc23
        xor eax, eax
        public_6f3fc23 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6f57e9c
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6f3fc56
        push ebx
        public_6f3fc43 : nop
        test ecx, ecx
        je public_6f3fc4b
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f3fc4b : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f3fc43
        pop ebx
        public_6f3fc56 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        mov al, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], al
        pop esi
        public_6f3fc63 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f3fbd0)
    }
}

#undef public_6f3fc15
#undef public_6f3fc1d
#undef public_6f3fc23
#undef public_6f3fc43
#undef public_6f3fc4b
#undef public_6f3fc56
#undef public_6f3fc63
