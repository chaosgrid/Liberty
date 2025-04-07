#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31d90);

#define public_6f31da9 _public_6f31da9
#define public_6f31dc0 _public_6f31dc0
#define public_6f31dcc _public_6f31dcc
#define public_6f31dd0 _public_6f31dd0
#define public_6f31de0 _public_6f31de0
#define public_6f31deb _public_6f31deb

PROC_DECLARE(0x6f31d90, internal_6f31d90, public_6f31d90);
extern "C" NAKED register_t __cdecl internal_6f31d90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6f31da9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f31da9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f31da9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f31dd0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f31dcc
        lea esp, ss:[esp]
        public_6f31dc0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f31dc0
        public_6f31dcc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f31dd0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f31deb
        lea esp, ss:[esp]
        public_6f31de0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f31de0
        public_6f31deb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f31d90)
    }
}

#undef public_6f31da9
#undef public_6f31dc0
#undef public_6f31dcc
#undef public_6f31dd0
#undef public_6f31de0
#undef public_6f31deb
