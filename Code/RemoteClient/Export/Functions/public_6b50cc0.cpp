#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50cc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6ac11);

#define public_6b50d15 _public_6b50d15
#define public_6b50d23 _public_6b50d23
#define public_6b50d36 _public_6b50d36
#define public_6b50d6d _public_6b50d6d
#define public_6b50d7a _public_6b50d7a
#define public_6b50d8e _public_6b50d8e
#define public_6b50daa _public_6b50daa
#define public_6b50dbe _public_6b50dbe
#define public_6b50ddc _public_6b50ddc
#define public_6b50dfd _public_6b50dfd
#define public_6b50e06 _public_6b50e06

PROC_DECLARE(0x6b50cc0, internal_6b50cc0, public_6b50cc0);
extern "C" NAKED register_t __cdecl internal_6b50cc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6ac11 @0x6b50cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6ac11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b50e06
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_6b6b128]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_6b50d15
        mov ebx, esi
        public_6b50d15 : nop
        cmp ebp, edi
        jne public_6b50d7a
        cmp ebx, ecx
        jbe public_6b50d23
        call dword ptr ds : [public_6b6b124]
        public_6b50d23 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6b6b130]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6b50d36
        mov esi, eax
        public_6b50d36 : nop
        test esi, esi
        jbe public_6b50d6d
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6b6b1c4]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b194]
        test al, al
        je public_6b50d6d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b150]
        public_6b50d6d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6b6b130]
        jmp public_6b50dfd
        public_6b50d7a : nop
        cmp ebx, ecx
        jbe public_6b50dbe
        cmp ebx, eax
        jne public_6b50dbe
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6b50d8e
        mov eax, dword ptr ds : [public_6b6b14c]
        public_6b50d8e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6b50dbe
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6b6b154]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6b50daa
        mov eax, dword ptr ds : [public_6b6b14c]
        public_6b50daa : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6b50dfd
        public_6b50dbe : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b194]
        test al, al
        je public_6b50dfd
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6b6b14c]
        je public_6b50ddc
        mov esi, edi
        public_6b50ddc : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6b50dfd : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_6b50e06 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6b50cc0)
    }
}

#undef public_6b50d15
#undef public_6b50d23
#undef public_6b50d36
#undef public_6b50d6d
#undef public_6b50d7a
#undef public_6b50d8e
#undef public_6b50daa
#undef public_6b50dbe
#undef public_6b50ddc
#undef public_6b50dfd
#undef public_6b50e06
