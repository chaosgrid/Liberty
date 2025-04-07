#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e710);

#define public_62936c4 _public_62936c4
#define public_62936de _public_62936de
#define public_62936e0 _public_62936e0

PROC_DECLARE(0x62936a0, internal_62936a0, public_62936a0);
extern "C" NAKED register_t __cdecl internal_62936a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor bl, bl
        cmp edi, 0xFFFFFFFF
        mov esi, ecx
        je public_62936de
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x84]
        cmp edi, eax
        jne public_62936c4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62936c4 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        push eax
        call public_630e710
        add esp, 8
        test al, al
        mov al, 1
        jne public_62936e0
        public_62936de : nop
        mov al, bl
        public_62936e0 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62936a0)
    }
}

#undef public_62936c4
#undef public_62936de
#undef public_62936e0
