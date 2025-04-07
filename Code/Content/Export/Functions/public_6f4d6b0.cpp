#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d6b0);

#define public_6f4d6c7 _public_6f4d6c7
#define public_6f4d6d2 _public_6f4d6d2
#define public_6f4d6df _public_6f4d6df
#define public_6f4d6f0 _public_6f4d6f0
#define public_6f4d6fc _public_6f4d6fc
#define public_6f4d705 _public_6f4d705

PROC_DECLARE(0x6f4d6b0, internal_6f4d6b0, public_6f4d6b0);
extern "C" NAKED register_t __cdecl internal_6f4d6b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x21]
        test al, al
        jne public_6f4d6df
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f4d6d2
        public_6f4d6c7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f4d6c7
        public_6f4d6d2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f4d6df : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4d6fc
        lea esp, ss:[esp]
        public_6f4d6f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f4d6f0
        public_6f4d6fc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f4d705
        mov dword ptr ds : [ecx], eax
        public_6f4d705 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f4d6b0)
    }
}

#undef public_6f4d6c7
#undef public_6f4d6d2
#undef public_6f4d6df
#undef public_6f4d6f0
#undef public_6f4d6fc
#undef public_6f4d705
