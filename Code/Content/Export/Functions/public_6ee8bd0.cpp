#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ee8bf0 _public_6ee8bf0
#define public_6ee8c0a _public_6ee8c0a
#define public_6ee8c23 _public_6ee8c23
#define public_6ee8c42 _public_6ee8c42

PROC_DECLARE(0x6ee8bd0, internal_6ee8bd0, public_6ee8bd0);
extern "C" NAKED register_t __cdecl internal_6ee8bd0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+4]
        test al, al
        je public_6ee8c42
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ee8c42
        mov ebx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6ee8bf0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0xC]
        test al, al
        jne public_6ee8c0a
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6ee8bf0
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ee8c0a : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_6ee8c42
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6ee8c23
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ee8c23 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        public_6ee8c42 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ee8bd0)
    }
}

#undef public_6ee8bf0
#undef public_6ee8c0a
#undef public_6ee8c23
#undef public_6ee8c42
