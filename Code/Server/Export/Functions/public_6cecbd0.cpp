#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cecc06 _public_6cecc06
#define public_6cecc08 _public_6cecc08
#define public_6cecc10 _public_6cecc10
#define public_6cecc15 _public_6cecc15
#define public_6cecc21 _public_6cecc21
#define public_6cecc42 _public_6cecc42
#define public_6cecc4a _public_6cecc4a
#define public_6cecc54 _public_6cecc54
#define public_6cecc60 _public_6cecc60
#define public_6cecc6c _public_6cecc6c
#define public_6cecc72 _public_6cecc72
#define public_6cecc90 _public_6cecc90
#define public_6cecc98 _public_6cecc98
#define public_6cecca2 _public_6cecca2
#define public_6ceccde _public_6ceccde
#define public_6ceccfb _public_6ceccfb
#define public_6cecd20 _public_6cecd20
#define public_6cecd2c _public_6cecd2c
#define public_6cecd36 _public_6cecd36
#define public_6cecd48 _public_6cecd48
#define public_6cecd50 _public_6cecd50
#define public_6cecd56 _public_6cecd56
#define public_6cecd60 _public_6cecd60
#define public_6cecd6b _public_6cecd6b
#define public_6cecd78 _public_6cecd78
#define public_6cecd90 _public_6cecd90
#define public_6cecd98 _public_6cecd98
#define public_6cecda2 _public_6cecda2
#define public_6cecdb0 _public_6cecdb0
#define public_6cecdbf _public_6cecdbf
#define public_6cecdd0 _public_6cecdd0
#define public_6cecddb _public_6cecddb
#define public_6cecdde _public_6cecdde

PROC_DECLARE(0x6cecbd0, internal_6cecbd0, public_6cecbd0);
extern "C" NAKED register_t __cdecl internal_6cecbd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6ceccfb
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6cecc06
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6cecc08
        public_6cecc06 : nop
        mov ecx, ebp
        public_6cecc08 : nop
        test edx, edx
        jne public_6cecc10
        xor eax, eax
        jmp public_6cecc15
        public_6cecc10 : nop
        sub eax, edx
        sar eax, 2
        public_6cecc15 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6cecc21
        xor eax, eax
        public_6cecc21 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6cecc54
        public_6cecc42 : nop
        test ecx, ecx
        je public_6cecc4a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6cecc4a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6cecc42
        public_6cecc54 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6cecc72
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6cecc60 : nop
        test eax, eax
        je public_6cecc6c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6cecc6c : nop
        add eax, 4
        dec edx
        jne public_6cecc60
        public_6cecc72 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6cecca2
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6cecc90 : nop
        test edx, edx
        je public_6cecc98
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6cecc98 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6cecc90
        public_6cecca2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ceccde
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ceccde : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ceccfb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6cecd78
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6cecd36
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6cecd20 : nop
        test esi, esi
        je public_6cecd2c
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6cecd2c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6cecd20
        public_6cecd36 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6cecd56
        public_6cecd48 : nop
        test eax, eax
        je public_6cecd50
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6cecd50 : nop
        add eax, 4
        dec ebp
        jne public_6cecd48
        public_6cecd56 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6cecd6b
        nop 
        public_6cecd60 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6cecd60
        public_6cecd6b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6cecd78 : nop
        test ebp, ebp
        jbe public_6cecdde
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6cecda2
        lea esp, ss:[esp]
        public_6cecd90 : nop
        test esi, esi
        je public_6cecd98
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6cecd98 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6cecd90
        public_6cecda2 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6cecdbf
        lea ecx, ds:[ecx]
        public_6cecdb0 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6cecdb0
        public_6cecdbf : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6cecddb
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6cecdd0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6cecdd0
        public_6cecddb : nop
        add dword ptr ds : [edi+8], ebp
        public_6cecdde : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6cecbd0)
    }
}

#undef public_6cecc06
#undef public_6cecc08
#undef public_6cecc10
#undef public_6cecc15
#undef public_6cecc21
#undef public_6cecc42
#undef public_6cecc4a
#undef public_6cecc54
#undef public_6cecc60
#undef public_6cecc6c
#undef public_6cecc72
#undef public_6cecc90
#undef public_6cecc98
#undef public_6cecca2
#undef public_6ceccde
#undef public_6ceccfb
#undef public_6cecd20
#undef public_6cecd2c
#undef public_6cecd36
#undef public_6cecd48
#undef public_6cecd50
#undef public_6cecd56
#undef public_6cecd60
#undef public_6cecd6b
#undef public_6cecd78
#undef public_6cecd90
#undef public_6cecd98
#undef public_6cecda2
#undef public_6cecdb0
#undef public_6cecdbf
#undef public_6cecdd0
#undef public_6cecddb
#undef public_6cecdde
