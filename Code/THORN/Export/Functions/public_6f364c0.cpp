#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f364c0);

#define public_6f364d7 _public_6f364d7
#define public_6f364e2 _public_6f364e2
#define public_6f364ef _public_6f364ef
#define public_6f36500 _public_6f36500
#define public_6f3650c _public_6f3650c
#define public_6f36515 _public_6f36515

PROC_DECLARE(0x6f364c0, internal_6f364c0, public_6f364c0);
extern "C" NAKED register_t __cdecl internal_6f364c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x1D]
        test al, al
        jne public_6f364ef
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f364e2
        public_6f364d7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f364d7
        public_6f364e2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f364ef : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f3650c
        lea esp, ss:[esp]
        public_6f36500 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f36500
        public_6f3650c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f36515
        mov dword ptr ds : [ecx], eax
        public_6f36515 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f364c0)
    }
}

#undef public_6f364d7
#undef public_6f364e2
#undef public_6f364ef
#undef public_6f36500
#undef public_6f3650c
#undef public_6f36515
