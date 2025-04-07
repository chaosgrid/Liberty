#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d11c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d12b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a8);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61bcb);

#define public_6d12b93 _public_6d12b93
#define public_6d12ba1 _public_6d12ba1
#define public_6d12bca _public_6d12bca

PROC_DECLARE(0x6d12b30, internal_6d12b30, public_6d12b30);
extern "C" NAKED register_t __cdecl internal_6d12b30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d61bcb @0x6d12b38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61bcb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [edi+0x2C]
        mov eax, ebx
        imul eax, 0x68
        add eax, 4
        push eax
        mov dword ptr ds : [esi+0xC], ebx
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6d12b93
/*FIXUP push offset _public_6d11c20 @0x6d12b7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d11c20
/*FIXUP push offset _public_6d11b70 @0x6d12b80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d11b70
        push ebx
        lea ebp, ds:[eax+4]
        push 0x68
        push ebp
        mov dword ptr ds : [eax], ebx
        call public_6d601a8
        public_6d12b93 : nop
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6d12bca
        xor ebx, ebx
        public_6d12ba1 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+8]
        add eax, ebx
        mov dword ptr ds : [eax], ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi+0x28]
        add ebx, 0x68
        cmp ecx, eax
        jne public_6d12ba1
        public_6d12bca : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d12b30)
    }
}

#undef public_6d12b93
#undef public_6d12ba1
#undef public_6d12bca
