#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6becd80);

#define public_6becd97 _public_6becd97
#define public_6becdb1 _public_6becdb1
#define public_6becdc3 _public_6becdc3

PROC_DECLARE(0x6becd80, internal_6becd80, public_6becd80);
extern "C" NAKED register_t __cdecl internal_6becd80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6becd97
        mov dword ptr ds : [esi+4], edx
        public_6becd97 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6becdb1
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6becdb1 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6becdc3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6becdc3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6becd80)
    }
}

#undef public_6becd97
#undef public_6becdb1
#undef public_6becdc3
