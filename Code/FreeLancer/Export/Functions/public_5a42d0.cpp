#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564700);
CLANG_FORWARD_PROC_SYMBOL(public_59d580);

#define public_5a4306 _public_5a4306
#define public_5a4326 _public_5a4326

PROC_DECLARE(0x5a42d0, internal_5a42d0, public_5a42d0);
extern "C" NAKED register_t __cdecl internal_5a42d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_5a4306
        call public_59d580
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_5a4306
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
        public_5a4306 : nop
        mov cl, byte ptr ds : [esi+0x35C]
        mov al, byte ptr ds : [esi+0x388]
        or cl, 1
        test al, 4
        pop edi
        mov byte ptr ds : [esi+0x35C], cl
        pop esi
        je public_5a4326
        call public_564700
        public_5a4326 : nop
        ret 4
        UNREACHABLE_TRAP(0x5a42d0)
    }
}

#undef public_5a4306
#undef public_5a4326
