#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3bef0);

#define public_6b3bf06 _public_6b3bf06
#define public_6b3bf11 _public_6b3bf11
#define public_6b3bf15 _public_6b3bf15
#define public_6b3bf20 _public_6b3bf20
#define public_6b3bf2c _public_6b3bf2c
#define public_6b3bf35 _public_6b3bf35

PROC_DECLARE(0x6b3bef0, internal_6b3bef0, public_6b3bef0);
extern "C" NAKED register_t __cdecl internal_6b3bef0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6b3bf15
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6b3bf11
        public_6b3bf06 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6b3bf06
        public_6b3bf11 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b3bf15 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6b3bf2c
        nop 
        public_6b3bf20 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6b3bf20
        public_6b3bf2c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6b3bf35
        mov dword ptr ds : [ecx], eax
        public_6b3bf35 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b3bef0)
    }
}

#undef public_6b3bf06
#undef public_6b3bf11
#undef public_6b3bf15
#undef public_6b3bf20
#undef public_6b3bf2c
#undef public_6b3bf35
