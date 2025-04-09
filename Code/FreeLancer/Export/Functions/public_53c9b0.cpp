#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53c9ef _public_53c9ef
#define public_53ca26 _public_53ca26
#define public_53ca2c _public_53ca2c

PROC_DECLARE(0x53c9b0, internal_53c9b0, public_53c9b0);
extern "C" NAKED register_t __cdecl internal_53c9b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        push 0
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_53ca2c
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53c9ef
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi+0xC]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+4]
        push ecx
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+0x1A8]
        public_53c9ef : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push 0
        push ecx
        call public_5416c0
        mov cx, word ptr ds : [esi+4]
        mov ebx, dword ptr ds : [public_5c6368]
        add esp, 8
        cmp cx, word ptr ds : [ebx]
        lea edx, ds:[esi+4]
        movzx esi, word ptr ds : [esi+0xC]
        pop ebx
        push 0
        push esi
        lea ecx, ds:[edi+4]
        push eax
        jne public_53ca26
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x48]
        pop edi
        pop esi
        ret 8
        public_53ca26 : nop
        mov edi, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [edi+0x44]
        public_53ca2c : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c9b0)
    }
}

#undef public_53c9ef
#undef public_53ca26
#undef public_53ca2c
