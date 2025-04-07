#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409200);
CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_412bb0);
CLANG_FORWARD_PROC_SYMBOL(public_412d20);
CLANG_FORWARD_PROC_SYMBOL(public_412e50);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_JUMP_SYMBOL(public_41a7f2);

#define public_412ebe _public_412ebe
#define public_412ecb _public_412ecb
#define public_412f7b _public_412f7b

PROC_DECLARE(0x412e50, internal_412e50, public_412e50);
extern "C" NAKED register_t __cdecl internal_412e50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a7f2 @0x412e58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a7f2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x204
        push ebx
        mov ebx, dword ptr ds : [public_41bbe8]
        push esi
        push edi
        push 0
        push 0
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C4]
        push 0x188
        push eax
        call ebx
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jle public_412f7b
        mov ecx, dword ptr ds : [edi+0x1C4]
        push 0
        push esi
        push 0x199
        push ecx
        call ebx
        cmp eax, 0x80
        push 0
        ja public_412ebe
        mov edx, dword ptr ds : [edi+0x1C4]
        sub esi, eax
        push esi
        push 0x199
        push edx
        jmp public_412ecb
        public_412ebe : nop
        mov eax, dword ptr ds : [edi+0x1C4]
        push esi
        push 0x199
        push eax
        public_412ecb : nop
        call ebx
        push 0
        lea ecx, ss:[esp+0x10]
        mov esi, eax
        call public_409200
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x218], 0
        mov dword ptr ss : [esp+0x20C], esi
        call public_41899c
        mov ecx, edi
        call public_412bb0
        mov ecx, edi
        call public_412d20
        lea ecx, ss:[esp+0x1CC]
        mov dword ptr ss : [esp+0x218], 5
        call public_418c24
        lea ecx, ss:[esp+0x18C]
        mov byte ptr ss : [esp+0x218], 4
        call public_418c78
        lea ecx, ss:[esp+0x14C]
        mov byte ptr ss : [esp+0x218], 3
        call public_418c78
        lea ecx, ss:[esp+0xB0]
        mov byte ptr ss : [esp+0x218], 2
        call public_40fc80
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x218], 1
        call public_418c78
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x218], 0xFFFFFFFF
        call public_418a98
        public_412f7b : nop
        mov ecx, dword ptr ss : [esp+0x210]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x210
        ret 
        UNREACHABLE_TRAP(0x412e50)
    }
}

#undef public_412ebe
#undef public_412ecb
#undef public_412f7b
