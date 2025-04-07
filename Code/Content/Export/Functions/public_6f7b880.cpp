#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7b880);

#define public_6f7b897 _public_6f7b897
#define public_6f7b8a2 _public_6f7b8a2
#define public_6f7b8af _public_6f7b8af
#define public_6f7b8c0 _public_6f7b8c0
#define public_6f7b8cc _public_6f7b8cc
#define public_6f7b8d5 _public_6f7b8d5

PROC_DECLARE(0x6f7b880, internal_6f7b880, public_6f7b880);
extern "C" NAKED register_t __cdecl internal_6f7b880()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6f7b8af
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f7b8a2
        public_6f7b897 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f7b897
        public_6f7b8a2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6f7b8af : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f7b8cc
        lea esp, ss:[esp]
        public_6f7b8c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f7b8c0
        public_6f7b8cc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f7b8d5
        mov dword ptr ds : [ecx], eax
        public_6f7b8d5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f7b880)
    }
}

#undef public_6f7b897
#undef public_6f7b8a2
#undef public_6f7b8af
#undef public_6f7b8c0
#undef public_6f7b8cc
#undef public_6f7b8d5
