#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630ca90);

#define public_630caa9 _public_630caa9
#define public_630cac0 _public_630cac0
#define public_630cacc _public_630cacc
#define public_630cad0 _public_630cad0
#define public_630cae0 _public_630cae0
#define public_630caeb _public_630caeb

PROC_DECLARE(0x630ca90, internal_630ca90, public_630ca90);
extern "C" NAKED register_t __cdecl internal_630ca90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x70]
        test dl, dl
        push ebx
        jne public_630caa9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_630caa9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_630caa9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x71]
        test bl, bl
        jne public_630cad0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        jne public_630cacc
        lea esp, ss:[esp]
        public_630cac0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        je public_630cac0
        public_630cacc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_630cad0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_630caeb
        lea esp, ss:[esp]
        public_630cae0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_630cae0
        public_630caeb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630ca90)
    }
}

#undef public_630caa9
#undef public_630cac0
#undef public_630cacc
#undef public_630cad0
#undef public_630cae0
#undef public_630caeb
