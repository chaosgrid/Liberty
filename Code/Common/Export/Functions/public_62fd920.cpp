#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62fd94c _public_62fd94c
#define public_62fd94e _public_62fd94e
#define public_62fd9bc _public_62fd9bc

PROC_DECLARE(0x62fd920, internal_62fd920, public_62fd920);
extern "C" NAKED register_t __cdecl internal_62fd920()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_62d20d0
        mov ecx, dword ptr ds : [esi+0x14]
        mov byte ptr ds : [esi+0x369], 0
        mov eax, dword ptr ds : [ecx]
        lea edi, ds:[esi+0x368]
        push edi
        call dword ptr ds : [eax+0x60]
        cmp byte ptr ds : [edi], 0
        je public_62fd94c
        test eax, eax
        jne public_62fd94c
        push 2
        jmp public_62fd94e
        public_62fd94c : nop
        push 0
        public_62fd94e : nop
        lea edi, ds:[esi+0x2C]
        mov ecx, edi
        call public_62d5980
        push 0x40490FDB
        mov ecx, edi
        mov byte ptr ds : [esi+0x365], 1
        mov byte ptr ds : [esi+0x36C], 1
        call public_63275f0
        mov ecx, dword ptr ds : [esi+0x360]
        push 3
        mov dword ptr ds : [esi+0x2E4], ecx
        push 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x2EA], 0
        mov byte ptr ds : [esi+0x2EC], 0
        call public_62d21d0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fd9bc
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        public_62fd9bc : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62fd920)
    }
}

#undef public_62fd94c
#undef public_62fd94e
#undef public_62fd9bc
