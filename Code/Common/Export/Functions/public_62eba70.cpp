#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eba70);
CLANG_FORWARD_PROC_SYMBOL(public_62ebb10);

#define public_62ebaae _public_62ebaae
#define public_62ebacb _public_62ebacb
#define public_62ebae7 _public_62ebae7
#define public_62ebae9 _public_62ebae9
#define public_62ebafe _public_62ebafe

PROC_DECLARE(0x62eba70, internal_62eba70, public_62eba70);
extern "C" NAKED register_t __cdecl internal_62eba70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62ebafe
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        fadd dword ptr ds : [esi+4]
        fst dword ptr ds : [esi+4]
        fcomp dword ptr ds : [ecx+0x17C8]
        fnstsw ax
        test ah, 1
        jne public_62ebaae
        mov dword ptr ds : [esi+4], 0
        public_62ebaae : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [ecx+0x17C4]
        fnstsw ax
        test ah, 5
        jp public_62ebacb
        push 1
        mov ecx, esi
        call public_62ebb10
        pop esi
        ret 4
        public_62ebacb : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [ecx+0x17C8]
        fnstsw ax
        test ah, 5
        jp public_62ebafe
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_62ebae7
        add ecx, 0xFFFFFFF8
        jmp public_62ebae9
        public_62ebae7 : nop
        xor ecx, ecx
        public_62ebae9 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62ebafe
        push 0
        mov ecx, esi
        call public_62ebb10
        public_62ebafe : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62eba70)
    }
}

#undef public_62ebaae
#undef public_62ebacb
#undef public_62ebae7
#undef public_62ebae9
#undef public_62ebafe
