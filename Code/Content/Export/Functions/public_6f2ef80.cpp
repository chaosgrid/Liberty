#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ef80);

#define public_6f2ef99 _public_6f2ef99
#define public_6f2efb0 _public_6f2efb0
#define public_6f2efbc _public_6f2efbc
#define public_6f2efc0 _public_6f2efc0
#define public_6f2efd0 _public_6f2efd0
#define public_6f2efdb _public_6f2efdb

PROC_DECLARE(0x6f2ef80, internal_6f2ef80, public_6f2ef80);
extern "C" NAKED register_t __cdecl internal_6f2ef80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        push ebx
        jne public_6f2ef99
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f2ef99
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f2ef99 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6f2efc0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f2efbc
        lea esp, ss:[esp]
        public_6f2efb0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f2efb0
        public_6f2efbc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f2efc0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f2efdb
        lea esp, ss:[esp]
        public_6f2efd0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f2efd0
        public_6f2efdb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2ef80)
    }
}

#undef public_6f2ef99
#undef public_6f2efb0
#undef public_6f2efbc
#undef public_6f2efc0
#undef public_6f2efd0
#undef public_6f2efdb
