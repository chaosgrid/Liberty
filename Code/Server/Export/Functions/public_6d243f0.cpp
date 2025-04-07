#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d24418 _public_6d24418
#define public_6d24420 _public_6d24420
#define public_6d24440 _public_6d24440
#define public_6d24449 _public_6d24449
#define public_6d24456 _public_6d24456
#define public_6d24480 _public_6d24480
#define public_6d24492 _public_6d24492
#define public_6d2449d _public_6d2449d
#define public_6d244ba _public_6d244ba
#define public_6d244d4 _public_6d244d4
#define public_6d244e5 _public_6d244e5

PROC_DECLARE(0x6d243f0, internal_6d243f0, public_6d243f0);
extern "C" NAKED register_t __cdecl internal_6d243f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-4], ecx
        je public_6d2449d
        mov ecx, edx
        test ecx, ecx
        jne public_6d24418
        xor eax, eax
        jmp public_6d24420
        public_6d24418 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 5
        public_6d24420 : nop
        shl eax, 2
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6d60160
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [esi+8]
        mov ebx, esp
        mov ecx, ebx
        je public_6d24456
        lea ebx, ds:[ebx]
        public_6d24440 : nop
        test ecx, ecx
        je public_6d24449
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx], edx
        public_6d24449 : nop
        mov edx, dword ptr ds : [esi+8]
        add eax, 0x20
        add ecx, 4
        cmp eax, edx
        jne public_6d24440
        public_6d24456 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6d244e5
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [edx+8]
        mov ecx, ebx
        je public_6d24492
        lea esp, ss:[esp]
        public_6d24480 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0xC], esi
        mov esi, dword ptr ds : [edx+8]
        add eax, 0x20
        add ecx, 4
        cmp eax, esi
        jne public_6d24480
        public_6d24492 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        public_6d2449d : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d244ba
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        lea esp, ss:[ebp-0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d244ba : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d244d4
        cmp dword ptr ds : [edi+8], eax
        jne public_6d244d4
        xor eax, eax
        lea esp, ss:[ebp-0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d244d4 : nop
        mov eax, 1
        lea esp, ss:[ebp-0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d244e5 : nop
        xor al, al
        lea esp, ss:[ebp-0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d243f0)
    }
}

#undef public_6d24418
#undef public_6d24420
#undef public_6d24440
#undef public_6d24449
#undef public_6d24456
#undef public_6d24480
#undef public_6d24492
#undef public_6d2449d
#undef public_6d244ba
#undef public_6d244d4
#undef public_6d244e5
