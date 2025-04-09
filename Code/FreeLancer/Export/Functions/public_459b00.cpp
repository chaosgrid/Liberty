#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459b00);

#define public_459b17 _public_459b17
#define public_459b22 _public_459b22
#define public_459b2f _public_459b2f
#define public_459b40 _public_459b40
#define public_459b4c _public_459b4c
#define public_459b55 _public_459b55

PROC_DECLARE(0x459b00, internal_459b00, public_459b00);
extern "C" NAKED register_t __cdecl internal_459b00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x1D]
        test al, al
        jne public_459b2f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_459b22
        public_459b17 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_459b17
        public_459b22 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_459b2f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_459b4c
        lea esp, ss:[esp]
        public_459b40 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_459b40
        public_459b4c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_459b55
        mov dword ptr ds : [ecx], eax
        public_459b55 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x459b00)
    }
}

#undef public_459b17
#undef public_459b22
#undef public_459b2f
#undef public_459b40
#undef public_459b4c
#undef public_459b55
