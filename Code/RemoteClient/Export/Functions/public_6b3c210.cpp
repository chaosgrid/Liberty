#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c210);

#define public_6b3c227 _public_6b3c227
#define public_6b3c242 _public_6b3c242
#define public_6b3c257 _public_6b3c257

PROC_DECLARE(0x6b3c210, internal_6b3c210, public_6b3c210);
extern "C" NAKED register_t __cdecl internal_6b3c210()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6b3c227
        mov dword ptr ds : [esi+4], edx
        public_6b3c227 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6b3c242
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b3c242 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6b3c257
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6b3c257 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3c210)
    }
}

#undef public_6b3c227
#undef public_6b3c242
#undef public_6b3c257
