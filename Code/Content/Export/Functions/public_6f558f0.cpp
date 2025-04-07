#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f558f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf6c1);

#define public_6f55939 _public_6f55939
#define public_6f55941 _public_6f55941
#define public_6f55947 _public_6f55947
#define public_6f55967 _public_6f55967
#define public_6f55975 _public_6f55975
#define public_6f55980 _public_6f55980
#define public_6f559a3 _public_6f559a3

PROC_DECLARE(0x6f558f0, internal_6f558f0, public_6f558f0);
extern "C" NAKED register_t __cdecl internal_6f558f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf6c1 @0x6f558f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf6c1
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
        je public_6f559a3
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6f55939
        xor eax, eax
        jmp public_6f55941
        public_6f55939 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f55941 : nop
        test eax, eax
        jge public_6f55947
        xor eax, eax
        public_6f55947 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6f55980
        push ebx
        public_6f55967 : nop
        test ecx, ecx
        je public_6f55975
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        public_6f55975 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f55967
        pop ebx
        public_6f55980 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        add esi, 0x14
        mov eax, dword ptr ds : [esi]
        add edi, 0x14
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        pop esi
        public_6f559a3 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f558f0)
    }
}

#undef public_6f55939
#undef public_6f55941
#undef public_6f55947
#undef public_6f55967
#undef public_6f55975
#undef public_6f55980
#undef public_6f559a3
