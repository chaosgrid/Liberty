#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34100);

#define public_6c34117 _public_6c34117
#define public_6c34122 _public_6c34122
#define public_6c3412f _public_6c3412f
#define public_6c34140 _public_6c34140
#define public_6c3414c _public_6c3414c
#define public_6c34155 _public_6c34155

PROC_DECLARE(0x6c34100, internal_6c34100, public_6c34100);
extern "C" NAKED register_t __cdecl internal_6c34100()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x25]
        test al, al
        jne public_6c3412f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6c34122
        public_6c34117 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6c34117
        public_6c34122 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6c3412f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6c3414c
        lea esp, ss:[esp]
        public_6c34140 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6c34140
        public_6c3414c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6c34155
        mov dword ptr ds : [ecx], eax
        public_6c34155 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c34100)
    }
}

#undef public_6c34117
#undef public_6c34122
#undef public_6c3412f
#undef public_6c34140
#undef public_6c3414c
#undef public_6c34155
