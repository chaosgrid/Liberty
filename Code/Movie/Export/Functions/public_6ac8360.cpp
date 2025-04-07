#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8300);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8360);
CLANG_FORWARD_PROC_SYMBOL(public_6aca450);

#define public_6ac8397 _public_6ac8397
#define public_6ac839d _public_6ac839d
#define public_6ac83bc _public_6ac83bc
#define public_6ac83d2 _public_6ac83d2
#define public_6ac83df _public_6ac83df

PROC_DECLARE(0x6ac8360, internal_6ac8360, public_6ac8360);
extern "C" NAKED register_t __cdecl internal_6ac8360()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+8]
        push esi
        push edi
        lea esi, ds:[eax*4]
        test eax, eax
        mov edi, dword ptr ds : [esi+ecx-4]
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp-4], edi
        je public_6ac83df
        test edi, edi
        je public_6ac83df
        lea edx, ds:[eax*4-4]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6ac839d
        public_6ac8397 : nop
        mov edi, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp-8]
        public_6ac839d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        push ebx
        call public_6aca450
        push edi
        push 0
        call public_6ac8300
        mov dword ptr ds : [esi+ebx-4], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        public_6ac83bc : nop
        test eax, eax
        je public_6ac83d2
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac83bc
        sbb eax, eax
        or eax, 1
        public_6ac83d2 : nop
        test eax, eax
        jge public_6ac8397
        pop ebx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6ac83df : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, esi
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        mov dword ptr ds : [public_6ae097c], 0x2E
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac8360)
    }
}

#undef public_6ac8397
#undef public_6ac839d
#undef public_6ac83bc
#undef public_6ac83d2
#undef public_6ac83df
