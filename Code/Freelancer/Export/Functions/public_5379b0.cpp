#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe60);

#define public_5379f3 _public_5379f3
#define public_5379f6 _public_5379f6
#define public_537a0f _public_537a0f
#define public_537a31 _public_537a31

PROC_DECLARE(0x5379b0, internal_5379b0, public_5379b0);
extern "C" NAKED register_t __cdecl internal_5379b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xD4]
        test eax, eax
        je public_537a31
        mov eax, dword ptr ds : [esi+0xDC]
        test eax, eax
        je public_537a0f
        push ebx
        mov ebx, dword ptr ds : [esi+0xD4]
        push edi
        lea edi, ds:[eax+0x38]
        mov ecx, edi
        call public_5afe60
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_5379f3
        mov dword ptr ds : [ecx], eax
        jmp public_5379f6
        public_5379f3 : nop
        mov dword ptr ds : [edi+4], eax
        public_5379f6 : nop
        mov dword ptr ds : [edi+8], eax
        pop edi
        mov dword ptr ds : [esi+0xD4], 0
        mov dword ptr ds : [esi+0xDC], 0
        pop ebx
        public_537a0f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0xD0]
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0xD0], ecx
        jg public_537a31
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_537a31 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5379b0)
    }
}

#undef public_5379f3
#undef public_5379f6
#undef public_537a0f
#undef public_537a31
