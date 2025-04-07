#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb03f0);

#define public_6eb0410 _public_6eb0410
#define public_6eb041e _public_6eb041e
#define public_6eb042b _public_6eb042b
#define public_6eb0435 _public_6eb0435
#define public_6eb0441 _public_6eb0441
#define public_6eb044a _public_6eb044a

PROC_DECLARE(0x6eb03f0, internal_6eb03f0, public_6eb03f0);
extern "C" NAKED register_t __cdecl internal_6eb03f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0xA5]
        test al, al
        jne public_6eb042b
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        jne public_6eb041e
        lea ecx, ds:[ecx]
        public_6eb0410 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        je public_6eb0410
        public_6eb041e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6eb042b : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eb0441
        public_6eb0435 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eb0435
        public_6eb0441 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eb044a
        mov dword ptr ds : [ecx], eax
        public_6eb044a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb03f0)
    }
}

#undef public_6eb0410
#undef public_6eb041e
#undef public_6eb042b
#undef public_6eb0435
#undef public_6eb0441
#undef public_6eb044a
