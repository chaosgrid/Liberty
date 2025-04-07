#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50c10);

#define public_6b50c29 _public_6b50c29
#define public_6b50c40 _public_6b50c40
#define public_6b50c4c _public_6b50c4c
#define public_6b50c50 _public_6b50c50
#define public_6b50c60 _public_6b50c60
#define public_6b50c6b _public_6b50c6b

PROC_DECLARE(0x6b50c10, internal_6b50c10, public_6b50c10);
extern "C" NAKED register_t __cdecl internal_6b50c10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6b50c29
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6b50c29
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6b50c29 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6b50c50
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6b50c4c
        lea esp, ss:[esp]
        public_6b50c40 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6b50c40
        public_6b50c4c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b50c50 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6b50c6b
        lea esp, ss:[esp]
        public_6b50c60 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6b50c60
        public_6b50c6b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b50c10)
    }
}

#undef public_6b50c29
#undef public_6b50c40
#undef public_6b50c4c
#undef public_6b50c50
#undef public_6b50c60
#undef public_6b50c6b
