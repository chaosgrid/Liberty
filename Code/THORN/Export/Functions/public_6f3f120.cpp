#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f120);

#define public_6f3f137 _public_6f3f137
#define public_6f3f152 _public_6f3f152
#define public_6f3f167 _public_6f3f167

PROC_DECLARE(0x6f3f120, internal_6f3f120, public_6f3f120);
extern "C" NAKED register_t __cdecl internal_6f3f120()
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
        je public_6f3f137
        mov dword ptr ds : [esi+4], edx
        public_6f3f137 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f3f152
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f3f152 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6f3f167
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6f3f167 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f3f120)
    }
}

#undef public_6f3f137
#undef public_6f3f152
#undef public_6f3f167
