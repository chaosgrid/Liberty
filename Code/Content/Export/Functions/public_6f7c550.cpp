#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7c550);

#define public_6f7c567 _public_6f7c567
#define public_6f7c572 _public_6f7c572
#define public_6f7c57f _public_6f7c57f
#define public_6f7c590 _public_6f7c590
#define public_6f7c59c _public_6f7c59c
#define public_6f7c5a5 _public_6f7c5a5

PROC_DECLARE(0x6f7c550, internal_6f7c550, public_6f7c550);
extern "C" NAKED register_t __cdecl internal_6f7c550()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x5D]
        test al, al
        jne public_6f7c57f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        jne public_6f7c572
        public_6f7c567 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        je public_6f7c567
        public_6f7c572 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f7c57f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f7c59c
        lea esp, ss:[esp]
        public_6f7c590 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f7c590
        public_6f7c59c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f7c5a5
        mov dword ptr ds : [ecx], eax
        public_6f7c5a5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f7c550)
    }
}

#undef public_6f7c567
#undef public_6f7c572
#undef public_6f7c57f
#undef public_6f7c590
#undef public_6f7c59c
#undef public_6f7c5a5
