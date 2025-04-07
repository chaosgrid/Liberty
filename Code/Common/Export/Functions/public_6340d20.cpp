#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340d20);

#define public_6340d3c _public_6340d3c
#define public_6340d55 _public_6340d55
#define public_6340d64 _public_6340d64
#define public_6340d68 _public_6340d68
#define public_6340d71 _public_6340d71
#define public_6340d7c _public_6340d7c

PROC_DECLARE(0x6340d20, internal_6340d20, public_6340d20);
extern "C" NAKED register_t __cdecl internal_6340d20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x80]
        test dl, dl
        push ebx
        jne public_6340d3c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6340d3c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6340d3c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x81]
        test bl, bl
        jne public_6340d68
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x81]
        test bl, bl
        jne public_6340d64
        public_6340d55 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x81]
        test bl, bl
        je public_6340d55
        public_6340d64 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6340d68 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6340d7c
        public_6340d71 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6340d71
        public_6340d7c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6340d20)
    }
}

#undef public_6340d3c
#undef public_6340d55
#undef public_6340d64
#undef public_6340d68
#undef public_6340d71
#undef public_6340d7c
