#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eb550);

#define public_62eb567 _public_62eb567
#define public_62eb578 _public_62eb578
#define public_62eb57a _public_62eb57a
#define public_62eb598 _public_62eb598

PROC_DECLARE(0x62eb550, internal_62eb550, public_62eb550);
extern "C" NAKED register_t __cdecl internal_62eb550()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1038]
        push edi
        xor edi, edi
        test eax, eax
        jbe public_62eb598
        push ebx
        lea ebx, ds:[esi+0x838]
        public_62eb567 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb578
        add eax, 0xFFFFFFF8
        jmp public_62eb57a
        public_62eb578 : nop
        xor eax, eax
        public_62eb57a : nop
        push 0xFFFFFFFF
        push 0
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 1
        push ebx
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ds : [esi+0x1038]
        inc edi
        add ebx, 0x20
        cmp edi, eax
        jb public_62eb567
        pop ebx
        public_62eb598 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62eb550)
    }
}

#undef public_62eb567
#undef public_62eb578
#undef public_62eb57a
#undef public_62eb598
