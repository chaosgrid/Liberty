#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f020);

#define public_6d2f056 _public_6d2f056
#define public_6d2f07e _public_6d2f07e
#define public_6d2f09a _public_6d2f09a
#define public_6d2f0ab _public_6d2f0ab

PROC_DECLARE(0x6d2f020, internal_6d2f020, public_6d2f020);
extern "C" NAKED register_t __cdecl internal_6d2f020()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d2f056
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], ecx
        public_6d2f056 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d2f07e
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d2f0ab
        public_6d2f07e : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d2f09a
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d2f0ab
        public_6d2f09a : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d2f0ab : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], eax
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2f020)
    }
}

#undef public_6d2f056
#undef public_6d2f07e
#undef public_6d2f09a
#undef public_6d2f0ab
