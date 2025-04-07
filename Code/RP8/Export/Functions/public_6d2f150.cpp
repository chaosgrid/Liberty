#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f150);

#define public_6d2f16e _public_6d2f16e
#define public_6d2f19b _public_6d2f19b
#define public_6d2f1a9 _public_6d2f1a9
#define public_6d2f1ab _public_6d2f1ab

PROC_DECLARE(0x6d2f150, internal_6d2f150, public_6d2f150);
extern "C" NAKED register_t __cdecl internal_6d2f150()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-8], ecx
        public_6d2f16e : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d2f1ab
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, dword ptr ds : [edx]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2f19b
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d2f1a9
        public_6d2f19b : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        public_6d2f1a9 : nop
        jmp public_6d2f16e
        public_6d2f1ab : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2f150)
    }
}

#undef public_6d2f16e
#undef public_6d2f19b
#undef public_6d2f1a9
#undef public_6d2f1ab
