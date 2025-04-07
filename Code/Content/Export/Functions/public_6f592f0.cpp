#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f592f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f592ff _public_6f592ff
#define public_6f59317 _public_6f59317
#define public_6f59328 _public_6f59328
#define public_6f59342 _public_6f59342
#define public_6f5934d _public_6f5934d
#define public_6f5934f _public_6f5934f
#define public_6f59370 _public_6f59370
#define public_6f5937b _public_6f5937b
#define public_6f5938c _public_6f5938c

PROC_DECLARE(0x6f592f0, internal_6f592f0, public_6f592f0);
extern "C" NAKED register_t __cdecl internal_6f592f0()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_6f592ff
        xor edx, edx
        jmp public_6f59317
        public_6f592ff : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f59317 : nop
        test edx, edx
        jle public_6f5938c
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], edx
        public_6f59328 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ecx+ebx]
        cmp byte ptr ds : [eax], 0
        jne public_6f5937b
        mov ecx, dword ptr ds : [esi+8]
        lea edi, ds:[eax+0x34]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_6f5934d
        mov edx, dword ptr ds : [edi]
        public_6f59342 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f5934f
        add eax, 4
        cmp eax, ecx
        jne public_6f59342
        public_6f5934d : nop
        mov eax, ecx
        public_6f5934f : nop
        cmp eax, ecx
        jne public_6f5937b
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f5937b
        mov edi, dword ptr ds : [edi]
        lea ebx, ds:[ebx]
        public_6f59370 : nop
        cmp dword ptr ds : [eax], edi
        je public_6f5937b
        add eax, 4
        cmp eax, ecx
        jne public_6f59370
        public_6f5937b : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x38
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f59328
        pop edi
        pop esi
        pop ebx
        public_6f5938c : nop
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f592f0)
    }
}

#undef public_6f592ff
#undef public_6f59317
#undef public_6f59328
#undef public_6f59342
#undef public_6f5934d
#undef public_6f5934f
#undef public_6f59370
#undef public_6f5937b
#undef public_6f5938c
