#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5070);

#define public_6ce5087 _public_6ce5087
#define public_6ce5092 _public_6ce5092
#define public_6ce509f _public_6ce509f
#define public_6ce50b0 _public_6ce50b0
#define public_6ce50bc _public_6ce50bc
#define public_6ce50c5 _public_6ce50c5

PROC_DECLARE(0x6ce5070, internal_6ce5070, public_6ce5070);
extern "C" NAKED register_t __cdecl internal_6ce5070()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x21]
        test al, al
        jne public_6ce509f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6ce5092
        public_6ce5087 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6ce5087
        public_6ce5092 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6ce509f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ce50bc
        lea esp, ss:[esp]
        public_6ce50b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ce50b0
        public_6ce50bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ce50c5
        mov dword ptr ds : [ecx], eax
        public_6ce50c5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce5070)
    }
}

#undef public_6ce5087
#undef public_6ce5092
#undef public_6ce509f
#undef public_6ce50b0
#undef public_6ce50bc
#undef public_6ce50c5
