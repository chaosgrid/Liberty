#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6321f30);

#define public_6321f50 _public_6321f50
#define public_6321f5e _public_6321f5e
#define public_6321f6b _public_6321f6b
#define public_6321f75 _public_6321f75
#define public_6321f81 _public_6321f81
#define public_6321f8a _public_6321f8a

PROC_DECLARE(0x6321f30, internal_6321f30, public_6321f30);
extern "C" NAKED register_t __cdecl internal_6321f30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x9D]
        test al, al
        jne public_6321f6b
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        jne public_6321f5e
        lea ecx, ds:[ecx]
        public_6321f50 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        je public_6321f50
        public_6321f5e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6321f6b : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6321f81
        public_6321f75 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6321f75
        public_6321f81 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6321f8a
        mov dword ptr ds : [ecx], eax
        public_6321f8a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6321f30)
    }
}

#undef public_6321f50
#undef public_6321f5e
#undef public_6321f6b
#undef public_6321f75
#undef public_6321f81
#undef public_6321f8a
