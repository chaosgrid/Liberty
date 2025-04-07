#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec22e7 _public_6ec22e7
#define public_6ec2306 _public_6ec2306
#define public_6ec2326 _public_6ec2326
#define public_6ec232a _public_6ec232a
#define public_6ec2342 _public_6ec2342
#define public_6ec2344 _public_6ec2344

PROC_DECLARE(0x6ec22c0, internal_6ec22c0, public_6ec22c0);
extern "C" NAKED register_t __cdecl internal_6ec22c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ec2342
        test dword ptr ds : [esi+0x78], 0x3FFFFFFF
        jne public_6ec22e7
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x78], eax
        public_6ec22e7 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        lea eax, ds:[esi+0x40]
        je public_6ec2306
        test dword ptr ds : [esi+0x7C], 0x3FFFFFFF
        jne public_6ec2306
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x7C], eax
        public_6ec2306 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test eax, 0x3FFFFFFF
        je public_6ec2342
        cmp dword ptr ds : [edi], eax
        jne public_6ec2342
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, eax
        and ecx, 0x3FFFFFFF
        je public_6ec2326
        cmp dword ptr ds : [edi+8], eax
        je public_6ec232a
        public_6ec2326 : nop
        test ecx, ecx
        jne public_6ec2342
        public_6ec232a : nop
        mov edx, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [esi+0x74]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x80], edx
        mov al, 1
        jge public_6ec2344
        public_6ec2342 : nop
        mov al, bl
        public_6ec2344 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec22c0)
    }
}

#undef public_6ec22e7
#undef public_6ec2306
#undef public_6ec2326
#undef public_6ec232a
#undef public_6ec2342
#undef public_6ec2344
