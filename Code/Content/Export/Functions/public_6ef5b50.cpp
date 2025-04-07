#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6790);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac40d);

#define public_6ef5c20 _public_6ef5c20
#define public_6ef5c2a _public_6ef5c2a
#define public_6ef5c4a _public_6ef5c4a
#define public_6ef5c62 _public_6ef5c62
#define public_6ef5c70 _public_6ef5c70
#define public_6ef5c7a _public_6ef5c7a
#define public_6ef5c7d _public_6ef5c7d

PROC_DECLARE(0x6ef5b50, internal_6ef5b50, public_6ef5b50);
extern "C" NAKED register_t __cdecl internal_6ef5b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac40d @0x6ef5b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac40d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], 2
        mov dword ptr ds : [esi+8], 7
        or ebx, 0xFFFFFFFF
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi+0x14], al
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov cl, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi+0x28], cl
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov ebp, dword ptr ds : [public_6fb3030]
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x20], 1
        call ebp
        lea ecx, ds:[esi+0x3C]
        call ebp
        mov dl, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x44]
        mov dword ptr ds : [esi+0x40], edi
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov al, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], 0x40977000
        mov byte ptr ds : [esi+0x60], al
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], ebx
        mov byte ptr ds : [esi+0x74], 1
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], 0x18
        mov ebp, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, ebp
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 3
        je public_6ef5c2a
        lea ebx, ds:[ebx]
        public_6ef5c20 : nop
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [edx], bl
        inc edx
        inc eax
        cmp eax, ebp
        jne public_6ef5c20
        public_6ef5c2a : nop
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, edi
        mov byte ptr ss : [esp+0x13], 1
        je public_6ef5c4a
        mov ebp, edx
        sub edx, eax
        cmp edx, 9
        jae public_6ef5c62
        cmp eax, edi
        je public_6ef5c4a
        mov edi, ebp
        sub edi, eax
        public_6ef5c4a : nop
        lea edx, ss:[esp+0x13]
        push edx
        mov edx, dword ptr ds : [ecx+8]
        mov eax, 9
        sub eax, edi
        push eax
        push edx
        call public_6ef6790
        jmp public_6ef5c7d
        public_6ef5c62 : nop
        jbe public_6ef5c7d
        lea edi, ds:[eax+9]
        mov eax, ebp
        cmp eax, ebp
        je public_6ef5c7a
        lea ecx, ds:[ecx]
        public_6ef5c70 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [edi], dl
        inc edi
        inc eax
        cmp eax, ebp
        jne public_6ef5c70
        public_6ef5c7a : nop
        mov dword ptr ds : [ecx+8], edi
        public_6ef5c7d : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        mov ecx, esi
        call public_6ef5ca0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ef5b50)
    }
}

#undef public_6ef5c20
#undef public_6ef5c2a
#undef public_6ef5c4a
#undef public_6ef5c62
#undef public_6ef5c70
#undef public_6ef5c7a
#undef public_6ef5c7d
