#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06340);

#define public_6d06357 _public_6d06357
#define public_6d06362 _public_6d06362
#define public_6d0636f _public_6d0636f
#define public_6d06380 _public_6d06380
#define public_6d0638c _public_6d0638c
#define public_6d06395 _public_6d06395

PROC_DECLARE(0x6d06340, internal_6d06340, public_6d06340);
extern "C" NAKED register_t __cdecl internal_6d06340()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x35]
        test al, al
        jne public_6d0636f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6d06362
        public_6d06357 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6d06357
        public_6d06362 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6d0636f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d0638c
        lea esp, ss:[esp]
        public_6d06380 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d06380
        public_6d0638c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d06395
        mov dword ptr ds : [ecx], eax
        public_6d06395 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d06340)
    }
}

#undef public_6d06357
#undef public_6d06362
#undef public_6d0636f
#undef public_6d06380
#undef public_6d0638c
#undef public_6d06395
