#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be21c0);

#define public_6be21d6 _public_6be21d6
#define public_6be21e1 _public_6be21e1
#define public_6be21e5 _public_6be21e5
#define public_6be21f0 _public_6be21f0
#define public_6be21fc _public_6be21fc
#define public_6be2205 _public_6be2205

PROC_DECLARE(0x6be21c0, internal_6be21c0, public_6be21c0);
extern "C" NAKED register_t __cdecl internal_6be21c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6be21e5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6be21e1
        public_6be21d6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6be21d6
        public_6be21e1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6be21e5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6be21fc
        nop 
        public_6be21f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6be21f0
        public_6be21fc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6be2205
        mov dword ptr ds : [ecx], eax
        public_6be2205 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6be21c0)
    }
}

#undef public_6be21d6
#undef public_6be21e1
#undef public_6be21e5
#undef public_6be21f0
#undef public_6be21fc
#undef public_6be2205
