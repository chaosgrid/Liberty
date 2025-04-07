#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b588a4 _public_6b588a4
#define public_6b588bc _public_6b588bc
#define public_6b588e6 _public_6b588e6
#define public_6b58910 _public_6b58910
#define public_6b5893a _public_6b5893a
#define public_6b58964 _public_6b58964
#define public_6b5898e _public_6b5898e
#define public_6b589c0 _public_6b589c0
#define public_6b589f2 _public_6b589f2
#define public_6b58a25 _public_6b58a25
#define public_6b58a4f _public_6b58a4f
#define public_6b58a79 _public_6b58a79
#define public_6b58aac _public_6b58aac
#define public_6b58ae4 _public_6b58ae4
#define public_6b58af7 _public_6b58af7
#define public_6b58b22 _public_6b58b22
#define public_6b58b54 _public_6b58b54
#define public_6b58b8d _public_6b58b8d
#define public_6b58ba0 _public_6b58ba0
#define public_6b58bcb _public_6b58bcb
#define public_6b58bfd _public_6b58bfd
#define public_6b58c36 _public_6b58c36
#define public_6b58c49 _public_6b58c49
#define public_6b58c75 _public_6b58c75
#define public_6b58ca1 _public_6b58ca1
#define public_6b58ccd _public_6b58ccd
#define public_6b58cf9 _public_6b58cf9
#define public_6b58d2c _public_6b58d2c
#define public_6b58d6a _public_6b58d6a
#define public_6b58da9 _public_6b58da9
#define public_6b58dca _public_6b58dca
#define public_6b58e06 _public_6b58e06
#define public_6b58e12 _public_6b58e12

PROC_DECLARE(0x6b58860, internal_6b58860, public_6b58860);
extern "C" NAKED register_t __cdecl internal_6b58860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b588a4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b588a4 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        mov ecx, 0x17
        jbe public_6b588bc
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b588bc : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b588e6
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b588e6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x24], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b58910
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b58910 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b5893a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b5893a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x2C], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b58964
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b58964 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x30], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 0xC
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b5898e
        mov dword ptr ds : [ebx+0xC], ecx
        public_6b5898e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x34]
        call public_6b3a160
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b589c0
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b589c0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x40]
        call public_6b3a160
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b589f2
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b589f2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x4C]
        call public_6b39ec0
        add edi, 0x10
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6b58a25
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58a25 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x5C], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58a4f
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58a4f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x64], edx
        jbe public_6b58ae4
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ecx+eax*2]
        cmp edx, dword ptr ds : [ebx+4]
        jbe public_6b58a79
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58a79 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x64]
        shl eax, 1
        push eax
        call public_6b6a134
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [ebp+0x60], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 1
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58aac
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58aac : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x64]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x60]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6b58ae4 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58af7
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58af7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x68], edx
        jbe public_6b58b8d
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        cmp ecx, dword ptr ds : [ebx+4]
        jbe public_6b58b22
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58b22 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov edx, dword ptr ss : [ebp+0x68]
        push edx
        call public_6b6a134
        mov dword ptr ss : [ebp+0x88], eax
        mov eax, dword ptr ss : [ebp+0x68]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58b54
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58b54 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x68]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x88]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6b58b8d : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58ba0
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58ba0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x6C], edx
        jbe public_6b58c36
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        cmp ecx, dword ptr ds : [ebx+4]
        jbe public_6b58bcb
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58bcb : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov edx, dword ptr ss : [ebp+0x6C]
        push edx
        call public_6b6a134
        mov dword ptr ss : [ebp+0x8C], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58bfd
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58bfd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x6C]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x8C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6b58c36 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58c49
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58c49 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x70], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58c75
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58c75 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x74], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58ca1
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58ca1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x78], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58ccd
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58ccd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x7C], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58cf9
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58cf9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x80], edx
        jbe public_6b58da9
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ecx+eax*4]
        cmp edx, dword ptr ds : [ebx+4]
        jbe public_6b58d2c
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58d2c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x80]
        shl eax, 2
        push eax
        call public_6b6a134
        mov ecx, dword ptr ss : [ebp+0x80]
        mov dword ptr ss : [ebp+0x84], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 2
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b58d6a
        mov dword ptr ds : [ebx+0xC], edi
        public_6b58d6a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b58e12
        mov eax, dword ptr ss : [ebp+0x80]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x84]
        shl eax, 2
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6b58da9 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b58dca
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b58dca : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6b58e06
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b58e06 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b58e12 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b58860)
    }
}

#undef public_6b588a4
#undef public_6b588bc
#undef public_6b588e6
#undef public_6b58910
#undef public_6b5893a
#undef public_6b58964
#undef public_6b5898e
#undef public_6b589c0
#undef public_6b589f2
#undef public_6b58a25
#undef public_6b58a4f
#undef public_6b58a79
#undef public_6b58aac
#undef public_6b58ae4
#undef public_6b58af7
#undef public_6b58b22
#undef public_6b58b54
#undef public_6b58b8d
#undef public_6b58ba0
#undef public_6b58bcb
#undef public_6b58bfd
#undef public_6b58c36
#undef public_6b58c49
#undef public_6b58c75
#undef public_6b58ca1
#undef public_6b58ccd
#undef public_6b58cf9
#undef public_6b58d2c
#undef public_6b58d6a
#undef public_6b58da9
#undef public_6b58dca
#undef public_6b58e06
#undef public_6b58e12
