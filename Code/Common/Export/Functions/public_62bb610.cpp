#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62bb64c _public_62bb64c
#define public_62bb669 _public_62bb669
#define public_62bb686 _public_62bb686
#define public_62bb693 _public_62bb693

PROC_DECLARE(0x62bb610, internal_62bb610, public_62bb610);
extern "C" NAKED register_t __cdecl internal_62bb610()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+4], 0
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_62bb693
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        je public_62bb693
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_62bb64c
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [edx+0x114]
        pop esi
        fmul dword ptr ss : [esp+0xC]
        pop ecx
        ret 8
        public_62bb64c : nop
        cmp eax, 1
        jne public_62bb669
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x88]
        fld dword ptr ds : [ecx+0x118]
        pop esi
        fmul dword ptr ss : [esp+0xC]
        pop ecx
        ret 8
        public_62bb669 : nop
        cmp eax, 2
        jne public_62bb686
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edx+0x88]
        fld dword ptr ds : [eax+0x11C]
        pop esi
        fmul dword ptr ss : [esp+0xC]
        pop ecx
        ret 8
        public_62bb686 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        fmul dword ptr ss : [esp+0xC]
        pop ecx
        ret 8
        public_62bb693 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62bb610)
    }
}

#undef public_62bb64c
#undef public_62bb669
#undef public_62bb686
#undef public_62bb693
