#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cee0);

#define public_6f2cf00 _public_6f2cf00
#define public_6f2cf0e _public_6f2cf0e
#define public_6f2cf1b _public_6f2cf1b
#define public_6f2cf25 _public_6f2cf25
#define public_6f2cf31 _public_6f2cf31
#define public_6f2cf3a _public_6f2cf3a

PROC_DECLARE(0x6f2cee0, internal_6f2cee0, public_6f2cee0);
extern "C" NAKED register_t __cdecl internal_6f2cee0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x135]
        test al, al
        jne public_6f2cf1b
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        jne public_6f2cf0e
        lea ecx, ds:[ecx]
        public_6f2cf00 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        je public_6f2cf00
        public_6f2cf0e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f2cf1b : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f2cf31
        public_6f2cf25 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f2cf25
        public_6f2cf31 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f2cf3a
        mov dword ptr ds : [ecx], eax
        public_6f2cf3a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f2cee0)
    }
}

#undef public_6f2cf00
#undef public_6f2cf0e
#undef public_6f2cf1b
#undef public_6f2cf25
#undef public_6f2cf31
#undef public_6f2cf3a
