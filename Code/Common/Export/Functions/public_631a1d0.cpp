#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631a1d0);
CLANG_FORWARD_JUMP_SYMBOL(public_63969bd);

#define public_631a27e _public_631a27e
#define public_631a29d _public_631a29d
#define public_631a2b2 _public_631a2b2
#define public_631a2ce _public_631a2ce
#define public_631a2e2 _public_631a2e2
#define public_631a2fd _public_631a2fd
#define public_631a324 _public_631a324
#define public_631a32c _public_631a32c

PROC_DECLARE(0x631a1d0, internal_631a1d0, public_631a1d0);
extern "C" NAKED register_t __cdecl internal_631a1d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63969bd @0x631a1d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63969bd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_631a32c
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        add esi, 4
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], eax
        mov dl, byte ptr ds : [ebx+0x10]
        push edi
        lea ecx, ds:[esi+0xC]
        lea edi, ds:[ebx+0x10]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebp
        mov dword ptr ds : [ecx+0xC], ebp
        mov eax, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [eax]
        push edx
        push ebp
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [ebx+0x20]
        lea edi, ds:[ebx+0x20]
        lea ebp, ds:[esi+0x1C]
        mov byte ptr ss : [ebp], al
        xor eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx]
        mov eax, edx
        cmp ecx, eax
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x2C], eax
        jae public_631a27e
        mov dword ptr ss : [esp+0x2C], ecx
        mov eax, ecx
        public_631a27e : nop
        cmp ebp, edi
        jne public_631a29d
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        jmp public_631a324
        public_631a29d : nop
        test eax, eax
        jbe public_631a2e2
        cmp eax, edx
        jne public_631a2e2
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_631a2b2
        mov ecx, dword ptr ds : [public_63991d0]
        public_631a2b2 : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_631a2e2
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_631a2ce
        mov eax, dword ptr ds : [public_63991d0]
        public_631a2ce : nop
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_631a324
        public_631a2e2 : nop
        push 1
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631a324
        mov eax, dword ptr ds : [ebx+0x24]
        test eax, eax
        jne public_631a2fd
        mov eax, dword ptr ds : [public_63991d0]
        public_631a2fd : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [ebp+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, edx
        mov dword ptr ss : [ebp+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_631a324 : nop
        mov edx, dword ptr ds : [ebx+0x30]
        pop edi
        mov dword ptr ds : [esi+0x2C], edx
        pop ebx
        public_631a32c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x631a1d0)
    }
}

#undef public_631a27e
#undef public_631a29d
#undef public_631a2b2
#undef public_631a2ce
#undef public_631a2e2
#undef public_631a2fd
#undef public_631a324
#undef public_631a32c
