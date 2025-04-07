#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f54c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d10);

#define public_6f54c91 _public_6f54c91
#define public_6f54cbf _public_6f54cbf
#define public_6f54cd9 _public_6f54cd9
#define public_6f54cdf _public_6f54cdf
#define public_6f54cee _public_6f54cee

PROC_DECLARE(0x6f54c80, internal_6f54c80, public_6f54c80);
extern "C" NAKED register_t __cdecl internal_6f54c80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x2C
        push edi
        mov edi, 1
        jne public_6f54cdf
        public_6f54c91 : nop
        push esi
        call public_6f52920
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, 0x3B
        je public_6f54cdf
        cmp eax, 0x7D
        je public_6f54cdf
        push esi
        call public_6f53a00
        add esp, 4
        inc edi
        mov eax, edi
        and eax, 0x8000003F
        jns public_6f54cbf
        dec eax
        or eax, 0xFFFFFFC0
        inc eax
        public_6f54cbf : nop
        jne public_6f54cd9
        mov eax, edi
        cdq 
        and edx, 0x3F
        add eax, edx
        sar eax, 6
        push 0x40
        dec eax
        push eax
        push esi
        call public_6f54d10
        add esp, 0xC
        public_6f54cd9 : nop
        cmp dword ptr ds : [esi+4], 0x2C
        je public_6f54c91
        public_6f54cdf : nop
        mov ecx, edi
        and ecx, 0x8000003F
        jns public_6f54cee
        dec ecx
        or ecx, 0xFFFFFFC0
        inc ecx
        public_6f54cee : nop
        mov eax, edi
        cdq 
        and edx, 0x3F
        add eax, edx
        push ecx
        sar eax, 6
        push eax
        push esi
        call public_6f54d10
        add esp, 0xC
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54c80)
    }
}

#undef public_6f54c91
#undef public_6f54cbf
#undef public_6f54cd9
#undef public_6f54cdf
#undef public_6f54cee
