#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_4055b0);
CLANG_FORWARD_PROC_SYMBOL(public_407330);

#define public_407346 _public_407346
#define public_407372 _public_407372
#define public_407386 _public_407386
#define public_407392 _public_407392
#define public_40739b _public_40739b
#define public_4073a3 _public_4073a3
#define public_4073b1 _public_4073b1
#define public_4073c1 _public_4073c1

PROC_DECLARE(0x407330, internal_407330, public_407330);
extern "C" NAKED register_t __cdecl internal_407330()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0x7FFFFFFD
        mov esi, ecx
        jbe public_407346
        call dword ptr ds : [public_41b8a0]
        public_407346 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_407372
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_407372
        cmp cl, 0xFF
        je public_407372
        test edi, edi
        jne public_40739b
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_407372 : nop
        test edi, edi
        jne public_407386
        push 1
        mov ecx, esi
        call public_403e90
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_407386 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_407392
        cmp eax, edi
        jae public_4073a3
        public_407392 : nop
        push 1
        mov ecx, esi
        call public_403e90
        public_40739b : nop
        mov ecx, esi
        push edi
        call public_4055b0
        public_4073a3 : nop
        test edi, edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        jbe public_4073c1
        mov edx, edi
        push ebp
        public_4073b1 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_4073b1
        pop ebp
        public_4073c1 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x407330)
    }
}

#undef public_407346
#undef public_407372
#undef public_407386
#undef public_407392
#undef public_40739b
#undef public_4073a3
#undef public_4073b1
#undef public_4073c1
