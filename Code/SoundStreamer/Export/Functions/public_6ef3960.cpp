#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);

#define public_6ef3996 _public_6ef3996
#define public_6ef3998 _public_6ef3998
#define public_6ef39a0 _public_6ef39a0
#define public_6ef39a5 _public_6ef39a5
#define public_6ef39b1 _public_6ef39b1
#define public_6ef39d2 _public_6ef39d2
#define public_6ef39da _public_6ef39da
#define public_6ef39e4 _public_6ef39e4
#define public_6ef39f0 _public_6ef39f0
#define public_6ef39fc _public_6ef39fc
#define public_6ef3a02 _public_6ef3a02
#define public_6ef3a20 _public_6ef3a20
#define public_6ef3a28 _public_6ef3a28
#define public_6ef3a32 _public_6ef3a32
#define public_6ef3a6e _public_6ef3a6e
#define public_6ef3a8b _public_6ef3a8b
#define public_6ef3ab0 _public_6ef3ab0
#define public_6ef3abc _public_6ef3abc
#define public_6ef3ac6 _public_6ef3ac6
#define public_6ef3ad8 _public_6ef3ad8
#define public_6ef3ae0 _public_6ef3ae0
#define public_6ef3ae6 _public_6ef3ae6
#define public_6ef3af0 _public_6ef3af0
#define public_6ef3afb _public_6ef3afb
#define public_6ef3b08 _public_6ef3b08
#define public_6ef3b20 _public_6ef3b20
#define public_6ef3b28 _public_6ef3b28
#define public_6ef3b32 _public_6ef3b32
#define public_6ef3b40 _public_6ef3b40
#define public_6ef3b4f _public_6ef3b4f
#define public_6ef3b60 _public_6ef3b60
#define public_6ef3b6b _public_6ef3b6b
#define public_6ef3b6e _public_6ef3b6e

PROC_DECLARE(0x6ef3960, internal_6ef3960, public_6ef3960);
extern "C" NAKED register_t __cdecl internal_6ef3960()
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
        jae public_6ef3a8b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6ef3996
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6ef3998
        public_6ef3996 : nop
        mov ecx, ebp
        public_6ef3998 : nop
        test edx, edx
        jne public_6ef39a0
        xor eax, eax
        jmp public_6ef39a5
        public_6ef39a0 : nop
        sub eax, edx
        sar eax, 2
        public_6ef39a5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ef39b1
        xor eax, eax
        public_6ef39b1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6ef4a65
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ef39e4
        public_6ef39d2 : nop
        test ecx, ecx
        je public_6ef39da
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6ef39da : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6ef39d2
        public_6ef39e4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6ef3a02
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6ef39f0 : nop
        test eax, eax
        je public_6ef39fc
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef39fc : nop
        add eax, 4
        dec edx
        jne public_6ef39f0
        public_6ef3a02 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6ef3a32
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6ef3a20 : nop
        test edx, edx
        je public_6ef3a28
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6ef3a28 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6ef3a20
        public_6ef3a32 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ef4507
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ef3a6e
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
        public_6ef3a6e : nop
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
        public_6ef3a8b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6ef3b08
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6ef3ac6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6ef3ab0 : nop
        test esi, esi
        je public_6ef3abc
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef3abc : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6ef3ab0
        public_6ef3ac6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6ef3ae6
        public_6ef3ad8 : nop
        test eax, eax
        je public_6ef3ae0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6ef3ae0 : nop
        add eax, 4
        dec ebp
        jne public_6ef3ad8
        public_6ef3ae6 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6ef3afb
        nop 
        public_6ef3af0 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ef3af0
        public_6ef3afb : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ef3b08 : nop
        test ebp, ebp
        jbe public_6ef3b6e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6ef3b32
        lea esp, ss:[esp]
        public_6ef3b20 : nop
        test esi, esi
        je public_6ef3b28
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6ef3b28 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6ef3b20
        public_6ef3b32 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6ef3b4f
        lea ecx, ds:[ecx]
        public_6ef3b40 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6ef3b40
        public_6ef3b4f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6ef3b6b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6ef3b60 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6ef3b60
        public_6ef3b6b : nop
        add dword ptr ds : [edi+8], ebp
        public_6ef3b6e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3960)
    }
}

#undef public_6ef3996
#undef public_6ef3998
#undef public_6ef39a0
#undef public_6ef39a5
#undef public_6ef39b1
#undef public_6ef39d2
#undef public_6ef39da
#undef public_6ef39e4
#undef public_6ef39f0
#undef public_6ef39fc
#undef public_6ef3a02
#undef public_6ef3a20
#undef public_6ef3a28
#undef public_6ef3a32
#undef public_6ef3a6e
#undef public_6ef3a8b
#undef public_6ef3ab0
#undef public_6ef3abc
#undef public_6ef3ac6
#undef public_6ef3ad8
#undef public_6ef3ae0
#undef public_6ef3ae6
#undef public_6ef3af0
#undef public_6ef3afb
#undef public_6ef3b08
#undef public_6ef3b20
#undef public_6ef3b28
#undef public_6ef3b32
#undef public_6ef3b40
#undef public_6ef3b4f
#undef public_6ef3b60
#undef public_6ef3b6b
#undef public_6ef3b6e
