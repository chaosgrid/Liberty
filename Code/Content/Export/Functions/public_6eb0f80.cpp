#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb0f80);

#define public_6eb0fa0 _public_6eb0fa0
#define public_6eb0fae _public_6eb0fae
#define public_6eb0fb2 _public_6eb0fb2
#define public_6eb0fc0 _public_6eb0fc0
#define public_6eb0fcc _public_6eb0fcc
#define public_6eb0fd5 _public_6eb0fd5

PROC_DECLARE(0x6eb0f80, internal_6eb0f80, public_6eb0f80);
extern "C" NAKED register_t __cdecl internal_6eb0f80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xC5]
        test bl, bl
        jne public_6eb0fb2
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        jne public_6eb0fae
        lea esp, ss:[esp]
        public_6eb0fa0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        je public_6eb0fa0
        public_6eb0fae : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6eb0fb2 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eb0fcc
        lea esp, ss:[esp]
        public_6eb0fc0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eb0fc0
        public_6eb0fcc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eb0fd5
        mov dword ptr ds : [ecx], eax
        public_6eb0fd5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb0f80)
    }
}

#undef public_6eb0fa0
#undef public_6eb0fae
#undef public_6eb0fb2
#undef public_6eb0fc0
#undef public_6eb0fcc
#undef public_6eb0fd5
