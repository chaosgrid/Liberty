#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4350);

#define public_6ce4367 _public_6ce4367
#define public_6ce4372 _public_6ce4372
#define public_6ce437f _public_6ce437f
#define public_6ce4390 _public_6ce4390
#define public_6ce439c _public_6ce439c
#define public_6ce43a5 _public_6ce43a5

PROC_DECLARE(0x6ce4350, internal_6ce4350, public_6ce4350);
extern "C" NAKED register_t __cdecl internal_6ce4350()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x11]
        test al, al
        jne public_6ce437f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6ce4372
        public_6ce4367 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6ce4367
        public_6ce4372 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6ce437f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ce439c
        lea esp, ss:[esp]
        public_6ce4390 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ce4390
        public_6ce439c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ce43a5
        mov dword ptr ds : [ecx], eax
        public_6ce43a5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce4350)
    }
}

#undef public_6ce4367
#undef public_6ce4372
#undef public_6ce437f
#undef public_6ce4390
#undef public_6ce439c
#undef public_6ce43a5
