#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d046c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d054d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06030);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6110b);

#define public_6d046f2 _public_6d046f2
#define public_6d04710 _public_6d04710
#define public_6d04718 _public_6d04718
#define public_6d04722 _public_6d04722
#define public_6d04727 _public_6d04727
#define public_6d04729 _public_6d04729
#define public_6d0472d _public_6d0472d
#define public_6d0478f _public_6d0478f
#define public_6d04793 _public_6d04793
#define public_6d047b7 _public_6d047b7

PROC_DECLARE(0x6d046c0, internal_6d046c0, public_6d046c0);
extern "C" NAKED register_t __cdecl internal_6d046c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6110b @0x6d046c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6110b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        lea ebp, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ds : [edi]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6d0472d
        public_6d046f2 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x15C]
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_6d04710
        push eax
        call public_6d06030
        add esp, 4
        jmp public_6d04727
        public_6d04710 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d04722
        public_6d04718 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d04718
        public_6d04722 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d04729
        public_6d04727 : nop
        mov esi, eax
        public_6d04729 : nop
        cmp esi, edi
        jne public_6d046f2
        public_6d0472d : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x20]
        cmp ecx, ebx
        lea esi, ss:[ebp+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d0478f
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6d5c540
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_6d0478f
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_6d0478f
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, esi
        call public_6d05ff0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        jmp public_6d047b7
        public_6d0478f : nop
        cmp eax, edi
        je public_6d047b7
        public_6d04793 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d051d0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6d58e50
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d04793
        public_6d047b7 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6d054d0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d046c0)
    }
}

#undef public_6d046f2
#undef public_6d04710
#undef public_6d04718
#undef public_6d04722
#undef public_6d04727
#undef public_6d04729
#undef public_6d0472d
#undef public_6d0478f
#undef public_6d04793
#undef public_6d047b7
