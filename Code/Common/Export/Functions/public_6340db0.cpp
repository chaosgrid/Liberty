#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340db0);

#define public_6340dcc _public_6340dcc
#define public_6340de5 _public_6340de5
#define public_6340df4 _public_6340df4
#define public_6340df8 _public_6340df8
#define public_6340e01 _public_6340e01
#define public_6340e0c _public_6340e0c

PROC_DECLARE(0x6340db0, internal_6340db0, public_6340db0);
extern "C" NAKED register_t __cdecl internal_6340db0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xB8]
        test dl, dl
        push ebx
        jne public_6340dcc
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6340dcc
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6340dcc : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xB9]
        test bl, bl
        jne public_6340df8
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        jne public_6340df4
        public_6340de5 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        je public_6340de5
        public_6340df4 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6340df8 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6340e0c
        public_6340e01 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6340e01
        public_6340e0c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6340db0)
    }
}

#undef public_6340dcc
#undef public_6340de5
#undef public_6340df4
#undef public_6340df8
#undef public_6340e01
#undef public_6340e0c
