#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac930);

#define public_6eac947 _public_6eac947
#define public_6eac952 _public_6eac952
#define public_6eac95f _public_6eac95f
#define public_6eac970 _public_6eac970
#define public_6eac97c _public_6eac97c
#define public_6eac985 _public_6eac985

PROC_DECLARE(0x6eac930, internal_6eac930, public_6eac930);
extern "C" NAKED register_t __cdecl internal_6eac930()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x35]
        test al, al
        jne public_6eac95f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6eac952
        public_6eac947 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6eac947
        public_6eac952 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6eac95f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eac97c
        lea esp, ss:[esp]
        public_6eac970 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eac970
        public_6eac97c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eac985
        mov dword ptr ds : [ecx], eax
        public_6eac985 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eac930)
    }
}

#undef public_6eac947
#undef public_6eac952
#undef public_6eac95f
#undef public_6eac970
#undef public_6eac97c
#undef public_6eac985
