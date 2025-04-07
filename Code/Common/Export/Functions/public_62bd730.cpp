#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267810);

#define public_62bd747 _public_62bd747
#define public_62bd753 _public_62bd753
#define public_62bd755 _public_62bd755
#define public_62bd777 _public_62bd777
#define public_62bd783 _public_62bd783

PROC_DECLARE(0x62bd730, internal_62bd730, public_62bd730);
extern "C" NAKED register_t __cdecl internal_62bd730()
{
    __asm
    {
        push esi
        lea esi, ds:[ecx+0x14]
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_62bd753
        mov dx, word ptr ss : [esp+0xC]
        public_62bd747 : nop
        cmp word ptr ds : [eax], dx
        je public_62bd755
        add eax, 2
        cmp eax, ecx
        jne public_62bd747
        public_62bd753 : nop
        mov eax, ecx
        public_62bd755 : nop
        cmp eax, ecx
        jne public_62bd783
        lea eax, ss:[esp+0xC]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_6267810
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_62bd783
        mov cx, word ptr ss : [esp+0xC]
        public_62bd777 : nop
        cmp word ptr ds : [eax], cx
        je public_62bd783
        add eax, 2
        cmp eax, esi
        jne public_62bd777
        public_62bd783 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62bd730)
    }
}

#undef public_62bd747
#undef public_62bd753
#undef public_62bd755
#undef public_62bd777
#undef public_62bd783
