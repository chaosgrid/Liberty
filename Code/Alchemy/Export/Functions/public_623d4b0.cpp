#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a60c);

#define public_623d527 _public_623d527
#define public_623d547 _public_623d547
#define public_623d5c0 _public_623d5c0
#define public_623d5c2 _public_623d5c2
#define public_623d5d9 _public_623d5d9
#define public_623d5db _public_623d5db
#define public_623d5fb _public_623d5fb
#define public_623d608 _public_623d608

PROC_DECLARE(0x623d4b0, internal_623d4b0, public_623d4b0);
extern "C" NAKED register_t __cdecl internal_623d4b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a60c @0x623d4b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a60c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x5C
        mov dword ptr ss : [esp+0x14], esi
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_623d5c0
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        mov dword ptr ds : [edi], offset public_624ba48
        mov dword ptr ss : [esp+0x1C], esi
        call public_623f7b0
        mov dword ptr ds : [esi+0x4C], ebp
        lea ebx, ds:[esi+0x50]
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ds : [esi], offset public_624f4e0
        mov eax, dword ptr ds : [esi+0x4C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x2C], 3
        je public_623d527
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebp
        public_623d527 : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x2C], 4
        je public_623d547
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        public_623d547 : nop
        mov dword ptr ss : [esp+0x10], 0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 5
        call public_6209fd0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x3F800000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push 0
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x4C], ebp
        mov byte ptr ss : [esp+0x2C], 3
        call public_6209fd0
        mov ecx, ebx
        call public_620a030
        push ebx
        push 0x41200000
        call public_6210900
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [edi], offset public_624f590
        mov dword ptr ds : [edi+4], offset public_624f538
        mov dword ptr ds : [edi+0x58], 1
        xor ebp, ebp
        pop ebx
        jmp public_623d5c2
        public_623d5c0 : nop
        xor edi, edi
        public_623d5c2 : nop
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x9C], edi
        je public_623d5d9
        lea eax, ds:[edi+4]
        jmp public_623d5db
        public_623d5d9 : nop
        xor eax, eax
        public_623d5db : nop
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, edi
        je public_623d608
        cmp eax, ebp
        je public_623d5fb
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebp
        public_623d5fb : nop
        cmp edi, ebp
        mov dword ptr ds : [esi+0x7C], edi
        je public_623d608
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_623d608 : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x623d4b0)
    }
}

#undef public_623d527
#undef public_623d547
#undef public_623d5c0
#undef public_623d5c2
#undef public_623d5d9
#undef public_623d5db
#undef public_623d5fb
#undef public_623d608
