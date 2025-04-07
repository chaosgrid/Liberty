#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634afd0);

#define public_634aff9 _public_634aff9
#define public_634b01a _public_634b01a
#define public_634b01d _public_634b01d

PROC_DECLARE(0x634afd0, internal_634afd0, public_634afd0);
extern "C" NAKED register_t __cdecl internal_634afd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_634aef0
        mov edi, eax
        test edi, edi
        je public_634b01d
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634b01d
        public_634aff9 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+8]
        test esi, esi
        jle public_634b01a
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        call public_634aef0
        test eax, eax
        je public_634b01d
        public_634b01a : nop
        dec esi
        jns public_634aff9
        public_634b01d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634afd0)
    }
}

#undef public_634aff9
#undef public_634b01a
#undef public_634b01d
