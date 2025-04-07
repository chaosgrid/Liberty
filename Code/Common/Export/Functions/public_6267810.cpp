#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267810);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6267844 _public_6267844
#define public_6267846 _public_6267846
#define public_626784e _public_626784e
#define public_6267852 _public_6267852
#define public_626785e _public_626785e
#define public_6267880 _public_6267880
#define public_626788a _public_626788a
#define public_6267894 _public_6267894
#define public_62678a0 _public_62678a0
#define public_62678ae _public_62678ae
#define public_62678b4 _public_62678b4
#define public_62678d0 _public_62678d0
#define public_62678da _public_62678da
#define public_62678e4 _public_62678e4
#define public_6267920 _public_6267920
#define public_626793c _public_626793c
#define public_6267960 _public_6267960
#define public_626796e _public_626796e
#define public_6267978 _public_6267978
#define public_6267990 _public_6267990
#define public_626799a _public_626799a
#define public_62679a0 _public_62679a0
#define public_62679b0 _public_62679b0
#define public_62679bd _public_62679bd
#define public_62679ca _public_62679ca
#define public_62679e0 _public_62679e0
#define public_62679ea _public_62679ea
#define public_62679f4 _public_62679f4
#define public_6267a00 _public_6267a00
#define public_6267a11 _public_6267a11
#define public_6267a20 _public_6267a20
#define public_6267a2d _public_6267a2d
#define public_6267a30 _public_6267a30

PROC_DECLARE(0x6267810, internal_6267810, public_6267810);
extern "C" NAKED register_t __cdecl internal_6267810()
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
        sar ecx, 1
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_626793c
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6267844
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ebp, ecx
        jb public_6267846
        public_6267844 : nop
        mov ecx, ebp
        public_6267846 : nop
        test edx, edx
        jne public_626784e
        xor eax, eax
        jmp public_6267852
        public_626784e : nop
        sub eax, edx
        sar eax, 1
        public_6267852 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_626785e
        xor eax, eax
        public_626785e : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6267894
        nop 
        lea esp, ss:[esp]
        public_6267880 : nop
        test ecx, ecx
        je public_626788a
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [ecx], dx
        public_626788a : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_6267880
        public_6267894 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_62678b4
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_62678a0 : nop
        test eax, eax
        je public_62678ae
        mov di, word ptr ds : [esi]
        mov word ptr ds : [eax], di
        mov edi, dword ptr ss : [esp+0x10]
        public_62678ae : nop
        add eax, 2
        dec edx
        jne public_62678a0
        public_62678b4 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ss:[ebp+ebp]
        lea edx, ds:[esi+ecx]
        je public_62678e4
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        lea ebx, ds:[ebx]
        public_62678d0 : nop
        test edx, edx
        je public_62678da
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [edx], cx
        public_62678da : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_62678d0
        public_62678e4 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*2]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6267920
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*2]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6267920 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*2]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_626793c : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ecx, ebp
        jae public_62679ca
        cmp edx, eax
        lea ebx, ss:[ebp+ebp]
        lea esi, ds:[ebx+edx]
        je public_6267978
        mov ecx, esi
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_6267960 : nop
        test esi, esi
        je public_626796e
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [esi], di
        mov edi, dword ptr ss : [esp+0x10]
        public_626796e : nop
        add ecx, 2
        add esi, 2
        cmp ecx, eax
        jne public_6267960
        public_6267978 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        sub ebp, ecx
        je public_62679a0
        lea esp, ss:[esp]
        public_6267990 : nop
        test eax, eax
        je public_626799a
        mov cx, word ptr ds : [esi]
        mov word ptr ds : [eax], cx
        public_626799a : nop
        add eax, 2
        dec ebp
        jne public_6267990
        public_62679a0 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_62679bd
        lea esp, ss:[esp]
        public_62679b0 : nop
        mov dx, word ptr ds : [esi]
        mov word ptr ds : [eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_62679b0
        public_62679bd : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_62679ca : nop
        test ebp, ebp
        jbe public_6267a30
        add ebp, ebp
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_62679f4
        lea ebx, ds:[ebx]
        public_62679e0 : nop
        test esi, esi
        je public_62679ea
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [esi], bx
        public_62679ea : nop
        add ecx, 2
        add esi, 2
        cmp ecx, eax
        jne public_62679e0
        public_62679f4 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6267a11
        nop 
        public_6267a00 : nop
        mov si, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edx
        mov word ptr ds : [ecx], si
        jne public_6267a00
        public_6267a11 : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6267a2d
        mov edx, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_6267a20 : nop
        mov si, word ptr ds : [edx]
        mov word ptr ds : [eax], si
        add eax, 2
        cmp eax, ecx
        jne public_6267a20
        public_6267a2d : nop
        add dword ptr ds : [edi+8], ebp
        public_6267a30 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6267810)
    }
}

#undef public_6267844
#undef public_6267846
#undef public_626784e
#undef public_6267852
#undef public_626785e
#undef public_6267880
#undef public_626788a
#undef public_6267894
#undef public_62678a0
#undef public_62678ae
#undef public_62678b4
#undef public_62678d0
#undef public_62678da
#undef public_62678e4
#undef public_6267920
#undef public_626793c
#undef public_6267960
#undef public_626796e
#undef public_6267978
#undef public_6267990
#undef public_626799a
#undef public_62679a0
#undef public_62679b0
#undef public_62679bd
#undef public_62679ca
#undef public_62679e0
#undef public_62679ea
#undef public_62679f4
#undef public_6267a00
#undef public_6267a11
#undef public_6267a20
#undef public_6267a2d
#undef public_6267a30
