#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac5050);
CLANG_FORWARD_PROC_SYMBOL(public_6ac54d0);

#define public_6ac550b _public_6ac550b
#define public_6ac550d _public_6ac550d
#define public_6ac5518 _public_6ac5518
#define public_6ac551a _public_6ac551a
#define public_6ac557e _public_6ac557e
#define public_6ac559f _public_6ac559f
#define public_6ac55a2 _public_6ac55a2
#define public_6ac55af _public_6ac55af
#define public_6ac55b1 _public_6ac55b1
#define public_6ac55d5 _public_6ac55d5
#define public_6ac55f5 _public_6ac55f5
#define public_6ac55f6 _public_6ac55f6

PROC_DECLARE(0x6ac54d0, internal_6ac54d0, public_6ac54d0);
extern "C" NAKED register_t __cdecl internal_6ac54d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        mov eax, dword ptr ds : [edx+ecx*4-4]
        push edi
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp-0xC]
        bsr eax, eax
        add eax, 1
        mov ebx, 0x20
        sub ebx, eax
        mov eax, dword ptr ds : [edx+ecx*4-4]
        cmp ecx, 2
        mov dword ptr ss : [ebp-0xC], ebx
        mov dword ptr ss : [ebp-0x10], eax
        jb public_6ac550b
        mov esi, dword ptr ds : [edx+ecx*4-8]
        jmp public_6ac550d
        public_6ac550b : nop
        xor esi, esi
        public_6ac550d : nop
        cmp ecx, 3
        jb public_6ac5518
        mov edx, dword ptr ds : [edx+ecx*4-0xC]
        jmp public_6ac551a
        public_6ac5518 : nop
        xor edx, edx
        public_6ac551a : nop
        mov edi, 0x1F
        mov eax, esi
        sub edi, ebx
        shr eax, 1
        mov ecx, edi
        shr eax, cl
        mov ecx, ebx
        mov ebx, dword ptr ss : [ebp-0x10]
        shl ebx, cl
        shr edx, 1
        mov ecx, edi
        lea edi, ss:[ebp-8]
        shr edx, cl
        or eax, ebx
        mov ebx, dword ptr ss : [ebp-0xC]
        mov ecx, ebx
        push edi
        shl esi, cl
        lea edi, ss:[ebp-4]
        or ecx, 0xFFFFFFFF
        push edi
        push eax
        mov dword ptr ss : [ebp-0x10], 0
        or edx, esi
        mov esi, edx
        or edx, 0xFFFFFFFF
        sub edx, eax
        sub ecx, esi
        push edx
        push ecx
        call public_6ac5050
        mov edi, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-4], esi
        mov eax, dword ptr ss : [ebp-4]
        mul dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp-8]
        cmp edx, eax
        jbe public_6ac557e
        dec edi
        public_6ac557e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        or esi, 0xFFFFFFFF
        mov ecx, ebx
        mov ebx, dword ptr ss : [ebp+8]
        shr esi, cl
        mov edx, dword ptr ds : [ebx+eax*4-4]
        sub esi, edx
        dec eax
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+8], eax
        je public_6ac55f6
        lea ebx, ds:[ebx+eax*4]
        jmp public_6ac55a2
        public_6ac559f : nop
        mov eax, dword ptr ss : [ebp+8]
        public_6ac55a2 : nop
        cmp esi, edi
        jae public_6ac55f6
        test eax, eax
        jbe public_6ac55af
        mov eax, dword ptr ds : [ebx-4]
        jmp public_6ac55b1
        public_6ac55af : nop
        xor eax, eax
        public_6ac55b1 : nop
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x10], 0
        sub ecx, eax
        mov dword ptr ss : [ebp-0x10], edi
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mul dword ptr ss : [ebp-0x10]
        cmp edx, esi
        ja public_6ac55f5
        jb public_6ac55d5
        cmp eax, ecx
        ja public_6ac55f5
        public_6ac55d5 : nop
        sub ecx, eax
        sbb esi, edx
        mov dword ptr ss : [ebp-0x10], esi
        mov esi, ecx
        jne public_6ac55f6
        cmp ecx, edi
        jae public_6ac55f6
        mov eax, dword ptr ss : [ebp+8]
        sub ebx, 4
        dec eax
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+8], eax
        jne public_6ac559f
        jmp public_6ac55f6
        public_6ac55f5 : nop
        dec edi
        public_6ac55f6 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac54d0)
    }
}

#undef public_6ac550b
#undef public_6ac550d
#undef public_6ac5518
#undef public_6ac551a
#undef public_6ac557e
#undef public_6ac559f
#undef public_6ac55a2
#undef public_6ac55af
#undef public_6ac55b1
#undef public_6ac55d5
#undef public_6ac55f5
#undef public_6ac55f6
