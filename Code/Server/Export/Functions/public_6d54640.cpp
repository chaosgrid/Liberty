#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eda0);

#define public_6d54690 _public_6d54690
#define public_6d5469b _public_6d5469b

PROC_DECLARE(0x6d54640, internal_6d54640, public_6d54640);
extern "C" NAKED register_t __cdecl internal_6d54640()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push esi
        jbe public_6d5469b
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6d5469b
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        je public_6d5469b
        imul ecx, 0x418
        lea esi, ds:[ecx+edx-0x418]
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d54690
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d5469b
        public_6d54690 : nop
        mov ecx, esi
        call public_6d4eda0
        pop esi
        ret 4
        public_6d5469b : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d54640)
    }
}

#undef public_6d54690
#undef public_6d5469b
