#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96380);

#define public_6d96397 _public_6d96397
#define public_6d963a2 _public_6d963a2
#define public_6d963af _public_6d963af
#define public_6d963c0 _public_6d963c0
#define public_6d963cc _public_6d963cc
#define public_6d963d5 _public_6d963d5

PROC_DECLARE(0x6d96380, internal_6d96380, public_6d96380);
extern "C" NAKED register_t __cdecl internal_6d96380()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6d963af
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d963a2
        public_6d96397 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d96397
        public_6d963a2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6d963af : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d963cc
        lea esp, ss:[esp]
        public_6d963c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d963c0
        public_6d963cc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d963d5
        mov dword ptr ds : [ecx], eax
        public_6d963d5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d96380)
    }
}

#undef public_6d96397
#undef public_6d963a2
#undef public_6d963af
#undef public_6d963c0
#undef public_6d963cc
#undef public_6d963d5
