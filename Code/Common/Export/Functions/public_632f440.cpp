#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f440);

#define public_632f446 _public_632f446
#define public_632f45a _public_632f45a

PROC_DECLARE(0x632f440, internal_632f440, public_632f440);
extern "C" NAKED register_t __cdecl internal_632f440()
{
    __asm
    {
        xor eax, eax
        lea edx, ds:[ecx+0x1C]
        push esi
        public_632f446 : nop
        cmp dword ptr ds : [edx], 0
        je public_632f45a
        inc eax
        add edx, 0x14
        cmp eax, 8
        jb public_632f446
        xor al, al
        pop esi
        ret 4
        public_632f45a : nop
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea eax, ds:[eax+eax*4]
        lea edi, ds:[ecx+eax*4+0x1C]
        mov ecx, 5
        rep movsd
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x632f440)
    }
}

#undef public_632f446
#undef public_632f45a
