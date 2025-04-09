#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_4da630);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be4a5);

#define public_4da680 _public_4da680
#define public_4da6ba _public_4da6ba
#define public_4da6cb _public_4da6cb
#define public_4da6cd _public_4da6cd
#define public_4da6de _public_4da6de
#define public_4da6e0 _public_4da6e0
#define public_4da702 _public_4da702
#define public_4da704 _public_4da704
#define public_4da721 _public_4da721

PROC_DECLARE(0x4da630, internal_4da630, public_4da630);
extern "C" NAKED register_t __cdecl internal_4da630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be4a5 @0x4da632*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be4a5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x28], ebx
        lea edi, ds:[esi+0x3B8]
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ds : [edi+0xC0]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_5c62a8]
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x28], 6
        je public_4da680
        push ebx
        call ebp
        public_4da680 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea ecx, ds:[esi+0x3A0]
        mov byte ptr ss : [esp+0x28], 4
        call public_4058e0
        mov eax, dword ptr ds : [esi+0x398]
        cmp eax, ebx
        lea ecx, ds:[esi+0x398]
        mov byte ptr ss : [esp+0x28], 3
        je public_4da6ba
        push ebx
        call ebp
        public_4da6ba : nop
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_4da6cb
        lea ecx, ds:[esi+0x384]
        jmp public_4da6cd
        public_4da6cb : nop
        xor ecx, ecx
        public_4da6cd : nop
        call public_576010
        cmp esi, ebx
        je public_4da6de
        lea edi, ds:[esi+0x364]
        jmp public_4da6e0
        public_4da6de : nop
        xor edi, edi
        public_4da6e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_4da702
        lea ecx, ds:[esi+0x38]
        jmp public_4da704
        public_4da702 : nop
        xor ecx, ecx
        public_4da704 : nop
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_4da721
        push ebx
        call ebp
        public_4da721 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4da630)
    }
}

#undef public_4da680
#undef public_4da6ba
#undef public_4da6cb
#undef public_4da6cd
#undef public_4da6de
#undef public_4da6e0
#undef public_4da702
#undef public_4da704
#undef public_4da721
