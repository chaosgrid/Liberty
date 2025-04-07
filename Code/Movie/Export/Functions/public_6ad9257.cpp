#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7dba);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7e39);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7e67);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9257);

#define public_6ad92c0 _public_6ad92c0
#define public_6ad92e2 _public_6ad92e2
#define public_6ad92e4 _public_6ad92e4
#define public_6ad92fa _public_6ad92fa
#define public_6ad9307 _public_6ad9307
#define public_6ad9317 _public_6ad9317
#define public_6ad9333 _public_6ad9333
#define public_6ad935e _public_6ad935e
#define public_6ad936b _public_6ad936b
#define public_6ad9389 _public_6ad9389
#define public_6ad93a7 _public_6ad93a7
#define public_6ad93ae _public_6ad93ae
#define public_6ad93c7 _public_6ad93c7
#define public_6ad93d0 _public_6ad93d0
#define public_6ad93e7 _public_6ad93e7
#define public_6ad93fe _public_6ad93fe
#define public_6ad9425 _public_6ad9425
#define public_6ad942b _public_6ad942b
#define public_6ad9430 _public_6ad9430
#define public_6ad9433 _public_6ad9433
#define public_6ad9451 _public_6ad9451
#define public_6ad9457 _public_6ad9457
#define public_6ad9472 _public_6ad9472

