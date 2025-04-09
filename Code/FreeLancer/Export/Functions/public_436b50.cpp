#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436b50);

#define public_436b69 _public_436b69
#define public_436b80 _public_436b80
#define public_436b8c _public_436b8c
#define public_436b90 _public_436b90
#define public_436ba0 _public_436ba0
#define public_436bab _public_436bab

PROC_DECLARE(0x436b50, internal_436b50, public_436b50);
extern "C" NAKED register_t __cdecl internal_436b50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x2C]
        test dl, dl
        push ebx
        jne public_436b69
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_436b69
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_436b69 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_436b90
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_436b8c
        lea esp, ss:[esp]
        public_436b80 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_436b80
        public_436b8c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_436b90 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_436bab
        lea esp, ss:[esp]
        public_436ba0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_436ba0
        public_436bab : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x436b50)
    }
}

#undef public_436b69
#undef public_436b80
#undef public_436b8c
#undef public_436b90
#undef public_436ba0
#undef public_436bab
