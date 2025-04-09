#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_504cf0);
CLANG_FORWARD_PROC_SYMBOL(public_506cc0);
CLANG_FORWARD_PROC_SYMBOL(public_509ca0);
CLANG_FORWARD_PROC_SYMBOL(public_509d60);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5526d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfa48);

#define public_504d53 _public_504d53
#define public_504d77 _public_504d77
#define public_504da3 _public_504da3
#define public_504db9 _public_504db9
#define public_504dce _public_504dce

PROC_DECLARE(0x504cf0, internal_504cf0, public_504cf0);
extern "C" NAKED register_t __cdecl internal_504cf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfa48 @0x504cf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfa48
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
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5dacbc
        mov dword ptr ss : [esp+0x28], 5
        call public_506cc0
        lea ecx, ds:[esi+0x100]
        mov byte ptr ss : [esp+0x28], 4
        call public_5526d0
        mov ebp, dword ptr ds : [esi+0xF8]
        mov eax, dword ptr ss : [ebp]
        lea edi, ds:[esi+0xF4]
        xor ebx, ebx
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_504d77
        public_504d53 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_516f70
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_504d53
        public_504d77 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [esi+0xEC]
        add esp, 4
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_504da3
        call public_4f7a90
        mov dword ptr ds : [esi+0xEC], ebx
        public_504da3 : nop
        mov eax, dword ptr ds : [esi+0xE8]
        cmp eax, ebx
        je public_504db9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xE8], ebx
        public_504db9 : nop
        mov ecx, dword ptr ds : [esi+0xF0]
        cmp ecx, ebx
        je public_504dce
        call public_537ad0
        mov dword ptr ds : [esi+0xF0], ebx
        public_504dce : nop
        mov dword ptr ds : [esi+0xE4], ebx
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x38]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 1
        call public_509d60
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+4]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], bl
        call public_509ca0
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_5dad1c
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x504cf0)
    }
}

#undef public_504d53
#undef public_504d77
#undef public_504da3
#undef public_504db9
#undef public_504dce
