#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);

#define public_6f1b690 _public_6f1b690
#define public_6f1b6a4 _public_6f1b6a4
#define public_6f1b6ad _public_6f1b6ad
#define public_6f1b6b0 _public_6f1b6b0
#define public_6f1b6b7 _public_6f1b6b7

PROC_DECLARE(0x6f1b670, internal_6f1b670, public_6f1b670);
extern "C" NAKED register_t __cdecl internal_6f1b670()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        push edx
        call dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi]
        xor edi, edi
        cmp edx, esi
        je public_6f1b6b7
        or ecx, 0xFFFFFFFF
        lea ebx, ds:[ebx]
        public_6f1b690 : nop
        mov esi, dword ptr ds : [edx+8]
        cmp byte ptr ds : [esi+4], 0
        jne public_6f1b6ad
        test edi, edi
        je public_6f1b6a4
        mov dword ptr ds : [esi+0x1C], 0xA
        public_6f1b6a4 : nop
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], edi
        inc edi
        jmp public_6f1b6b0
        public_6f1b6ad : nop
        mov dword ptr ds : [esi+0x10], ecx
        public_6f1b6b0 : nop
        mov edx, dword ptr ds : [edx]
        cmp edx, dword ptr ds : [eax+0x10]
        jne public_6f1b690
        public_6f1b6b7 : nop
        mov ecx, eax
        call public_6f1d110
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1b670)
    }
}

#undef public_6f1b690
#undef public_6f1b6a4
#undef public_6f1b6ad
#undef public_6f1b6b0
#undef public_6f1b6b7
