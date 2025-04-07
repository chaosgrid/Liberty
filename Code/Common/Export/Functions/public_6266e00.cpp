#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6267db0);
CLANG_FORWARD_PROC_SYMBOL(public_6267de0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6266e12 _public_6266e12
#define public_6266e19 _public_6266e19
#define public_6266e2d _public_6266e2d
#define public_6266e34 _public_6266e34
#define public_6266e58 _public_6266e58
#define public_6266e5a _public_6266e5a
#define public_6266e6b _public_6266e6b
#define public_6266eed _public_6266eed
#define public_6266f30 _public_6266f30
#define public_6266f3e _public_6266f3e
#define public_6266f52 _public_6266f52
#define public_6266f73 _public_6266f73
#define public_6266f84 _public_6266f84
#define public_6266f91 _public_6266f91
#define public_6266f9e _public_6266f9e
#define public_6266fae _public_6266fae
#define public_6266fc8 _public_6266fc8
#define public_6266fd8 _public_6266fd8
#define public_6266fdb _public_6266fdb

PROC_DECLARE(0x6266e00, internal_6266e00, public_6266e00);
extern "C" NAKED register_t __cdecl internal_6266e00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        push edi
        jne public_6266e12
        xor eax, eax
        jmp public_6266e19
        public_6266e12 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 1
        public_6266e19 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jae public_6266fae
        test edx, edx
        jne public_6266e2d
        xor ecx, ecx
        jmp public_6266e34
        public_6266e2d : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 1
        public_6266e34 : nop
        mov eax, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 1
        cmp ecx, ebx
        mov edi, eax
        jae public_6266eed
        test edx, edx
        je public_6266e58
        sub eax, edx
        sar eax, 1
        cmp ebx, eax
        mov ebp, eax
        jb public_6266e5a
        public_6266e58 : nop
        mov ebp, ebx
        public_6266e5a : nop
        mov ecx, esi
        call public_6266ff0
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jns public_6266e6b
        xor eax, eax
        public_6266e6b : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_6267db0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6267de0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[edx+ebx*2]
        push eax
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
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+edx*2]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6266ff0
        add eax, ebx
        lea ecx, ss:[ebp+eax*2]
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6266eed : nop
        mov edx, eax
        sub edx, edi
        sar edx, 1
        cmp edx, ebx
        jae public_6266f52
        lea ecx, ds:[ebx+ebx]
        mov dword ptr ss : [esp+0x18], ecx
        add ecx, edi
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6267db0
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        push ebp
        sub ebx, ecx
        push ebx
        push eax
        mov ecx, esi
        call public_6267de0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6266f3e
        lea esp, ss:[esp]
        public_6266f30 : nop
        mov dx, word ptr ss : [ebp]
        mov word ptr ds : [eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_6266f30
        public_6266f3e : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        add ecx, eax
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6266f52 : nop
        test ebx, ebx
        jbe public_6266fdb
        push eax
        push eax
        add ebx, ebx
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_6267db0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_6266f84
        public_6266f73 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edi
        mov word ptr ds : [ecx], dx
        jne public_6266f73
        public_6266f84 : nop
        lea ecx, ds:[ebx+edi]
        cmp edi, ecx
        mov eax, edi
        je public_6266f9e
        mov edx, dword ptr ss : [esp+0x1C]
        public_6266f91 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [eax], di
        add eax, 2
        cmp eax, ecx
        jne public_6266f91
        public_6266f9e : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6266fae : nop
        test edx, edx
        je public_6266fdb
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edx
        sar eax, 1
        cmp ebx, eax
        jae public_6266fdb
        mov eax, ecx
        cmp eax, ecx
        lea edx, ds:[edx+ebx*2]
        je public_6266fd8
        public_6266fc8 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6266fc8
        public_6266fd8 : nop
        mov dword ptr ds : [esi+8], edx
        public_6266fdb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6266e00)
    }
}

#undef public_6266e12
#undef public_6266e19
#undef public_6266e2d
#undef public_6266e34
#undef public_6266e58
#undef public_6266e5a
#undef public_6266e6b
#undef public_6266eed
#undef public_6266f30
#undef public_6266f3e
#undef public_6266f52
#undef public_6266f73
#undef public_6266f84
#undef public_6266f91
#undef public_6266f9e
#undef public_6266fae
#undef public_6266fc8
#undef public_6266fd8
#undef public_6266fdb
