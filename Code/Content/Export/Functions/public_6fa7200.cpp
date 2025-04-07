#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6fa7214 _public_6fa7214
#define public_6fa721e _public_6fa721e
#define public_6fa7222 _public_6fa7222
#define public_6fa7227 _public_6fa7227

PROC_DECLARE(0x6fa7200, internal_6fa7200, public_6fa7200);
extern "C" NAKED register_t __cdecl internal_6fa7200()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6fa7227
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6fa7214 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6fa721e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6fa7222
        public_6fa721e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6fa7222 : nop
        cmp edx, ecx
        jne public_6fa7214
        pop esi
        public_6fa7227 : nop
        ret 4
        UNREACHABLE_TRAP(0x6fa7200)
    }
}

#undef public_6fa7214
#undef public_6fa721e
#undef public_6fa7222
#undef public_6fa7227
