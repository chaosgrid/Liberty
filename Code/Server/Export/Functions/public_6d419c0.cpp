#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d419c0);

#define public_6d419d7 _public_6d419d7
#define public_6d419e2 _public_6d419e2
#define public_6d419ef _public_6d419ef
#define public_6d41a00 _public_6d41a00
#define public_6d41a0c _public_6d41a0c
#define public_6d41a15 _public_6d41a15

PROC_DECLARE(0x6d419c0, internal_6d419c0, public_6d419c0);
extern "C" NAKED register_t __cdecl internal_6d419c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x29]
        test al, al
        jne public_6d419ef
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6d419e2
        public_6d419d7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6d419d7
        public_6d419e2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6d419ef : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d41a0c
        lea esp, ss:[esp]
        public_6d41a00 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d41a00
        public_6d41a0c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d41a15
        mov dword ptr ds : [ecx], eax
        public_6d41a15 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d419c0)
    }
}

#undef public_6d419d7
#undef public_6d419e2
#undef public_6d419ef
#undef public_6d41a00
#undef public_6d41a0c
#undef public_6d41a15