PROC_DECLARE(0x6ad9257, internal_6ad9257, public_6ad9257);
extern "C" NAKED register_t __cdecl internal_6ad9257()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov cx, word ptr ds : [ebx+0xA]
        xor eax, eax
        push edi
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ss : [ebp-0x24], eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x1C], eax
        mov ax, word ptr ds : [esi+0xA]
        mov edi, ecx
        mov edx, 0x7FFF
        xor edi, eax
        and eax, edx
        and ecx, edx
        and edi, 0x8000
        cmp ax, 0x7FFF
        lea edx, ds:[ecx+eax]
        mov dword ptr ss : [ebp+8], edx
        jae public_6ad9457
        cmp cx, 0x7FFF
        jae public_6ad9457
        cmp dx, 0xBFFD
        ja public_6ad9457
        cmp dx, 0x3FBF
        ja public_6ad92c0
        xor eax, eax
        jmp public_6ad92fa
        public_6ad92c0 : nop
        test ax, ax
        mov edx, 0x7FFFFFFF
        jne public_6ad92e2
        inc dword ptr ss : [ebp+8]
        test dword ptr ds : [esi+8], edx
        jne public_6ad92e2
        xor eax, eax
        cmp dword ptr ds : [esi+4], eax
        jne public_6ad92e4
        cmp dword ptr ds : [esi], eax
        jne public_6ad92e4
        jmp public_6ad9451
        public_6ad92e2 : nop
        xor eax, eax
        public_6ad92e4 : nop
        cmp cx, ax
        jne public_6ad9307
        inc dword ptr ss : [ebp+8]
        test dword ptr ds : [ebx+8], edx
        jne public_6ad9307
        cmp dword ptr ds : [ebx+4], eax
        jne public_6ad9307
        cmp dword ptr ds : [ebx], eax
        jne public_6ad9307
        public_6ad92fa : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], eax
        jmp public_6ad9472
        public_6ad9307 : nop
        mov dword ptr ss : [ebp-0x10], eax
        lea eax, ss:[ebp-0x20]
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+0xC], 5
        public_6ad9317 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, eax
        cmp dword ptr ss : [ebp+0xC], 0
        jle public_6ad936b
        add eax, esi
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-0x18], eax
        public_6ad9333 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx eax, word ptr ds : [eax]
        movzx ecx, word ptr ds : [ecx]
        imul eax, ecx
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0xFFFFFFFC
        push ecx
        push eax
        push dword ptr ds : [ecx]
        call public_6ad7dba
        add esp, 0xC
        test eax, eax
        je public_6ad935e
        mov eax, dword ptr ss : [ebp-4]
        inc word ptr ds : [eax]
        public_6ad935e : nop
        add dword ptr ss : [ebp-8], 2
        sub dword ptr ss : [ebp-0xC], 2
        dec dword ptr ss : [ebp-0x18]
        jne public_6ad9333
        public_6ad936b : nop
        add dword ptr ss : [ebp-4], 2
        inc dword ptr ss : [ebp-0x10]
        dec dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp+0xC], 0
        jg public_6ad9317
        add dword ptr ss : [ebp+8], 0xC002
        cmp word ptr ss : [ebp+8], 0
        jle public_6ad93ae
        public_6ad9389 : nop
        test byte ptr ss : [ebp-0x19], 0x80
        jne public_6ad93a7
        lea eax, ss:[ebp-0x24]
        push eax
        call public_6ad7e39
        add dword ptr ss : [ebp+8], 0xFFFF
        pop ecx
        cmp word ptr ss : [ebp+8], 0
        jg public_6ad9389
        public_6ad93a7 : nop
        cmp word ptr ss : [ebp+8], 0
        jg public_6ad93e7
        public_6ad93ae : nop
        add dword ptr ss : [ebp+8], 0xFFFF
        cmp word ptr ss : [ebp+8], 0
        jge public_6ad93e7
        movsx eax, word ptr ss : [ebp+8]
        neg eax
        add dword ptr ss : [ebp+8], eax
        mov ebx, eax
        public_6ad93c7 : nop
        test byte ptr ss : [ebp-0x24], 1
        je public_6ad93d0
        inc dword ptr ss : [ebp-0x14]
        public_6ad93d0 : nop
        lea eax, ss:[ebp-0x24]
        push eax
        call public_6ad7e67
        dec ebx
        pop ecx
        jne public_6ad93c7
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6ad93e7
        or byte ptr ss : [ebp-0x24], 1
        public_6ad93e7 : nop
        cmp word ptr ss : [ebp-0x24], 0x8000
        ja public_6ad93fe
        mov eax, dword ptr ss : [ebp-0x24]
        and eax, 0x1FFFF
        cmp eax, 0x18000
        jne public_6ad9433
        public_6ad93fe : nop
        cmp dword ptr ss : [ebp-0x22], 0xFFFFFFFF
        jne public_6ad9430
        and dword ptr ss : [ebp-0x22], 0
        cmp dword ptr ss : [ebp-0x1E], 0xFFFFFFFF
        jne public_6ad942b
        and dword ptr ss : [ebp-0x1E], 0
        cmp word ptr ss : [ebp-0x1A], 0xFFFF
        jne public_6ad9425
        inc dword ptr ss : [ebp+8]
        mov word ptr ss : [ebp-0x1A], 0x8000
        jmp public_6ad9433
        public_6ad9425 : nop
        inc word ptr ss : [ebp-0x1A]
        jmp public_6ad9433
        public_6ad942b : nop
        inc dword ptr ss : [ebp-0x1E]
        jmp public_6ad9433
        public_6ad9430 : nop
        inc dword ptr ss : [ebp-0x22]
        public_6ad9433 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ax, 0x7FFF
        jae public_6ad9457
        mov cx, word ptr ss : [ebp-0x22]
        or eax, edi
        mov word ptr ds : [esi], cx
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [esi+2], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [esi+6], ecx
        public_6ad9451 : nop
        mov word ptr ds : [esi+0xA], ax
        jmp public_6ad9472
        public_6ad9457 : nop
        neg di
        sbb edi, edi
        and dword ptr ds : [esi+4], 0
        and edi, 0x80000000
        add edi, 0x7FFF8000
        and dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+8], edi
        public_6ad9472 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad9257)
    }
}

#undef public_6ad92c0
#undef public_6ad92e2
#undef public_6ad92e4
#undef public_6ad92fa
#undef public_6ad9307
#undef public_6ad9317
#undef public_6ad9333
#undef public_6ad935e
#undef public_6ad936b
#undef public_6ad9389
#undef public_6ad93a7
#undef public_6ad93ae
#undef public_6ad93c7
#undef public_6ad93d0
#undef public_6ad93e7
#undef public_6ad93fe
#undef public_6ad9425
#undef public_6ad942b
#undef public_6ad9430
#undef public_6ad9433
#undef public_6ad9451
#undef public_6ad9457
#undef public_6ad9472
