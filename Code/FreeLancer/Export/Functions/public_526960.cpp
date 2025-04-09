#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526960);

#define public_526977 _public_526977
#define public_526982 _public_526982
#define public_52698f _public_52698f
#define public_5269a0 _public_5269a0
#define public_5269ac _public_5269ac
#define public_5269b5 _public_5269b5

PROC_DECLARE(0x526960, internal_526960, public_526960);
extern "C" NAKED register_t __cdecl internal_526960()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_52698f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_526982
        public_526977 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_526977
        public_526982 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_52698f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_5269ac
        lea esp, ss:[esp]
        public_5269a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_5269a0
        public_5269ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_5269b5
        mov dword ptr ds : [ecx], eax
        public_5269b5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x526960)
    }
}

#undef public_526977
#undef public_526982
#undef public_52698f
#undef public_5269a0
#undef public_5269ac
#undef public_5269b5
