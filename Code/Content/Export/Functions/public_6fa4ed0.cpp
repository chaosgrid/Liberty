#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2161);

#define public_6fa4f1b _public_6fa4f1b
#define public_6fa4f23 _public_6fa4f23
#define public_6fa4f29 _public_6fa4f29
#define public_6fa4f44 _public_6fa4f44
#define public_6fa4f4c _public_6fa4f4c
#define public_6fa4f56 _public_6fa4f56
#define public_6fa4f5d _public_6fa4f5d

PROC_DECLARE(0x6fa4ed0, internal_6fa4ed0, public_6fa4ed0);
extern "C" NAKED register_t __cdecl internal_6fa4ed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2161 @0x6fa4ed2*/
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
        je public_6fa4f5d
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov dl, byte ptr ds : [esi+8]
        mov byte ptr ds : [edi+8], dl
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        jne public_6fa4f1b
        xor eax, eax
        jmp public_6fa4f23
        public_6fa4f1b : nop
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, ecx
        sar eax, 2
        public_6fa4f23 : nop
        test eax, eax
        jge public_6fa4f29
        xor eax, eax
        public_6fa4f29 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0xC], eax
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        cmp eax, edx
        je public_6fa4f56
        public_6fa4f44 : nop
        test ecx, ecx
        je public_6fa4f4c
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6fa4f4c : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6fa4f44
        public_6fa4f56 : nop
        mov dword ptr ds : [edi+0x10], ecx
        mov dword ptr ds : [edi+0x14], ecx
        pop esi
        public_6fa4f5d : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa4ed0)
    }
}

#undef public_6fa4f1b
#undef public_6fa4f23
#undef public_6fa4f29
#undef public_6fa4f44
#undef public_6fa4f4c
#undef public_6fa4f56
#undef public_6fa4f5d
