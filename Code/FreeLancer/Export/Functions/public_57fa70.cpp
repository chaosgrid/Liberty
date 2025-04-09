#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fa70);

#define public_57fa85 _public_57fa85
#define public_57fa90 _public_57fa90
#define public_57fa94 _public_57fa94
#define public_57fa99 _public_57fa99

PROC_DECLARE(0x57fa70, internal_57fa70, public_57fa70);
extern "C" NAKED register_t __cdecl internal_57fa70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_57fa99
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov si, word ptr ds : [esi]
        public_57fa85 : nop
        cmp word ptr ds : [edx+0xC], si
        jae public_57fa90
        mov edx, dword ptr ds : [edx+8]
        jmp public_57fa94
        public_57fa90 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_57fa94 : nop
        cmp edx, ecx
        jne public_57fa85
        pop esi
        public_57fa99 : nop
        ret 4
        UNREACHABLE_TRAP(0x57fa70)
    }
}

#undef public_57fa85
#undef public_57fa90
#undef public_57fa94
#undef public_57fa99
