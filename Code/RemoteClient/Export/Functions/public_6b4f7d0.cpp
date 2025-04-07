#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f7d0);

#define public_6b4f7e6 _public_6b4f7e6
#define public_6b4f7f1 _public_6b4f7f1
#define public_6b4f7f5 _public_6b4f7f5
#define public_6b4f800 _public_6b4f800
#define public_6b4f80c _public_6b4f80c
#define public_6b4f815 _public_6b4f815

PROC_DECLARE(0x6b4f7d0, internal_6b4f7d0, public_6b4f7d0);
extern "C" NAKED register_t __cdecl internal_6b4f7d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6b4f7f5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6b4f7f1
        public_6b4f7e6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6b4f7e6
        public_6b4f7f1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b4f7f5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6b4f80c
        nop 
        public_6b4f800 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6b4f800
        public_6b4f80c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6b4f815
        mov dword ptr ds : [ecx], eax
        public_6b4f815 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b4f7d0)
    }
}

#undef public_6b4f7e6
#undef public_6b4f7f1
#undef public_6b4f7f5
#undef public_6b4f800
#undef public_6b4f80c
#undef public_6b4f815
