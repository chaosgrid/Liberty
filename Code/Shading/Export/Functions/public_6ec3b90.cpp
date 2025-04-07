#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3b90);

#define public_6ec3ba7 _public_6ec3ba7
#define public_6ec3bb2 _public_6ec3bb2
#define public_6ec3bbf _public_6ec3bbf
#define public_6ec3bd0 _public_6ec3bd0
#define public_6ec3bdc _public_6ec3bdc
#define public_6ec3be5 _public_6ec3be5

PROC_DECLARE(0x6ec3b90, internal_6ec3b90, public_6ec3b90);
extern "C" NAKED register_t __cdecl internal_6ec3b90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x25]
        test al, al
        jne public_6ec3bbf
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6ec3bb2
        public_6ec3ba7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6ec3ba7
        public_6ec3bb2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6ec3bbf : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ec3bdc
        lea esp, ss:[esp]
        public_6ec3bd0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ec3bd0
        public_6ec3bdc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ec3be5
        mov dword ptr ds : [ecx], eax
        public_6ec3be5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec3b90)
    }
}

#undef public_6ec3ba7
#undef public_6ec3bb2
#undef public_6ec3bbf
#undef public_6ec3bd0
#undef public_6ec3bdc
#undef public_6ec3be5
