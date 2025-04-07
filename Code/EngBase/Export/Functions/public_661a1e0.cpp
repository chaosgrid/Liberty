#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a1e0);

#define public_661a1f9 _public_661a1f9
#define public_661a20c _public_661a20c
#define public_661a218 _public_661a218
#define public_661a21c _public_661a21c
#define public_661a225 _public_661a225
#define public_661a230 _public_661a230

PROC_DECLARE(0x661a1e0, internal_661a1e0, public_661a1e0);
extern "C" NAKED register_t __cdecl internal_661a1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x10]
        test dl, dl
        jne public_661a1f9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_661a1f9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_661a1f9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_661a21c
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_661a218
        public_661a20c : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_661a20c
        public_661a218 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661a21c : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_661a230
        public_661a225 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_661a225
        public_661a230 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661a1e0)
    }
}

#undef public_661a1f9
#undef public_661a20c
#undef public_661a218
#undef public_661a21c
#undef public_661a225
#undef public_661a230
