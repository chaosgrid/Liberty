#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634b090);

#define public_634b0b2 _public_634b0b2
#define public_634b0d5 _public_634b0d5
#define public_634b0d8 _public_634b0d8

PROC_DECLARE(0x634b090, internal_634b090, public_634b090);
extern "C" NAKED register_t __cdecl internal_634b090()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        call public_634aef0
        mov edi, eax
        test edi, edi
        je public_634b0d8
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634b0d8
        public_634b0b2 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        test byte ptr ds : [ecx+4], 2
        je public_634b0d5
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+4]
        test esi, esi
        jle public_634b0d5
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        call public_634aef0
        test eax, eax
        je public_634b0d8
        public_634b0d5 : nop
        dec esi
        jns public_634b0b2
        public_634b0d8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634b090)
    }
}

#undef public_634b0b2
#undef public_634b0d5
#undef public_634b0d8
