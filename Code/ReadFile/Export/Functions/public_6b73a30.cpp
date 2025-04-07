#include "ReadFile-PCH.h"


#define public_6b73a48 _public_6b73a48
#define public_6b73a4e _public_6b73a4e
#define public_6b73a6a _public_6b73a6a
#define public_6b73a72 _public_6b73a72
#define public_6b73a7e _public_6b73a7e
#define public_6b73a84 _public_6b73a84
#define public_6b73a8a _public_6b73a8a
#define public_6b73aaf _public_6b73aaf

PROC_DECLARE(0x6b73a30, internal_6b73a30, public_6b73a30);
extern "C" NAKED register_t __cdecl internal_6b73a30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+0x230]
        test eax, eax
        je public_6b73a48
        mov edi, dword ptr ds : [eax+0x238]
        jmp public_6b73a4e
        public_6b73a48 : nop
        mov edi, dword ptr ds : [esi+0x238]
        public_6b73a4e : nop
        test edi, edi
        je public_6b73aaf
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        jne public_6b73a72
        mov ecx, dword ptr ds : [esi+0x238]
        test ecx, ecx
        je public_6b73a6a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b73a8a
        public_6b73a6a : nop
        mov eax, dword ptr ds : [esi+0x23C]
        jmp public_6b73a8a
        public_6b73a72 : nop
        test eax, eax
        je public_6b73a7e
        mov ecx, dword ptr ds : [eax+0x238]
        jmp public_6b73a84
        public_6b73a7e : nop
        mov ecx, dword ptr ds : [esi+0x238]
        public_6b73a84 : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        public_6b73a8a : nop
        test eax, eax
        je public_6b73aaf
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x38]
        pop edi
        mov eax, 1
        pop esi
        ret 0x14
        public_6b73aaf : nop
        mov dword ptr ds : [esi+0x1C], 6
        pop edi
        xor eax, eax
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x6b73a30)
    }
}

#undef public_6b73a48
#undef public_6b73a4e
#undef public_6b73a6a
#undef public_6b73a72
#undef public_6b73a7e
#undef public_6b73a84
#undef public_6b73a8a
#undef public_6b73aaf
