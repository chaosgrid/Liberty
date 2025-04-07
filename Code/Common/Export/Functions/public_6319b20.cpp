#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319b20);

#define public_6319b39 _public_6319b39
#define public_6319b50 _public_6319b50
#define public_6319b5c _public_6319b5c
#define public_6319b60 _public_6319b60
#define public_6319b70 _public_6319b70
#define public_6319b7b _public_6319b7b

PROC_DECLARE(0x6319b20, internal_6319b20, public_6319b20);
extern "C" NAKED register_t __cdecl internal_6319b20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x40]
        test dl, dl
        push ebx
        jne public_6319b39
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6319b39
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6319b39 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x41]
        test bl, bl
        jne public_6319b60
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6319b5c
        lea esp, ss:[esp]
        public_6319b50 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6319b50
        public_6319b5c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6319b60 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6319b7b
        lea esp, ss:[esp]
        public_6319b70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6319b70
        public_6319b7b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6319b20)
    }
}

#undef public_6319b39
#undef public_6319b50
#undef public_6319b5c
#undef public_6319b60
#undef public_6319b70
#undef public_6319b7b
