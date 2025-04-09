#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564700);
CLANG_FORWARD_PROC_SYMBOL(public_59d580);

#define public_55b8d6 _public_55b8d6
#define public_55b8f6 _public_55b8f6

PROC_DECLARE(0x55b8a0, internal_55b8a0, public_55b8a0);
extern "C" NAKED register_t __cdecl internal_55b8a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_55b8d6
        call public_59d580
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_55b8d6
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x2C
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_55b8d6 : nop
        mov cl, byte ptr ds : [esi+0x330]
        mov al, byte ptr ds : [esi+0x331]
        or cl, 1
        test al, 2
        pop edi
        mov byte ptr ds : [esi+0x330], cl
        pop esi
        je public_55b8f6
        call public_564700
        public_55b8f6 : nop
        ret 4
        UNREACHABLE_TRAP(0x55b8a0)
    }
}

#undef public_55b8d6
#undef public_55b8f6
