#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4ca4b0);

#define public_4ca4d6 _public_4ca4d6
#define public_4ca4eb _public_4ca4eb
#define public_4ca4f6 _public_4ca4f6
#define public_4ca500 _public_4ca500
#define public_4ca528 _public_4ca528

PROC_DECLARE(0x4ca4b0, internal_4ca4b0, public_4ca4b0);
extern "C" NAKED register_t __cdecl internal_4ca4b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        push edi
        je public_4ca4f6
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        public_4ca4d6 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_4ca4eb
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        public_4ca4eb : nop
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_4ca4d6
        public_4ca4f6 : nop
        push ebp
        lea edi, ds:[esi+4]
        mov ebp, 4
        nop 
        public_4ca500 : nop
        mov ecx, edi
        call public_420f70
        add edi, 0x10
        dec ebp
        jne public_4ca500
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        pop ebp
        je public_4ca528
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ds : [esi], 0
        public_4ca528 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4ca4b0)
    }
}

#undef public_4ca4d6
#undef public_4ca4eb
#undef public_4ca4f6
#undef public_4ca500
#undef public_4ca528
