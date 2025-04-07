#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31a00);

#define public_6f31a17 _public_6f31a17
#define public_6f31a22 _public_6f31a22
#define public_6f31a2f _public_6f31a2f
#define public_6f31a40 _public_6f31a40
#define public_6f31a4c _public_6f31a4c
#define public_6f31a55 _public_6f31a55

PROC_DECLARE(0x6f31a00, internal_6f31a00, public_6f31a00);
extern "C" NAKED register_t __cdecl internal_6f31a00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6f31a2f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f31a22
        public_6f31a17 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f31a17
        public_6f31a22 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f31a2f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f31a4c
        lea esp, ss:[esp]
        public_6f31a40 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f31a40
        public_6f31a4c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f31a55
        mov dword ptr ds : [ecx], eax
        public_6f31a55 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f31a00)
    }
}

#undef public_6f31a17
#undef public_6f31a22
#undef public_6f31a2f
#undef public_6f31a40
#undef public_6f31a4c
#undef public_6f31a55
