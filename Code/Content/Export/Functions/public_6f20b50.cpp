#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f20b50);

#define public_6f20b67 _public_6f20b67
#define public_6f20b72 _public_6f20b72
#define public_6f20b7f _public_6f20b7f
#define public_6f20b90 _public_6f20b90
#define public_6f20b9c _public_6f20b9c
#define public_6f20ba5 _public_6f20ba5

PROC_DECLARE(0x6f20b50, internal_6f20b50, public_6f20b50);
extern "C" NAKED register_t __cdecl internal_6f20b50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x51]
        test al, al
        jne public_6f20b7f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_6f20b72
        public_6f20b67 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_6f20b67
        public_6f20b72 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f20b7f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f20b9c
        lea esp, ss:[esp]
        public_6f20b90 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f20b90
        public_6f20b9c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f20ba5
        mov dword ptr ds : [ecx], eax
        public_6f20ba5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f20b50)
    }
}

#undef public_6f20b67
#undef public_6f20b72
#undef public_6f20b7f
#undef public_6f20b90
#undef public_6f20b9c
#undef public_6f20ba5
