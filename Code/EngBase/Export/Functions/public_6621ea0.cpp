#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f250);
CLANG_FORWARD_PROC_SYMBOL(public_6621ea0);

#define public_6621ebe _public_6621ebe
#define public_6621ed3 _public_6621ed3
#define public_6621ee0 _public_6621ee0
#define public_6621eed _public_6621eed
#define public_6621ef0 _public_6621ef0
#define public_6621f0b _public_6621f0b

PROC_DECLARE(0x6621ea0, internal_6621ea0, public_6621ea0);
extern "C" NAKED register_t __cdecl internal_6621ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        and eax, 2
        push ebp
        push esi
        cmp al, 2
        push edi
        mov ebp, ecx
        jne public_6621ed3
        mov edi, dword ptr ss : [ebp+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6621ed3
        public_6621ebe : nop
        mov eax, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6621ebe
        public_6621ed3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 1
        cmp al, 1
        je public_6621f0b
        xor esi, esi
        public_6621ee0 : nop
        test esi, esi
        jne public_6621eed
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+0x1C]
        jmp public_6621ef0
        public_6621eed : nop
        mov esi, dword ptr ds : [esi+0x14]
        public_6621ef0 : nop
        test esi, esi
        je public_6621f0b
        mov ecx, esi
        call public_661f250
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        push esi
        mov ecx, ebp
        call public_6621ea0
        jmp public_6621ee0
        public_6621f0b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6621ea0)
    }
}

#undef public_6621ebe
#undef public_6621ed3
#undef public_6621ee0
#undef public_6621eed
#undef public_6621ef0
#undef public_6621f0b
