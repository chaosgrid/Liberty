#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3df0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2161);

#define public_6fa3e35 _public_6fa3e35
#define public_6fa3e3d _public_6fa3e3d
#define public_6fa3e43 _public_6fa3e43
#define public_6fa3e63 _public_6fa3e63
#define public_6fa3e6b _public_6fa3e6b
#define public_6fa3e76 _public_6fa3e76
#define public_6fa3ea1 _public_6fa3ea1

PROC_DECLARE(0x6fa3df0, internal_6fa3df0, public_6fa3df0);
extern "C" NAKED register_t __cdecl internal_6fa3df0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2161 @0x6fa3df2*/
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
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6fa3ea1
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        jne public_6fa3e35
        xor eax, eax
        jmp public_6fa3e3d
        public_6fa3e35 : nop
        mov eax, dword ptr ds : [edi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6fa3e3d : nop
        test eax, eax
        jge public_6fa3e43
        xor eax, eax
        public_6fa3e43 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp eax, edx
        je public_6fa3e76
        push ebx
        public_6fa3e63 : nop
        test ecx, ecx
        je public_6fa3e6b
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6fa3e6b : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6fa3e63
        pop ebx
        public_6fa3e76 : nop
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dl, byte ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], offset public_6fbc690
        mov byte ptr ds : [esi+0x14], dl
        mov al, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], al
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi], offset public_6fbc660
        pop edi
        public_6fa3ea1 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa3df0)
    }
}

#undef public_6fa3e35
#undef public_6fa3e3d
#undef public_6fa3e43
#undef public_6fa3e63
#undef public_6fa3e6b
#undef public_6fa3e76
#undef public_6fa3ea1
