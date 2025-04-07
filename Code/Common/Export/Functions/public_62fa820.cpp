#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62fa85b _public_62fa85b
#define public_62fa863 _public_62fa863
#define public_62fa897 _public_62fa897

PROC_DECLARE(0x62fa820, internal_62fa820, public_62fa820);
extern "C" NAKED register_t __cdecl internal_62fa820()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_63fca84
        mov dword ptr ss : [esp+0x18], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fca88]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_62fa85b
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62fa85b
        lea eax, ss:[esp+8]
        jmp public_62fa863
        public_62fa85b : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_62fa863 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62fa897
        push edx
        mov ecx, edi
        mov esi, 0x100001
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x49
/*FIXUP push offset public_63a123c @0x62fa87f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62fa884*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push esi
        call dword ptr ds : [edx]
        add esp, 0x18
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        public_62fa897 : nop
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62fa820)
    }
}

#undef public_62fa85b
#undef public_62fa863
#undef public_62fa897
