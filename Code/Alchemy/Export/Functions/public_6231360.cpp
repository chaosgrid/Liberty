#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_62307b0);
CLANG_FORWARD_PROC_SYMBOL(public_6230f30);
CLANG_FORWARD_PROC_SYMBOL(public_6231360);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249a70);

#define public_6231387 _public_6231387
#define public_6231389 _public_6231389
#define public_62313de _public_62313de
#define public_62313ed _public_62313ed
#define public_623140a _public_623140a
#define public_6231418 _public_6231418
#define public_6231451 _public_6231451

PROC_DECLARE(0x6231360, internal_6231360, public_6231360);
extern "C" NAKED register_t __cdecl internal_6231360()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249a70 @0x6231368*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249a70
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        cmp ecx, ebp
        push edi
        je public_6231387
        lea edi, ds:[ecx+0xC]
        jmp public_6231389
        public_6231387 : nop
        xor edi, edi
        public_6231389 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea esi, ds:[edi+0xB4]
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x18], esi
        push ecx
        mov bl, 1
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], bl
        call public_62307b0
        push ecx
        mov byte ptr ss : [esp+0x34], 2
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, esi
        call public_6230790
        lea edx, ss:[esp+0x1C]
        mov ecx, esi
        push edx
        mov byte ptr ss : [esp+0x38], bl
        call public_6230f30
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ebp
        cmp eax, ebp
        je public_62313ed
        public_62313de : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        jne public_62313de
        public_62313ed : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov ebx, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x2C], 3
        je public_6231418
        public_623140a : nop
        mov ecx, esi
        call public_620d670
        add esi, 4
        cmp esi, ebx
        jne public_623140a
        public_6231418 : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebp
        mov dword ptr ds : [edi+0xA0], ebp
        mov dword ptr ds : [edi+0xA4], ebp
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6231451
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebp
        public_6231451 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6231360)
    }
}

#undef public_6231387
#undef public_6231389
#undef public_62313de
#undef public_62313ed
#undef public_623140a
#undef public_6231418
#undef public_6231451
