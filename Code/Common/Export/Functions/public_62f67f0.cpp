#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e50);

#define public_62f6808 _public_62f6808
#define public_62f684b _public_62f684b
#define public_62f6853 _public_62f6853
#define public_62f6884 _public_62f6884
#define public_62f6892 _public_62f6892

PROC_DECLARE(0x62f67f0, internal_62f67f0, public_62f67f0);
extern "C" NAKED register_t __cdecl internal_62f67f0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xBA]
        sub esp, 0xC
        test al, al
        push esi
        je public_62f6808
        mov eax, 0xD
        pop esi
        add esp, 0xC
        ret 
        public_62f6808 : nop
        lea esi, ds:[ecx+0x98]
        mov ecx, esi
        call public_6333e50
        test al, al
        jne public_62f6892
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_63fcad4
        mov dword ptr ss : [esp+8], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcad8]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        je public_62f684b
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62f684b
        lea eax, ss:[esp+8]
        jmp public_62f6853
        public_62f684b : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_62f6853 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f6884
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f6862*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f686c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        mov eax, dword ptr ds : [eax+0xA8]
        pop esi
        add esp, 0xC
        ret 
        public_62f6884 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xA8]
        pop esi
        add esp, 0xC
        ret 
        public_62f6892 : nop
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62f67f0)
    }
}

#undef public_62f6808
#undef public_62f684b
#undef public_62f6853
#undef public_62f6884
#undef public_62f6892
