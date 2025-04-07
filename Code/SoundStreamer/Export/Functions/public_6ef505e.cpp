#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3890);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4fa6);

#define public_6ef507a _public_6ef507a
#define public_6ef5084 _public_6ef5084
#define public_6ef5096 _public_6ef5096
#define public_6ef50a0 _public_6ef50a0
#define public_6ef50a2 _public_6ef50a2
#define public_6ef50a6 _public_6ef50a6
#define public_6ef50c2 _public_6ef50c2
#define public_6ef50cb _public_6ef50cb
#define public_6ef50da _public_6ef50da
#define public_6ef50f1 _public_6ef50f1
#define public_6ef50f4 _public_6ef50f4

PROC_DECLARE(0x6ef505e, internal_6ef505e, public_6ef505e);
extern "C" NAKED register_t __cdecl internal_6ef505e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6ef507a
        cmp dword ptr ds : [public_6f010b0], 0
        jmp public_6ef50a0
        public_6ef507a : nop
        cmp esi, 1
        je public_6ef5084
        cmp esi, 2
        jne public_6ef50a6
        public_6ef5084 : nop
        mov eax, dword ptr ds : [public_6f0267c]
        test eax, eax
        je public_6ef5096
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6ef50a2
        public_6ef5096 : nop
        push edi
        push esi
        push ebx
        call public_6ef4fa6
        test eax, eax
        public_6ef50a0 : nop
        jne public_6ef50a6
        public_6ef50a2 : nop
        xor eax, eax
        jmp public_6ef50f4
        public_6ef50a6 : nop
        push edi
        push esi
        push ebx
        call public_6ef3890
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6ef50c2
        test eax, eax
        jne public_6ef50f1
        push edi
        push eax
        push ebx
        call public_6ef4fa6
        public_6ef50c2 : nop
        test esi, esi
        je public_6ef50cb
        cmp esi, 3
        jne public_6ef50f1
        public_6ef50cb : nop
        push edi
        push esi
        push ebx
        call public_6ef4fa6
        test eax, eax
        jne public_6ef50da
        and dword ptr ss : [ebp+0xC], eax
        public_6ef50da : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6ef50f1
        mov eax, dword ptr ds : [public_6f0267c]
        test eax, eax
        je public_6ef50f1
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6ef50f1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6ef50f4 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ef505e)
    }
}

#undef public_6ef507a
#undef public_6ef5084
#undef public_6ef5096
#undef public_6ef50a0
#undef public_6ef50a2
#undef public_6ef50a6
#undef public_6ef50c2
#undef public_6ef50cb
#undef public_6ef50da
#undef public_6ef50f1
#undef public_6ef50f4
