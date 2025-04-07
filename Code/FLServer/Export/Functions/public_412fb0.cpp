#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402770);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_412bb0);
CLANG_FORWARD_PROC_SYMBOL(public_412d20);
CLANG_FORWARD_PROC_SYMBOL(public_41890c);
CLANG_FORWARD_PROC_SYMBOL(public_418930);
CLANG_FORWARD_PROC_SYMBOL(public_418936);
CLANG_FORWARD_PROC_SYMBOL(public_418942);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c7e);
CLANG_FORWARD_JUMP_SYMBOL(public_41a816);

#define public_413054 _public_413054
#define public_4130a0 _public_4130a0
#define public_4130af _public_4130af
#define public_4130bb _public_4130bb
#define public_41314e _public_41314e
#define public_41315a _public_41315a
#define public_413167 _public_413167

PROC_DECLARE(0x412fb0, internal_412fb0, public_412fb0);
extern "C" NAKED register_t __cdecl internal_412fb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a816 @0x412fb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a816
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x878
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x24]
        call public_402770
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x888], edi
        call public_41899c
        cmp eax, 1
        jne public_413167
        mov eax, dword ptr ds : [esi+0x1C4]
        push edi
        push edi
        push 0x188
        push eax
        call dword ptr ds : [public_41bbe8]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        jle public_413167
        mov cl, byte ptr ss : [esp+0x1B]
        push ebx
        mov byte ptr ss : [esp+0xC], cl
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov edx, dword ptr ds : [esi+0x1A0]
        lea ebx, ss:[esp+0xC]
        lea ecx, ds:[esi+0x1A0]
        push ebx
        push eax
        mov byte ptr ss : [esp+0x894], 1
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_413054
        mov eax, offset public_41c3f4
        public_413054 : nop
        push ebp
        push eax
        lea eax, ss:[esp+0x8C]
        push eax
        call dword ptr ds : [public_41b988]
        mov edi, dword ptr ds : [public_41b8f4]
/*FIXUP push offset public_42599c @0x41306a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42599c
        call edi
        lea ebp, ss:[esp+eax*2+0x94]
        push ebp
        call edi
        add esp, 0x10
        mov edi, eax
        push 1
        push edi
        lea ecx, ss:[esp+0x18]
        call public_4044b0
        xor ebx, ebx
        test al, al
        je public_4130bb
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, ebp
        jbe public_4130af
        mov edx, edi
        mov edi, edi
        public_4130a0 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_4130a0
        public_4130af : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edi
        mov word ptr ds : [ecx+edi*2], bx
        public_4130bb : nop
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41baf8]
        lea edx, ss:[esp+0x10]
        push edx
        call public_41890c
        mov ecx, dword ptr ds : [public_41baf8]
        lea edi, ds:[eax+4]
        push edi
        call public_418942
        mov ecx, dword ptr ds : [public_41baf8]
        lea eax, ss:[esp+0x10]
        push eax
        call public_418930
        mov ecx, dword ptr ds : [public_41baf8]
        push edi
        call public_418936
        call public_40ce70
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+0x1C4]
        push ebx
        push ecx
        push 0x182
        push edx
        call dword ptr ds : [public_41bbe8]
        push ebx
        lea ecx, ds:[esi+0xE0]
        call public_418c7e
        mov ecx, esi
        call public_412bb0
        mov ecx, esi
        call public_412d20
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        pop ebp
        je public_41315a
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_41314e
        cmp cl, 0xFF
        je public_41314e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_41315a
        public_41314e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_41315a : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        pop ebx
        public_413167 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x888], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x880]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x884
        ret 
        UNREACHABLE_TRAP(0x412fb0)
    }
}

#undef public_413054
#undef public_4130a0
#undef public_4130af
#undef public_4130bb
#undef public_41314e
#undef public_41315a
#undef public_413167
