#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faea81);

#define public_6f33297 _public_6f33297
#define public_6f3329f _public_6f3329f
#define public_6f332a5 _public_6f332a5
#define public_6f332c5 _public_6f332c5
#define public_6f332cd _public_6f332cd
#define public_6f332d8 _public_6f332d8
#define public_6f332e5 _public_6f332e5

PROC_DECLARE(0x6f33230, internal_6f33230, public_6f33230);
extern "C" NAKED register_t __cdecl internal_6f33230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faea81 @0x6f33232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faea81
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
        je public_6f332e5
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov al, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [edi+0x18], al
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6f33297
        xor eax, eax
        jmp public_6f3329f
        public_6f33297 : nop
        mov eax, dword ptr ds : [esi+0x20]
        sub eax, ecx
        sar eax, 2
        public_6f3329f : nop
        test eax, eax
        jge public_6f332a5
        xor eax, eax
        public_6f332a5 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0x1C], eax
        mov edx, dword ptr ds : [esi+0x20]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 4
        cmp eax, edx
        je public_6f332d8
        push ebx
        public_6f332c5 : nop
        test ecx, ecx
        je public_6f332cd
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f332cd : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f332c5
        pop ebx
        public_6f332d8 : nop
        mov dword ptr ds : [edi+0x20], ecx
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], edx
        pop esi
        public_6f332e5 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f33230)
    }
}

#undef public_6f33297
#undef public_6f3329f
#undef public_6f332a5
#undef public_6f332c5
#undef public_6f332cd
#undef public_6f332d8
#undef public_6f332e5
