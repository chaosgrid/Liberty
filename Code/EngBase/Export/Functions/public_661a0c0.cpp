#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);

#define public_661a0d7 _public_661a0d7
#define public_661a0f1 _public_661a0f1
#define public_661a103 _public_661a103

PROC_DECLARE(0x661a0c0, internal_661a0c0, public_661a0c0);
extern "C" NAKED register_t __cdecl internal_661a0c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ecx+8]
        je public_661a0d7
        mov dword ptr ds : [esi+4], edx
        public_661a0d7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_661a0f1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_661a0f1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_661a103
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_661a103 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x661a0c0)
    }
}

#undef public_661a0d7
#undef public_661a0f1
#undef public_661a103
