#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);

#define public_6cf6bfe _public_6cf6bfe
#define public_6cf6c22 _public_6cf6c22
#define public_6cf6c49 _public_6cf6c49

PROC_DECLARE(0x6cf6bc0, internal_6cf6bc0, public_6cf6bc0);
extern "C" NAKED register_t __cdecl internal_6cf6bc0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x28]
        test al, al
        jne public_6cf6c49
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6cf6c22
        push esi
        mov ecx, edi
        call public_6cf7140
        mov ebx, eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf6bfe
        push esi
        mov ecx, edi
        call public_6cf7260
        test al, al
        je public_6cf6c49
        public_6cf6bfe : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ebx+0x2F0], 1
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        add edi, 0x38
        push edi
        call dword ptr ds : [edx+0xCC]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6cf6c22 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, 0x100002
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0x23C
/*FIXUP push offset public_6d669dc @0x6cf6c39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d669dc
/*FIXUP push offset public_6d66a10 @0x6cf6c3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66a10
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6cf6c49 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6cf6bc0)
    }
}

#undef public_6cf6bfe
#undef public_6cf6c22
#undef public_6cf6c49
