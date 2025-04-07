#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be24e0);

#define public_6be24f7 _public_6be24f7
#define public_6be2512 _public_6be2512
#define public_6be2527 _public_6be2527

PROC_DECLARE(0x6be24e0, internal_6be24e0, public_6be24e0);
extern "C" NAKED register_t __cdecl internal_6be24e0()
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
        je public_6be24f7
        mov dword ptr ds : [esi+4], edx
        public_6be24f7 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6be2512
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6be2512 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6be2527
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6be2527 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be24e0)
    }
}

#undef public_6be24f7
#undef public_6be2512
#undef public_6be2527
