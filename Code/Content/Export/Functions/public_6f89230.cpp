#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f89230);
CLANG_FORWARD_PROC_SYMBOL(public_6f93c90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0fd0);

#define public_6f89270 _public_6f89270
#define public_6f89284 _public_6f89284
#define public_6f89298 _public_6f89298
#define public_6f892df _public_6f892df
#define public_6f892e4 _public_6f892e4
#define public_6f89305 _public_6f89305

PROC_DECLARE(0x6f89230, internal_6f89230, public_6f89230);
extern "C" NAKED register_t __cdecl internal_6f89230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0fd0 @0x6f89232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0fd0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fbc6cc
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        xor ebp, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0xC], eax
        je public_6f89298
        lea ebx, ds:[ebx]
        public_6f89270 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        cmp ecx, ebp
        je public_6f89284
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x10], ebp
        public_6f89284 : nop
        lea ecx, ss:[esp+0xC]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jne public_6f89270
        public_6f89298 : nop
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi]
        add esi, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp dword ptr ds : [esi+0x10], ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6f892df
        mov ecx, edi
        cmp eax, dword ptr ds : [ecx]
        jne public_6f892df
        cmp edi, ecx
        jne public_6f892df
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6f93c90
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f89305
        public_6f892df : nop
        cmp eax, edi
        je public_6f89305
        push ebx
        public_6f892e4 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f892e4
        pop ebx
        public_6f89305 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f89230)
    }
}

#undef public_6f89270
#undef public_6f89284
#undef public_6f89298
#undef public_6f892df
#undef public_6f892e4
#undef public_6f89305
