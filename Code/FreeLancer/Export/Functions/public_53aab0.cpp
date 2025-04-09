#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_53aab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_53aadc _public_53aadc
#define public_53aaec _public_53aaec
#define public_53aafb _public_53aafb

PROC_DECLARE(0x53aab0, internal_53aab0, public_53aab0);
extern "C" NAKED register_t __cdecl internal_53aab0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp ecx, ebx
        je public_53aadc
        call public_4f7a90
        mov dword ptr ds : [esi+0x10], ebx
        public_53aadc : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_53aaec
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_53aaec : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, ebx
        je public_53aafb
        call public_537ad0
        mov dword ptr ds : [esi+0x14], ebx
        public_53aafb : nop
        push esi
        mov dword ptr ds : [esi+8], ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x53aab0)
    }
}

#undef public_53aadc
#undef public_53aaec
#undef public_53aafb
