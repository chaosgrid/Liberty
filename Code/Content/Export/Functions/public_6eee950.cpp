#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee950);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabdf1);

#define public_6eee9b0 _public_6eee9b0
#define public_6eee9c5 _public_6eee9c5
#define public_6eee9e7 _public_6eee9e7
#define public_6eee9f8 _public_6eee9f8

PROC_DECLARE(0x6eee950, internal_6eee950, public_6eee950);
extern "C" NAKED register_t __cdecl internal_6eee950()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabdf1 @0x6eee952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabdf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6eee9f8
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [edi+4]
        push 0x28
        mov byte ptr ds : [esi+4], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebx
        mov edi, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x28], edi
        je public_6eee9f8
        mov edi, edi
        public_6eee9b0 : nop
        mov edi, dword ptr ss : [ebp+4]
        push 0x28
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebp
        jne public_6eee9c5
        mov edi, eax
        public_6eee9c5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6eee9e7
        mov ecx, 8
        lea esi, ds:[ebx+8]
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        public_6eee9e7 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6eee9b0
        public_6eee9f8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eee950)
    }
}

#undef public_6eee9b0
#undef public_6eee9c5
#undef public_6eee9e7
#undef public_6eee9f8
