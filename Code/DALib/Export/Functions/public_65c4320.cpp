#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4320);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c433f _public_65c433f
#define public_65c4359 _public_65c4359
#define public_65c4373 _public_65c4373

PROC_DECLARE(0x65c4320, internal_65c4320, public_65c4320);
extern "C" NAKED register_t __cdecl internal_65c4320()
{
    __asm
    {
        push ebp
        push edi
        mov edi, ecx
        lea ebp, ds:[edi+0x10]
        push ebp
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_65c433f
        mov eax, dword ptr ds : [edi+0x28]
        push eax
        call dword ptr ds : [public_65c702c]
        public_65c433f : nop
        push ebx
        push esi
        mov esi, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_65c4359
        mov ebx, eax
        public_65c4359 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop esi
        pop ebx
        je public_65c4373
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        public_65c4373 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        inc ecx
        push ebp
        mov dword ptr ds : [edi+0xC], ecx
        call dword ptr ds : [public_65c7028]
        pop edi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x65c4320)
    }
}

#undef public_65c433f
#undef public_65c4359
#undef public_65c4373
