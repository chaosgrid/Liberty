#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe20);

#define public_6ecfe37 _public_6ecfe37
#define public_6ecfe42 _public_6ecfe42
#define public_6ecfe4f _public_6ecfe4f
#define public_6ecfe60 _public_6ecfe60
#define public_6ecfe6c _public_6ecfe6c
#define public_6ecfe75 _public_6ecfe75

PROC_DECLARE(0x6ecfe20, internal_6ecfe20, public_6ecfe20);
extern "C" NAKED register_t __cdecl internal_6ecfe20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x41]
        test al, al
        jne public_6ecfe4f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6ecfe42
        public_6ecfe37 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6ecfe37
        public_6ecfe42 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6ecfe4f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ecfe6c
        lea esp, ss:[esp]
        public_6ecfe60 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ecfe60
        public_6ecfe6c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ecfe75
        mov dword ptr ds : [ecx], eax
        public_6ecfe75 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ecfe20)
    }
}

#undef public_6ecfe37
#undef public_6ecfe42
#undef public_6ecfe4f
#undef public_6ecfe60
#undef public_6ecfe6c
#undef public_6ecfe75
