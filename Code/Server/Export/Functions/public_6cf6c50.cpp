#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef450);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6c50);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);

#define public_6cf6c68 _public_6cf6c68
#define public_6cf6c9c _public_6cf6c9c
#define public_6cf6cbd _public_6cf6cbd
#define public_6cf6cc3 _public_6cf6cc3

PROC_DECLARE(0x6cf6c50, internal_6cf6c50, public_6cf6c50);
extern "C" NAKED register_t __cdecl internal_6cf6c50()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x28]
        test al, al
        jne public_6cf6cbd
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6cf6c9c
        public_6cf6c68 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6cf6cc3
        mov ecx, dword ptr ds : [edi+0x38]
        push ecx
        mov ecx, dword ptr ds : [esi]
        call public_6cef450
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx+8], al
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6cf7140
        mov eax, dword ptr ds : [ebx+8]
        add esi, 4
        cmp esi, eax
        jne public_6cf6c68
        public_6cf6c9c : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cf6cbd
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call dword ptr ds : [edx+0xC0]
        public_6cf6cbd : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6cf6cc3 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        mov edi, 0x100001
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0x256
/*FIXUP push offset public_6d669dc @0x6cf6cda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d669dc
/*FIXUP push offset public_6d66a60 @0x6cf6cdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66a60
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6cf6c50)
    }
}

#undef public_6cf6c68
#undef public_6cf6c9c
#undef public_6cf6cbd
#undef public_6cf6cc3
