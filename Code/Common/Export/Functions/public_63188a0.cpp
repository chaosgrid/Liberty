#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63188a0);

#define public_63188b7 _public_63188b7
#define public_63188c2 _public_63188c2
#define public_63188cf _public_63188cf
#define public_63188e0 _public_63188e0
#define public_63188ec _public_63188ec
#define public_63188f5 _public_63188f5

PROC_DECLARE(0x63188a0, internal_63188a0, public_63188a0);
extern "C" NAKED register_t __cdecl internal_63188a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x61]
        test al, al
        jne public_63188cf
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_63188c2
        public_63188b7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_63188b7
        public_63188c2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_63188cf : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_63188ec
        lea esp, ss:[esp]
        public_63188e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_63188e0
        public_63188ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_63188f5
        mov dword ptr ds : [ecx], eax
        public_63188f5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x63188a0)
    }
}

#undef public_63188b7
#undef public_63188c2
#undef public_63188cf
#undef public_63188e0
#undef public_63188ec
#undef public_63188f5
