#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d0e);

#define public_6b3940d _public_6b3940d
#define public_6b39432 _public_6b39432

PROC_DECLARE(0x6b393e0, internal_6b393e0, public_6b393e0);
extern "C" NAKED register_t __cdecl internal_6b393e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [public_6b73d38]
        dec ecx
        test esi, esi
        mov dword ptr ds : [public_6b73d38], ecx
        jbe public_6b3940d
        cmp esi, 0x80
        ja public_6b3940d
        mov ecx, dword ptr ds : [esi*4+public_6b73b34]
        test ecx, ecx
        je public_6b3940d
        call public_6b69d0e
        public_6b3940d : nop
        mov ecx, dword ptr ds : [public_6b73d48]
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        call dword ptr ds : [eax+0x40]
        test esi, esi
        jbe public_6b39432
        cmp esi, 0x80
        ja public_6b39432
        mov dword ptr ds : [esi*4+public_6b73b34], 0
        public_6b39432 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b393e0)
    }
}

#undef public_6b3940d
#undef public_6b39432
