#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62150f0);

#define public_62150fa _public_62150fa
#define public_62150fc _public_62150fc
#define public_6215110 _public_6215110

PROC_DECLARE(0x62150f0, internal_62150f0, public_62150f0);
extern "C" NAKED register_t __cdecl internal_62150f0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_62150fa
        lea esi, ds:[ecx+4]
        jmp public_62150fc
        public_62150fa : nop
        xor esi, esi
        public_62150fc : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_6215110
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_6215110 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62150f0)
    }
}

#undef public_62150fa
#undef public_62150fc
#undef public_6215110
