#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635a160);

#define public_6355bd0 _public_6355bd0
#define public_6355bdf _public_6355bdf
#define public_6355bf7 _public_6355bf7
#define public_6355c02 _public_6355c02

PROC_DECLARE(0x6355bb0, internal_6355bb0, public_6355bb0);
extern "C" NAKED register_t __cdecl internal_6355bb0()
{
    __asm
    {
        sub esp, 8
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x36]
        mov dword ptr ss : [esp+4], ecx
        dec eax
        mov dword ptr ss : [esp], eax
        js public_6355c02
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        public_6355bd0 : nop
        mov edx, dword ptr ds : [ecx+0x38]
        mov edi, dword ptr ds : [edx+eax*4]
        xor esi, esi
        mov si, word ptr ds : [edi+2]
        dec esi
        js public_6355bf7
        public_6355bdf : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+esi*4]
        push ebx
        push ebp
        call public_635a160
        dec esi
        jns public_6355bdf
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        public_6355bf7 : nop
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jns public_6355bd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6355c02 : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6355bb0)
    }
}

#undef public_6355bd0
#undef public_6355bdf
#undef public_6355bf7
#undef public_6355c02
