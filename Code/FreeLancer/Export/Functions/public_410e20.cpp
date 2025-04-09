#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410e20);

#define public_410e59 _public_410e59
#define public_410e5c _public_410e5c
#define public_410e70 _public_410e70
#define public_410e81 _public_410e81
#define public_410e87 _public_410e87
#define public_410e98 _public_410e98
#define public_410e9e _public_410e9e
#define public_410ea6 _public_410ea6
#define public_410ebf _public_410ebf

PROC_DECLARE(0x410e20, internal_410e20, public_410e20);
extern "C" NAKED register_t __cdecl internal_410e20()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xB4]
        and al, 0xF7
        test al, 0x10
        mov byte ptr ds : [ecx+0xB4], al
        je public_410ebf
        and al, 0xEF
        test al, 0x10
        mov byte ptr ds : [ecx+0xB4], al
        je public_410e70
        mov eax, dword ptr ds : [public_6164e4]
        test eax, eax
        mov dword ptr ds : [public_6164e4], ecx
        jne public_410e59
        mov dword ptr ds : [public_6164e0], ecx
        jmp public_410e5c
        public_410e59 : nop
        mov dword ptr ds : [eax+4], ecx
        public_410e5c : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ds : [public_6164e8]
        inc eax
        push 1
        jmp public_410ea6
        public_410e70 : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jne public_410e81
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_6164e0], eax
        jmp public_410e87
        public_410e81 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        public_410e87 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_410e98
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6164e4], eax
        jmp public_410e9e
        public_410e98 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        public_410e9e : nop
        mov eax, dword ptr ds : [public_6164e8]
        dec eax
        push 0
        public_410ea6 : nop
        mov dword ptr ds : [public_6164e8], eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0xA4]
        public_410ebf : nop
        ret 
        UNREACHABLE_TRAP(0x410e20)
    }
}

#undef public_410e59
#undef public_410e5c
#undef public_410e70
#undef public_410e81
#undef public_410e87
#undef public_410e98
#undef public_410e9e
#undef public_410ea6
#undef public_410ebf
