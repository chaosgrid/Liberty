#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631cf30);
CLANG_FORWARD_PROC_SYMBOL(public_631d530);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_631cf64 _public_631cf64
#define public_631cf66 _public_631cf66
#define public_631cf6e _public_631cf6e
#define public_631cf73 _public_631cf73
#define public_631cf7f _public_631cf7f
#define public_631cfa4 _public_631cfa4
#define public_631cfb8 _public_631cfb8
#define public_631cfc2 _public_631cfc2
#define public_631cfde _public_631cfde
#define public_631cff6 _public_631cff6
#define public_631d000 _public_631d000
#define public_631d013 _public_631d013
#define public_631d053 _public_631d053
#define public_631d070 _public_631d070
#define public_631d09e _public_631d09e
#define public_631d0a2 _public_631d0a2
#define public_631d0b9 _public_631d0b9
#define public_631d0d0 _public_631d0d0
#define public_631d0e4 _public_631d0e4
#define public_631d0f0 _public_631d0f0
#define public_631d0fb _public_631d0fb
#define public_631d111 _public_631d111
#define public_631d124 _public_631d124
#define public_631d148 _public_631d148
#define public_631d153 _public_631d153
#define public_631d162 _public_631d162
#define public_631d170 _public_631d170
#define public_631d17b _public_631d17b
#define public_631d17e _public_631d17e

PROC_DECLARE(0x631cf30, internal_631cf30, public_631cf30);
extern "C" NAKED register_t __cdecl internal_631cf30()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 2
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_631d070
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_631cf64
        mov eax, esi
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        jb public_631cf66
        public_631cf64 : nop
        mov eax, ebp
        public_631cf66 : nop
        test ecx, ecx
        jne public_631cf6e
        xor esi, esi
        jmp public_631cf73
        public_631cf6e : nop
        sub esi, ecx
        sar esi, 2
        public_631cf73 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_631cf7f
        xor eax, eax
        public_631cf7f : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        je public_631cfb8
        public_631cfa4 : nop
        push esi
        push edi
        call public_631d530
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_631cfa4
        public_631cfb8 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_631cfde
        mov dword ptr ss : [esp+0x1C], ebp
        public_631cfc2 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_631d530
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 4
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_631cfc2
        public_631cfde : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*4]
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_631d013
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_631d000
        public_631cff6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_631d000 : nop
        add eax, esi
        push esi
        push eax
        call public_631d530
        add esi, 4
        add esp, 8
        cmp esi, edi
        jne public_631cff6
        public_631d013 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6391d5a
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 4
        test edx, edx
        jne public_631d053
        xor ecx, ecx
        mov ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_631d053 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        sar ecx, 2
        add ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_631d070 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, edi
        sar edx, 2
        cmp edx, ebp
        jae public_631d111
        lea eax, ds:[ebp*4]
        mov dword ptr ss : [esp+0x20], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_631d0b9
        sub eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_631d0a2
        public_631d09e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_631d0a2 : nop
        add eax, ebx
        push ebx
        push eax
        call public_631d530
        add ebx, 4
        add esp, 8
        cmp ebx, esi
        jne public_631d09e
        mov ecx, dword ptr ss : [esp+0x10]
        public_631d0b9 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, edi
        sar eax, 2
        sub ebp, eax
        je public_631d0e4
        nop 
        lea esp, ss:[esp]
        public_631d0d0 : nop
        push ebx
        push esi
        call public_631d530
        add esp, 8
        add esi, 4
        dec ebp
        jne public_631d0d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_631d0e4 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edi, edx
        mov eax, edi
        je public_631d0fb
        lea ecx, ds:[ecx]
        public_631d0f0 : nop
        mov esi, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, edx
        jne public_631d0f0
        public_631d0fb : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_631d111 : nop
        test ebp, ebp
        jbe public_631d17e
        shl ebp, 2
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_631d148
        public_631d124 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push eax
        call public_631d530
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 4
        add ebx, 4
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_631d124
        mov ecx, dword ptr ss : [esp+0x10]
        public_631d148 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, edx
        sub eax, ebp
        cmp edi, eax
        je public_631d162
        public_631d153 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub edx, 4
        cmp eax, edi
        mov dword ptr ds : [edx], esi
        jne public_631d153
        public_631d162 : nop
        lea edx, ds:[edi+ebp]
        cmp edi, edx
        mov eax, edi
        je public_631d17b
        mov esi, dword ptr ss : [esp+0x24]
        nop 
        public_631d170 : nop
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, edx
        jne public_631d170
        public_631d17b : nop
        add dword ptr ds : [ecx+8], ebp
        public_631d17e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x631cf30)
    }
}

#undef public_631cf64
#undef public_631cf66
#undef public_631cf6e
#undef public_631cf73
#undef public_631cf7f
#undef public_631cfa4
#undef public_631cfb8
#undef public_631cfc2
#undef public_631cfde
#undef public_631cff6
#undef public_631d000
#undef public_631d013
#undef public_631d053
#undef public_631d070
#undef public_631d09e
#undef public_631d0a2
#undef public_631d0b9
#undef public_631d0d0
#undef public_631d0e4
#undef public_631d0f0
#undef public_631d0fb
#undef public_631d111
#undef public_631d124
#undef public_631d148
#undef public_631d153
#undef public_631d162
#undef public_631d170
#undef public_631d17b
#undef public_631d17e
