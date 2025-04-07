#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6efb0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efb0b8 _public_6efb0b8
#define public_6efb0cb _public_6efb0cb
#define public_6efb0d3 _public_6efb0d3
#define public_6efb0de _public_6efb0de
#define public_6efb0e6 _public_6efb0e6
#define public_6efb0f3 _public_6efb0f3
#define public_6efb107 _public_6efb107
#define public_6efb11e _public_6efb11e
#define public_6efb134 _public_6efb134
#define public_6efb13c _public_6efb13c
#define public_6efb144 _public_6efb144
#define public_6efb14c _public_6efb14c
#define public_6efb154 _public_6efb154
#define public_6efb160 _public_6efb160
#define public_6efb168 _public_6efb168
#define public_6efb170 _public_6efb170
#define public_6efb184 _public_6efb184
#define public_6efb194 _public_6efb194
#define public_6efb1ac _public_6efb1ac
#define public_6efb1c4 _public_6efb1c4
#define public_6efb1da _public_6efb1da
#define public_6efb1ff _public_6efb1ff
#define public_6efb21e _public_6efb21e

PROC_DECLARE(0x6efb0a0, internal_6efb0a0, public_6efb0a0);
extern "C" NAKED register_t __cdecl internal_6efb0a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp edi, eax
        je public_6efb21e
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_6efb0b8 : nop
        cmp ebp, edi
        je public_6efb1ff
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6efb0cb
        xor esi, esi
        jmp public_6efb0d3
        public_6efb0cb : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 3
        public_6efb0d3 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6efb0de
        xor ecx, ecx
        jmp public_6efb0e6
        public_6efb0de : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 3
        public_6efb0e6 : nop
        cmp esi, ecx
        ja public_6efb134
        mov esi, dword ptr ds : [edi+8]
        cmp eax, esi
        mov ecx, edx
        je public_6efb107
        public_6efb0f3 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jne public_6efb0f3
        public_6efb107 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6efb11e
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ss : [ebp+8], edx
        jmp public_6efb1ff
        public_6efb11e : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        sar eax, 3
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ss : [ebp+8], edx
        jmp public_6efb1ff
        public_6efb134 : nop
        test eax, eax
        jne public_6efb13c
        xor esi, esi
        jmp public_6efb144
        public_6efb13c : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 3
        public_6efb144 : nop
        test edx, edx
        jne public_6efb14c
        xor ecx, ecx
        jmp public_6efb154
        public_6efb14c : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 3
        public_6efb154 : nop
        cmp esi, ecx
        ja public_6efb1c4
        test edx, edx
        jne public_6efb160
        xor ecx, ecx
        jmp public_6efb168
        public_6efb160 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 3
        public_6efb168 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_6efb184
        nop 
        public_6efb170 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_6efb170
        public_6efb184 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, ecx
        je public_6efb1ac
        public_6efb194 : nop
        push esi
        push ebx
        call public_6f305b0
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 8
        add esp, 8
        add ebx, 8
        cmp esi, eax
        jne public_6efb194
        public_6efb1ac : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6efb11e
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ss : [ebp+8], edx
        jmp public_6efb1ff
        public_6efb1c4 : nop
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6eae300
        test eax, eax
        jge public_6efb1da
        xor eax, eax
        public_6efb1da : nop
        shl eax, 3
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6ed2700
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6efb1ff : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x10], ecx
        add edi, 0x14
        add ebp, 0x14
        cmp edi, eax
        jne public_6efb0b8
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        ret 
        public_6efb21e : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6efb0a0)
    }
}

#undef public_6efb0b8
#undef public_6efb0cb
#undef public_6efb0d3
#undef public_6efb0de
#undef public_6efb0e6
#undef public_6efb0f3
#undef public_6efb107
#undef public_6efb11e
#undef public_6efb134
#undef public_6efb13c
#undef public_6efb144
#undef public_6efb14c
#undef public_6efb154
#undef public_6efb160
#undef public_6efb168
#undef public_6efb170
#undef public_6efb184
#undef public_6efb194
#undef public_6efb1ac
#undef public_6efb1c4
#undef public_6efb1da
#undef public_6efb1ff
#undef public_6efb21e
