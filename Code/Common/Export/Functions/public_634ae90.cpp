#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ae90);
CLANG_FORWARD_PROC_SYMBOL(public_634aef0);

#define public_634aeb9 _public_634aeb9
#define public_634aed9 _public_634aed9
#define public_634aedc _public_634aedc

PROC_DECLARE(0x634ae90, internal_634ae90, public_634ae90);
extern "C" NAKED register_t __cdecl internal_634ae90()
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
        je public_634aedc
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634aedc
        public_634aeb9 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx]
        test esi, esi
        jle public_634aed9
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        call public_634aef0
        test eax, eax
        je public_634aedc
        public_634aed9 : nop
        dec esi
        jns public_634aeb9
        public_634aedc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634ae90)
    }
}

#undef public_634aeb9
#undef public_634aed9
#undef public_634aedc
