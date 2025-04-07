#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2370);

#define public_6ed2389 _public_6ed2389
#define public_6ed23a0 _public_6ed23a0
#define public_6ed23ac _public_6ed23ac
#define public_6ed23b0 _public_6ed23b0
#define public_6ed23c0 _public_6ed23c0
#define public_6ed23cb _public_6ed23cb

PROC_DECLARE(0x6ed2370, internal_6ed2370, public_6ed2370);
extern "C" NAKED register_t __cdecl internal_6ed2370()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x40]
        test dl, dl
        push ebx
        jne public_6ed2389
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ed2389
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ed2389 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x41]
        test bl, bl
        jne public_6ed23b0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6ed23ac
        lea esp, ss:[esp]
        public_6ed23a0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6ed23a0
        public_6ed23ac : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ed23b0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ed23cb
        lea esp, ss:[esp]
        public_6ed23c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ed23c0
        public_6ed23cb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed2370)
    }
}

#undef public_6ed2389
#undef public_6ed23a0
#undef public_6ed23ac
#undef public_6ed23b0
#undef public_6ed23c0
#undef public_6ed23cb
