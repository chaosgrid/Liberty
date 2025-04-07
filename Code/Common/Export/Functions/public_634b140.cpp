#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634b140);

#define public_634b166 _public_634b166
#define public_634b18d _public_634b18d
#define public_634b190 _public_634b190

PROC_DECLARE(0x634b140, internal_634b140, public_634b140);
extern "C" NAKED register_t __cdecl internal_634b140()
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
        je public_634b190
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634b190
        mov ebp, dword ptr ss : [esp+0x18]
        public_634b166 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test byte ptr ds : [ecx+4], 4
        je public_634b18d
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0xC]
        test esi, esi
        jle public_634b18d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0xC]
        push eax
        call public_634aef0
        test eax, eax
        je public_634b190
        public_634b18d : nop
        dec esi
        jns public_634b166
        public_634b190 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634b140)
    }
}

#undef public_634b166
#undef public_634b18d
#undef public_634b190
