#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272b50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63928e1);

#define public_6272b95 _public_6272b95
#define public_6272b9d _public_6272b9d
#define public_6272ba3 _public_6272ba3
#define public_6272bc2 _public_6272bc2
#define public_6272bca _public_6272bca
#define public_6272bd4 _public_6272bd4
#define public_6272bdb _public_6272bdb

PROC_DECLARE(0x6272b50, internal_6272b50, public_6272b50);
extern "C" NAKED register_t __cdecl internal_6272b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63928e1 @0x6272b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63928e1
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
        je public_6272bdb
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6272b95
        xor eax, eax
        jmp public_6272b9d
        public_6272b95 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6272b9d : nop
        test eax, eax
        jge public_6272ba3
        xor eax, eax
        public_6272ba3 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6272bd4
        public_6272bc2 : nop
        test ecx, ecx
        je public_6272bca
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6272bca : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6272bc2
        public_6272bd4 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        pop esi
        public_6272bdb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6272b50)
    }
}

#undef public_6272b95
#undef public_6272b9d
#undef public_6272ba3
#undef public_6272bc2
#undef public_6272bca
#undef public_6272bd4
#undef public_6272bdb
