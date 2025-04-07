#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368ea0);

#define public_6368ebb _public_6368ebb
#define public_6368ec9 _public_6368ec9
#define public_6368ed5 _public_6368ed5
#define public_6368ee8 _public_6368ee8

PROC_DECLARE(0x6368ea0, internal_6368ea0, public_6368ea0);
extern "C" NAKED register_t __cdecl internal_6368ea0()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x36]
        push ebp
        xor ebp, ebp
        dec eax
        js public_6368ee8
        mov ecx, dword ptr ds : [ecx+0x38]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edx, ds:[ecx+eax*4]
        lea edi, ds:[eax+1]
        public_6368ebb : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x28]
        cmp ecx, esi
        je public_6368ec9
        cmp dword ptr ds : [eax+0x2C], esi
        jne public_6368ed5
        public_6368ec9 : nop
        mov eax, dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [eax]
        or eax, dword ptr ds : [ecx]
        test al, 0xC
        jne public_6368ed5
        inc ebp
        public_6368ed5 : nop
        sub edx, 4
        dec edi
        jne public_6368ebb
        cmp ebp, 1
        pop edi
        pop esi
        jle public_6368ee8
        xor eax, eax
        pop ebp
        ret 4
        public_6368ee8 : nop
        mov eax, 1
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6368ea0)
    }
}

#undef public_6368ebb
#undef public_6368ec9
#undef public_6368ed5
#undef public_6368ee8
