#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634b030);

#define public_634b056 _public_634b056
#define public_634b07c _public_634b07c
#define public_634b07f _public_634b07f

PROC_DECLARE(0x634b030, internal_634b030, public_634b030);
extern "C" NAKED register_t __cdecl internal_634b030()
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
        je public_634b07f
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634b07f
        mov ebp, dword ptr ss : [esp+0x18]
        public_634b056 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test byte ptr ds : [ecx+4], 1
        je public_634b07c
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx]
        test esi, esi
        jle public_634b07c
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0xC]
        push eax
        call public_634aef0
        test eax, eax
        je public_634b07f
        public_634b07c : nop
        dec esi
        jns public_634b056
        public_634b07f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634b030)
    }
}

#undef public_634b056
#undef public_634b07c
#undef public_634b07f
