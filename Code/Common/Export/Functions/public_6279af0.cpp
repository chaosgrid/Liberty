#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279af0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392b9e);

#define public_6279b73 _public_6279b73
#define public_6279b7b _public_6279b7b
#define public_6279b81 _public_6279b81
#define public_6279ba4 _public_6279ba4
#define public_6279bbc _public_6279bbc
#define public_6279bcf _public_6279bcf
#define public_6279bd7 _public_6279bd7

PROC_DECLARE(0x6279af0, internal_6279af0, public_6279af0);
extern "C" NAKED register_t __cdecl internal_6279af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392b9e @0x6279af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392b9e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+8], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_6279bd7
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov dl, byte ptr ds : [esi+8]
        add ebp, 4
        lea eax, ds:[esi+8]
        lea ecx, ss:[ebp+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push edi
        push eax
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x18]
        mov byte ptr ss : [ebp+0x14], al
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        jne public_6279b73
        xor eax, eax
        jmp public_6279b7b
        public_6279b73 : nop
        mov eax, dword ptr ds : [esi+0x20]
        sub eax, ecx
        sar eax, 2
        public_6279b7b : nop
        cmp eax, edi
        jge public_6279b81
        xor eax, eax
        public_6279b81 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ss : [ebp+0x18], eax
        mov ebx, dword ptr ds : [esi+0x20]
        mov esi, dword ptr ds : [esi+0x1C]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        mov dword ptr ss : [esp+0x30], edi
        je public_6279bcf
        public_6279ba4 : nop
        mov dword ptr ss : [esp+0x18], edi
        test edi, edi
        mov byte ptr ss : [esp+0x24], 2
        je public_6279bbc
        mov ecx, edi
        call public_6333e30
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        public_6279bbc : nop
        add edi, 4
        add esi, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x30], edi
        jne public_6279ba4
        public_6279bcf : nop
        pop esi
        mov dword ptr ss : [ebp+0x1C], edi
        mov dword ptr ss : [ebp+0x20], edi
        pop ebx
        public_6279bd7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6279af0)
    }
}

#undef public_6279b73
#undef public_6279b7b
#undef public_6279b81
#undef public_6279ba4
#undef public_6279bbc
#undef public_6279bcf
#undef public_6279bd7
