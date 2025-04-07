#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b270);

#define public_626b287 _public_626b287
#define public_626b292 _public_626b292
#define public_626b29f _public_626b29f
#define public_626b2b0 _public_626b2b0
#define public_626b2bc _public_626b2bc
#define public_626b2c5 _public_626b2c5

PROC_DECLARE(0x626b270, internal_626b270, public_626b270);
extern "C" NAKED register_t __cdecl internal_626b270()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x2D]
        test al, al
        jne public_626b29f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_626b292
        public_626b287 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_626b287
        public_626b292 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_626b29f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_626b2bc
        lea esp, ss:[esp]
        public_626b2b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_626b2b0
        public_626b2bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_626b2c5
        mov dword ptr ds : [ecx], eax
        public_626b2c5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x626b270)
    }
}

#undef public_626b287
#undef public_626b292
#undef public_626b29f
#undef public_626b2b0
#undef public_626b2bc
#undef public_626b2c5
