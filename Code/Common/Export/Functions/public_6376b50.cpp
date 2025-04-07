#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_6376b50);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);

#define public_6376b69 _public_6376b69
#define public_6376b73 _public_6376b73
#define public_6376c31 _public_6376c31
#define public_6376c95 _public_6376c95

PROC_DECLARE(0x6376b50, internal_6376b50, public_6376b50);
extern "C" NAKED register_t __cdecl internal_6376b50()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658b970]
        lea eax, ds:[ecx-8]
        shr eax, 2
        test eax, eax
        mov dword ptr ds : [public_658b80c], eax
        jle public_6376b69
        cmp eax, ecx
        jle public_6376b73
        public_6376b69 : nop
        mov eax, 8
        mov dword ptr ds : [public_658b80c], eax
        public_6376b73 : nop
        push eax
        call public_636e920
        mov dword ptr ds : [public_658b8fc], eax
        mov eax, dword ptr ds : [public_658b80c]
        push eax
        call public_636e920
        mov ecx, dword ptr ds : [public_658b80c]
        push ecx
        mov dword ptr ds : [public_658b900], eax
        call public_636e920
        mov edx, dword ptr ds : [public_658b24c]
        mov dword ptr ds : [public_658b958], eax
        lea eax, ds:[edx*8]
        push eax
        call public_6377e60
        mov ecx, dword ptr ds : [public_658b250]
        lea edx, ds:[ecx*8+8]
        push edx
        mov dword ptr ds : [public_658b6f4], eax
        call public_6377e60
        mov dword ptr ds : [public_658b67c], eax
        mov eax, dword ptr ds : [public_658b250]
        lea ecx, ds:[eax*8+8]
        push ecx
        call public_6377e60
        mov edx, dword ptr ds : [public_658b250]
        mov dword ptr ds : [public_658b678], eax
        lea eax, ds:[edx*8+8]
        push eax
        call public_6377e60
        mov ecx, dword ptr ds : [public_658b250]
        lea edx, ds:[ecx*8+8]
        push edx
        mov dword ptr ds : [public_658b684], eax
        call public_6377e60
        mov dword ptr ds : [public_658b680], eax
        mov eax, dword ptr ds : [public_658b250]
        add esp, 0x20
        inc eax
        mov ecx, eax
        dec eax
        test ecx, ecx
        je public_6376c95
        push esi
        mov edx, 0xFFEFFFFF
        mov ecx, 0x7FEFFFFF
        public_6376c31 : nop
        mov esi, dword ptr ds : [public_658b67c]
        mov dword ptr ds : [esi+eax*8], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_658b67c]
        mov dword ptr ds : [esi+eax*8+4], edx
        mov esi, dword ptr ds : [public_658b678]
        mov dword ptr ds : [esi+eax*8], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_658b678]
        mov dword ptr ds : [esi+eax*8+4], ecx
        mov esi, dword ptr ds : [public_658b684]
        mov dword ptr ds : [esi+eax*8], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_658b684]
        mov dword ptr ds : [esi+eax*8+4], edx
        mov esi, dword ptr ds : [public_658b680]
        mov dword ptr ds : [esi+eax*8], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_658b680]
        mov dword ptr ds : [esi+eax*8+4], ecx
        mov esi, eax
        dec eax
        test esi, esi
        jne public_6376c31
        pop esi
        public_6376c95 : nop
        mov eax, dword ptr ds : [public_658b24c]
        lea edx, ds:[eax+1]
        imul edx, eax
        shl edx, 3
        push edx
        call public_6377e60
        mov dword ptr ds : [public_658b904], eax
        mov eax, dword ptr ds : [public_658b24c]
        lea ecx, ds:[eax*4+4]
        push ecx
        call public_6377e60
        add esp, 8
        mov dword ptr ds : [public_658b908], eax
        ret 
        UNREACHABLE_TRAP(0x6376b50)
    }
}

#undef public_6376b69
#undef public_6376b73
#undef public_6376c31
#undef public_6376c95
