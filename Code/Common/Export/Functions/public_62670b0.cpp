#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267db0);
CLANG_FORWARD_PROC_SYMBOL(public_6267de0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62670df _public_62670df
#define public_62670e4 _public_62670e4
#define public_62670ec _public_62670ec
#define public_62670f0 _public_62670f0
#define public_62670fc _public_62670fc
#define public_6267116 _public_6267116
#define public_626712a _public_626712a
#define public_626718f _public_626718f
#define public_62671a9 _public_62671a9
#define public_62671e6 _public_62671e6
#define public_6267205 _public_6267205
#define public_6267220 _public_6267220
#define public_6267231 _public_6267231
#define public_6267240 _public_6267240
#define public_626724d _public_626724d

PROC_DECLARE(0x62670b0, internal_62670b0, public_62670b0);
extern "C" NAKED register_t __cdecl internal_62670b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 1
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_62671a9
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_62670df
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ecx, 1
        ja public_62670e4
        public_62670df : nop
        mov ecx, 1
        public_62670e4 : nop
        test edx, edx
        jne public_62670ec
        xor eax, eax
        jmp public_62670f0
        public_62670ec : nop
        sub eax, edx
        sar eax, 1
        public_62670f0 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_62670fc
        xor eax, eax
        public_62670fc : nop
        lea edx, ds:[eax+eax]
        push ebp
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_626712a
        public_6267116 : nop
        push ebp
        push ebx
        call public_626c1c0
        add ebp, 2
        add esp, 8
        add ebx, 2
        cmp ebp, edi
        jne public_6267116
        public_626712a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6267de0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 2
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6267db0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+eax*2]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        pop ebp
        jne public_626718f
        xor ecx, ecx
        lea eax, ds:[edx+ecx*2+2]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_626718f : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 1
        lea eax, ds:[edx+ecx*2+2]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_62671a9 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        cmp ecx, 1
        mov ecx, esi
        jae public_6267205
        lea edx, ds:[edi+2]
        push edx
        push eax
        push edi
        call public_6267db0
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6267de0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_626724d
        public_62671e6 : nop
        mov cx, word ptr ds : [ebx]
        mov word ptr ds : [edi], cx
        add edi, 2
        cmp edi, eax
        jne public_62671e6
        mov eax, dword ptr ds : [esi+8]
        add eax, 2
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6267205 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFE
        push eax
        call public_6267db0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-2]
        cmp edi, eax
        je public_6267231
        lea ebx, ds:[ebx]
        public_6267220 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edi
        mov word ptr ds : [ecx], dx
        jne public_6267220
        public_6267231 : nop
        lea ecx, ds:[edi+2]
        cmp edi, ecx
        mov eax, edi
        je public_626724d
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, edi
        public_6267240 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [eax], di
        add eax, 2
        cmp eax, ecx
        jne public_6267240
        public_626724d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 2
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62670b0)
    }
}

#undef public_62670df
#undef public_62670e4
#undef public_62670ec
#undef public_62670f0
#undef public_62670fc
#undef public_6267116
#undef public_626712a
#undef public_626718f
#undef public_62671a9
#undef public_62671e6
#undef public_6267205
#undef public_6267220
#undef public_6267231
#undef public_6267240
#undef public_626724d
