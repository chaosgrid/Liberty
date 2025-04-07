#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7850);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60190);

#define public_6d0d915 _public_6d0d915
#define public_6d0d91d _public_6d0d91d
#define public_6d0d940 _public_6d0d940
#define public_6d0d955 _public_6d0d955
#define public_6d0d96c _public_6d0d96c
#define public_6d0d973 _public_6d0d973
#define public_6d0d97f _public_6d0d97f
#define public_6d0d98b _public_6d0d98b
#define public_6d0d997 _public_6d0d997

PROC_DECLARE(0x6d0d8a0, internal_6d0d8a0, public_6d0d8a0);
extern "C" NAKED register_t __cdecl internal_6d0d8a0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push 0
/*FIXUP push offset public_6d88590 @0x6d0d8ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88590
/*FIXUP push offset public_6d88538 @0x6d0d8b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push 0
        push edi
        mov ebp, ecx
        xor bl, bl
        call public_6d60190
        add esp, 0x14
        test eax, eax
        je public_6d0d98b
        mov esi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        push ebx
        mov ecx, eax
        call public_6ce7850
        test eax, eax
        je public_6d0d97f
        cmp eax, 1
        mov cl, 1
        jne public_6d0d997
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6d0d915
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        mov dword ptr ss : [esp+0x20], eax
        je public_6d0d91d
        public_6d0d915 : nop
        mov dword ptr ss : [esp+0x20], 0
        public_6d0d91d : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0d973
        lea esp, ss:[esp]
        public_6d0d940 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_6d0d955
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf73d0
        test al, al
        je public_6d0d96c
        public_6d0d955 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x40]
        push edx
        call dword ptr ds : [eax+0xE0]
        public_6d0d96c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6d0d940
        public_6d0d973 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d0d97f : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d0d98b : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d0d997 : nop
        pop edi
        pop esi
        pop ebp
        mov al, cl
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d0d8a0)
    }
}

#undef public_6d0d915
#undef public_6d0d91d
#undef public_6d0d940
#undef public_6d0d955
#undef public_6d0d96c
#undef public_6d0d973
#undef public_6d0d97f
#undef public_6d0d98b
#undef public_6d0d997
