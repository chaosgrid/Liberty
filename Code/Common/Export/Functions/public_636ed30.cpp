#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ed30);

#define public_636ed53 _public_636ed53
#define public_636ed6d _public_636ed6d

PROC_DECLARE(0x636ed30, internal_636ed30, public_636ed30);
extern "C" NAKED register_t __cdecl internal_636ed30()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b990]
        test eax, eax
        push esi
        mov dword ptr ss : [esp+4], 0
        je public_636ed6d
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        je public_636ed6d
        public_636ed53 : nop
        lea eax, ss:[esp+4]
        push eax
        call public_636e740
        mov eax, dword ptr ds : [esi]
        add esp, 4
        add esi, 4
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jne public_636ed53
/*FIXUP public_636ed6d : nop
        push offset public_658b990 @0x636ed6d*/
  FIXUP public_636ed6d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b990
        call public_636e740
        add esp, 4
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x636ed30)
    }
}

#undef public_636ed53
#undef public_636ed6d
