#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_629bf00);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393933);

#define public_629bf40 _public_629bf40
#define public_629bf4f _public_629bf4f
#define public_629bf60 _public_629bf60
#define public_629bf6e _public_629bf6e
#define public_629bf8f _public_629bf8f
#define public_629bf98 _public_629bf98

PROC_DECLARE(0x629bf00, internal_629bf00, public_629bf00);
extern "C" NAKED register_t __cdecl internal_629bf00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393933 @0x629bf02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393933
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_639d50c
        mov eax, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [esi+0x68]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], 1
        je public_629bf4f
        lea esp, ss:[esp]
        public_629bf40 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x4C], ebx
        mov ecx, dword ptr ds : [esi+0x68]
        add eax, 4
        cmp eax, ecx
        jne public_629bf40
        public_629bf4f : nop
        mov ecx, dword ptr ds : [esi+0x68]
        cmp ecx, ecx
        mov edx, dword ptr ds : [esi+0x64]
        mov eax, ecx
        je public_629bf6e
        nop 
        lea esp, ss:[esp]
        public_629bf60 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_629bf60
        public_629bf6e : nop
        mov dword ptr ds : [esi+0x68], edx
        mov edi, dword ptr ds : [esi+0x80]
        cmp edi, ebx
        je public_629bf98
        cmp dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi], offset public_639d6a8
        jne public_629bf8f
        push ebx
        call public_628b440
        add esp, 4
        public_629bf8f : nop
        push edi
        call public_6391d5a
        add esp, 4
        public_629bf98 : nop
        mov ecx, esi
        call public_629edf0
        mov eax, dword ptr ds : [esi+0x64]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6293160
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629bf00)
    }
}

#undef public_629bf40
#undef public_629bf4f
#undef public_629bf60
#undef public_629bf6e
#undef public_629bf8f
#undef public_629bf98
