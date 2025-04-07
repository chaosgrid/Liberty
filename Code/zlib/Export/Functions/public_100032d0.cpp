#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003260);
CLANG_FORWARD_PROC_SYMBOL(public_100032d0);

#define public_100032d6 _public_100032d6
#define public_10003314 _public_10003314
#define public_10003332 _public_10003332
#define public_10003343 _public_10003343
#define public_10003348 _public_10003348
#define public_10003356 _public_10003356
#define public_10003360 _public_10003360
#define public_1000336e _public_1000336e
#define public_10003378 _public_10003378
#define public_10003380 _public_10003380
#define public_10003391 _public_10003391
#define public_100033a1 _public_100033a1
#define public_100033b9 _public_100033b9
#define public_100033c9 _public_100033c9

PROC_DECLARE(0x100032d0, internal_100032d0, public_100032d0);
extern "C" NAKED register_t __cdecl internal_100032d0()
{
    __asm
    {
        push esi
        push edi
        mov esi, eax
        xor edi, edi
        public_100032d6 : nop
        call public_10003260
        cmp eax, dword ptr ds : [edi*4+public_1000d00c]
        jne public_10003391
        inc edi
        cmp edi, 2
        jb public_100032d6
        push ebx
        call public_10003260
        mov edi, eax
        call public_10003260
        cmp edi, 8
        mov ebx, eax
        jne public_100033c9
        test bl, 0xE0
        jne public_100033c9
        mov edi, 6
        public_10003314 : nop
        call public_10003260
        dec edi
        jne public_10003314
        test bl, 4
        je public_10003343
        call public_10003260
        mov edi, eax
        call public_10003260
        shl eax, 8
        add edi, eax
        public_10003332 : nop
        mov ecx, edi
        dec edi
        test ecx, ecx
        je public_10003343
        call public_10003260
        cmp eax, 0xFFFFFFFF
        jne public_10003332
        public_10003343 : nop
        test bl, 8
        je public_10003356
        public_10003348 : nop
        call public_10003260
        test eax, eax
        je public_10003356
        cmp eax, 0xFFFFFFFF
        jne public_10003348
        public_10003356 : nop
        test bl, 0x10
        je public_1000336e
        jmp public_10003360
        lea ecx, ds:[ecx]
        public_10003360 : nop
        call public_10003260
        test eax, eax
        je public_1000336e
        cmp eax, 0xFFFFFFFF
        jne public_10003360
        public_1000336e : nop
        test bl, 2
        je public_10003380
        mov edi, 2
        public_10003378 : nop
        call public_10003260
        dec edi
        jne public_10003378
        public_10003380 : nop
        mov edx, dword ptr ds : [esi+0x3C]
        neg edx
        sbb edx, edx
        pop ebx
        and edx, 0xFFFFFFFD
        pop edi
        mov dword ptr ds : [esi+0x38], edx
        pop esi
        ret 
        public_10003391 : nop
        test edi, edi
        je public_100033a1
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        inc edx
        dec ecx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi], ecx
        public_100033a1 : nop
        cmp eax, 0xFFFFFFFF
        je public_100033b9
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        inc ecx
        dec eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x58], 1
        public_100033b9 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        test ecx, ecx
        sete al
        pop edi
        mov dword ptr ds : [esi+0x38], eax
        pop esi
        ret 
        public_100033c9 : nop
        pop ebx
        pop edi
        mov dword ptr ds : [esi+0x38], 0xFFFFFFFD
        pop esi
        ret 
        UNREACHABLE_TRAP(0x100032d0)
    }
}

#undef public_100032d6
#undef public_10003314
#undef public_10003332
#undef public_10003343
#undef public_10003348
#undef public_10003356
#undef public_10003360
#undef public_1000336e
#undef public_10003378
#undef public_10003380
#undef public_10003391
#undef public_100033a1
#undef public_100033b9
#undef public_100033c9
