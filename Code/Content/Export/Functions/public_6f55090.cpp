#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55090);

#define public_6f550ac _public_6f550ac
#define public_6f550c5 _public_6f550c5
#define public_6f550d4 _public_6f550d4
#define public_6f550d8 _public_6f550d8
#define public_6f550e1 _public_6f550e1
#define public_6f550ec _public_6f550ec

PROC_DECLARE(0x6f55090, internal_6f55090, public_6f55090);
extern "C" NAKED register_t __cdecl internal_6f55090()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xE4]
        test dl, dl
        push ebx
        jne public_6f550ac
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f550ac
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f550ac : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xE5]
        test bl, bl
        jne public_6f550d8
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xE5]
        test bl, bl
        jne public_6f550d4
        public_6f550c5 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xE5]
        test bl, bl
        je public_6f550c5
        public_6f550d4 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f550d8 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f550ec
        public_6f550e1 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f550e1
        public_6f550ec : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55090)
    }
}

#undef public_6f550ac
#undef public_6f550c5
#undef public_6f550d4
#undef public_6f550d8
#undef public_6f550e1
#undef public_6f550ec
