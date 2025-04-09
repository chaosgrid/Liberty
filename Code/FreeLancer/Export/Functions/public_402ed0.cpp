#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402ed0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_402ee6 _public_402ee6
#define public_402eec _public_402eec
#define public_402efd _public_402efd
#define public_402f08 _public_402f08
#define public_402f3b _public_402f3b

PROC_DECLARE(0x402ed0, internal_402ed0, public_402ed0);
extern "C" NAKED register_t __cdecl internal_402ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push esi
        xor esi, esi
        cmp eax, esi
        je public_402f08
        mov edx, dword ptr ds : [eax+4]
        cmp edx, esi
        jne public_402ee6
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        jmp public_402eec
        public_402ee6 : nop
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        pop edi
        public_402eec : nop
        mov edx, dword ptr ds : [eax]
        cmp edx, esi
        jne public_402efd
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        dec dword ptr ds : [ecx+8]
        pop esi
        ret 
        public_402efd : nop
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        dec dword ptr ds : [ecx+8]
        pop esi
        ret 
        public_402f08 : nop
        push 0x28
        call public_5b7e84
        add esp, 4
        cmp eax, esi
        je public_402f3b
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x14], esi
        mov dword ptr ds : [eax+0x18], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0x20], esi
        mov dword ptr ds : [eax+0x24], esi
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x18], esi
        pop esi
        ret 
        public_402f3b : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x402ed0)
    }
}

#undef public_402ee6
#undef public_402eec
#undef public_402efd
#undef public_402f08
#undef public_402f3b
