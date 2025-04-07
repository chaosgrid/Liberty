#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b800);

#define public_6ceeecf _public_6ceeecf
#define public_6ceeef0 _public_6ceeef0
#define public_6ceef0d _public_6ceef0d
#define public_6ceef13 _public_6ceef13
#define public_6ceef1e _public_6ceef1e
#define public_6ceef52 _public_6ceef52

PROC_DECLARE(0x6ceee70, internal_6ceee70, public_6ceee70);
extern "C" NAKED register_t __cdecl internal_6ceee70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18C]
        test al, al
        mov ebx, dword ptr ss : [esp+0x10]
        je public_6ceeecf
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        mov edi, 0x100001
        call dword ptr ds : [public_6d642d8]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        push eax
        call dword ptr ds : [public_6d6419c]
        mov ecx, eax
        add ecx, 8
        call dword ptr ds : [public_6d642d4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0x1CF
/*FIXUP push offset public_6d65b80 @0x6ceeebf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65b80
/*FIXUP push offset public_6d65618 @0x6ceeec4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65618
        push edi
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6ceeecf : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6ceef1e
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ceef13
        lea ecx, ds:[ecx]
        public_6ceeef0 : nop
        mov cx, word ptr ds : [edi+8]
        mov edx, dword ptr ds : [public_6d6401c]
        cmp cx, word ptr ds : [edx]
        lea eax, ds:[edi+8]
        jne public_6ceef0d
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1B4]
        public_6ceef0d : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6ceeef0
        public_6ceef13 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        push ebx
        push esi
        call public_6d0b800
        pop ebp
        public_6ceef1e : nop
        mov al, byte ptr ds : [ebx+0xC]
        test al, al
        je public_6ceef52
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ceef52
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x1B8]
        test al, al
        jne public_6ceef52
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x158]
        public_6ceef52 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ceee70)
    }
}

#undef public_6ceeecf
#undef public_6ceeef0
#undef public_6ceef0d
#undef public_6ceef13
#undef public_6ceef1e
#undef public_6ceef52
