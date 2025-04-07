#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7d9a4 _public_6f7d9a4
#define public_6f7d9c5 _public_6f7d9c5
#define public_6f7d9cd _public_6f7d9cd
#define public_6f7d9d8 _public_6f7d9d8
#define public_6f7d9e0 _public_6f7d9e0
#define public_6f7d9f0 _public_6f7d9f0
#define public_6f7da04 _public_6f7da04
#define public_6f7da1b _public_6f7da1b
#define public_6f7da31 _public_6f7da31
#define public_6f7da39 _public_6f7da39
#define public_6f7da41 _public_6f7da41
#define public_6f7da49 _public_6f7da49
#define public_6f7da51 _public_6f7da51
#define public_6f7da5d _public_6f7da5d
#define public_6f7da65 _public_6f7da65
#define public_6f7da70 _public_6f7da70
#define public_6f7da84 _public_6f7da84
#define public_6f7da90 _public_6f7da90
#define public_6f7daa4 _public_6f7daa4
#define public_6f7daaf _public_6f7daaf
#define public_6f7dab7 _public_6f7dab7
#define public_6f7dac8 _public_6f7dac8
#define public_6f7dade _public_6f7dade
#define public_6f7db07 _public_6f7db07
#define public_6f7db1e _public_6f7db1e

PROC_DECLARE(0x6f7d990, internal_6f7d990, public_6f7d990);
extern "C" NAKED register_t __cdecl internal_6f7d990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_6f7db1e
        push ebx
        push ebp
        push esi
        public_6f7d9a4 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        sub esi, 0x14
        sub edi, 0x14
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f7db07
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7d9c5
        xor ebx, ebx
        jmp public_6f7d9cd
        public_6f7d9c5 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 3
        public_6f7d9cd : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6f7d9d8
        xor ecx, ecx
        jmp public_6f7d9e0
        public_6f7d9d8 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 3
        public_6f7d9e0 : nop
        cmp ebx, ecx
        ja public_6f7da31
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov ecx, edx
        je public_6f7da04
        lea ecx, ds:[ecx]
        public_6f7d9f0 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_6f7d9f0
        public_6f7da04 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f7da1b
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7db07
        public_6f7da1b : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+4]
        sar eax, 3
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7db07
        public_6f7da31 : nop
        test eax, eax
        jne public_6f7da39
        xor ebx, ebx
        jmp public_6f7da41
        public_6f7da39 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 3
        public_6f7da41 : nop
        test edx, edx
        jne public_6f7da49
        xor ecx, ecx
        jmp public_6f7da51
        public_6f7da49 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 3
        public_6f7da51 : nop
        cmp ebx, ecx
        ja public_6f7dac8
        test edx, edx
        jne public_6f7da5d
        xor ecx, ecx
        jmp public_6f7da65
        public_6f7da5d : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 3
        public_6f7da65 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_6f7da84
        lea esp, ss:[esp]
        public_6f7da70 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ebx
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_6f7da70
        public_6f7da84 : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        mov ebx, dword ptr ds : [esi+8]
        mov esi, ecx
        je public_6f7daa4
        public_6f7da90 : nop
        push esi
        push ebx
        call public_6f305b0
        add esi, 8
        add esp, 8
        add ebx, 8
        cmp esi, ebp
        jne public_6f7da90
        public_6f7daa4 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f7daaf
        xor eax, eax
        jmp public_6f7dab7
        public_6f7daaf : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        public_6f7dab7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [ecx+8], eax
        mov esi, ecx
        jmp public_6f7db07
        public_6f7dac8 : nop
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6eae300
        test eax, eax
        jge public_6f7dade
        xor eax, eax
        public_6f7dade : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6ed2700
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f7db07 : nop
        cmp edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], edx
        jne public_6f7d9a4
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop edi
        ret 
        public_6f7db1e : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f7d990)
    }
}

#undef public_6f7d9a4
#undef public_6f7d9c5
#undef public_6f7d9cd
#undef public_6f7d9d8
#undef public_6f7d9e0
#undef public_6f7d9f0
#undef public_6f7da04
#undef public_6f7da1b
#undef public_6f7da31
#undef public_6f7da39
#undef public_6f7da41
#undef public_6f7da49
#undef public_6f7da51
#undef public_6f7da5d
#undef public_6f7da65
#undef public_6f7da70
#undef public_6f7da84
#undef public_6f7da90
#undef public_6f7daa4
#undef public_6f7daaf
#undef public_6f7dab7
#undef public_6f7dac8
#undef public_6f7dade
#undef public_6f7db07
#undef public_6f7db1e
