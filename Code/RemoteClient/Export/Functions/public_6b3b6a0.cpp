#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b6a0);

#define public_6b3b6b7 _public_6b3b6b7
#define public_6b3b6c2 _public_6b3b6c2
#define public_6b3b6cf _public_6b3b6cf
#define public_6b3b6e0 _public_6b3b6e0
#define public_6b3b6ec _public_6b3b6ec
#define public_6b3b6f5 _public_6b3b6f5

PROC_DECLARE(0x6b3b6a0, internal_6b3b6a0, public_6b3b6a0);
extern "C" NAKED register_t __cdecl internal_6b3b6a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6b3b6cf
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6b3b6c2
        public_6b3b6b7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6b3b6b7
        public_6b3b6c2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6b3b6cf : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6b3b6ec
        lea esp, ss:[esp]
        public_6b3b6e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6b3b6e0
        public_6b3b6ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6b3b6f5
        mov dword ptr ds : [ecx], eax
        public_6b3b6f5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b3b6a0)
    }
}

#undef public_6b3b6b7
#undef public_6b3b6c2
#undef public_6b3b6cf
#undef public_6b3b6e0
#undef public_6b3b6ec
#undef public_6b3b6f5
