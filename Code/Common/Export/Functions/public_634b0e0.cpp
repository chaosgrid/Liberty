#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634b0e0);

#define public_634b106 _public_634b106
#define public_634b12d _public_634b12d
#define public_634b130 _public_634b130

PROC_DECLARE(0x634b0e0, internal_634b0e0, public_634b0e0);
extern "C" NAKED register_t __cdecl internal_634b0e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push eax
        call public_634aef0
        mov edi, eax
        test edi, edi
        je public_634b130
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634b130
        mov ebp, dword ptr ss : [esp+0x18]
        public_634b106 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test byte ptr ds : [ecx+4], 4
        je public_634b12d
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+8]
        test esi, esi
        jle public_634b12d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0xC]
        push eax
        call public_634aef0
        test eax, eax
        je public_634b130
        public_634b12d : nop
        dec esi
        jns public_634b106
        public_634b130 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634b0e0)
    }
}

#undef public_634b106
#undef public_634b12d
#undef public_634b130
