#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402270);

#define public_402297 _public_402297
#define public_4022c4 _public_4022c4
#define public_4022da _public_4022da
#define public_4022e6 _public_4022e6
#define public_4022f0 _public_4022f0
#define public_4022f9 _public_4022f9
#define public_402304 _public_402304
#define public_402313 _public_402313

PROC_DECLARE(0x402270, internal_402270, public_402270);
extern "C" NAKED register_t __cdecl internal_402270()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        push ebp
        lea esi, ds:[ecx+0x75C]
        call dword ptr ds : [public_41b8f4]
        mov edi, eax
        add esp, 4
        cmp edi, 0x7FFFFFFD
        jbe public_402297
        call dword ptr ds : [public_41b8a0]
        public_402297 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4022c4
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4022c4
        cmp cl, 0xFF
        je public_4022c4
        test edi, edi
        jne public_4022f0
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_4022c4 : nop
        test edi, edi
        jne public_4022da
        push 1
        mov ecx, esi
        call dword ptr ds : [public_41b86c]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_4022da : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_4022e6
        cmp eax, edi
        jae public_4022f9
        public_4022e6 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_41b86c]
        public_4022f0 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_41b8a4]
        public_4022f9 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, ebp
        jbe public_402313
        mov edx, edi
        public_402304 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_402304
        public_402313 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x402270)
    }
}

#undef public_402297
#undef public_4022c4
#undef public_4022da
#undef public_4022e6
#undef public_4022f0
#undef public_4022f9
#undef public_402304
#undef public_402313
