#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);

#define public_6cf6d9e _public_6cf6d9e
#define public_6cf6dc2 _public_6cf6dc2
#define public_6cf6de9 _public_6cf6de9

PROC_DECLARE(0x6cf6d60, internal_6cf6d60, public_6cf6d60);
extern "C" NAKED register_t __cdecl internal_6cf6d60()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x28]
        test al, al
        jne public_6cf6de9
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6cf6dc2
        push esi
        mov ecx, edi
        call public_6cf7140
        mov ebx, eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf6d9e
        push esi
        mov ecx, edi
        call public_6cf7260
        test al, al
        je public_6cf6de9
        public_6cf6d9e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ebx+0x2F0], 1
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call dword ptr ds : [edx+0xC4]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6cf6dc2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, 0x100002
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0x28A
/*FIXUP push offset public_6d669dc @0x6cf6dd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d669dc
/*FIXUP push offset public_6d66aa8 @0x6cf6dde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66aa8
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6cf6de9 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6cf6d60)
    }
}

#undef public_6cf6d9e
#undef public_6cf6dc2
#undef public_6cf6de9
