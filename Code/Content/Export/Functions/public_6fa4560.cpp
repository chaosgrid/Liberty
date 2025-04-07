#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4560);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2161);

#define public_6fa45a5 _public_6fa45a5
#define public_6fa45ad _public_6fa45ad
#define public_6fa45b3 _public_6fa45b3
#define public_6fa45d2 _public_6fa45d2
#define public_6fa45da _public_6fa45da
#define public_6fa45e4 _public_6fa45e4
#define public_6fa45eb _public_6fa45eb

PROC_DECLARE(0x6fa4560, internal_6fa4560, public_6fa4560);
extern "C" NAKED register_t __cdecl internal_6fa4560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2161 @0x6fa4562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb2161
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
        je public_6fa45eb
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6fa45a5
        xor eax, eax
        jmp public_6fa45ad
        public_6fa45a5 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6fa45ad : nop
        test eax, eax
        jge public_6fa45b3
        xor eax, eax
        public_6fa45b3 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6fa45e4
        public_6fa45d2 : nop
        test ecx, ecx
        je public_6fa45da
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6fa45da : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6fa45d2
        public_6fa45e4 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        pop esi
        public_6fa45eb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa4560)
    }
}

#undef public_6fa45a5
#undef public_6fa45ad
#undef public_6fa45b3
#undef public_6fa45d2
#undef public_6fa45da
#undef public_6fa45e4
#undef public_6fa45eb
