#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6306fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_632762e _public_632762e
#define public_6327640 _public_6327640
#define public_6327655 _public_6327655
#define public_632766d _public_632766d

PROC_DECLARE(0x6327600, internal_6327600, public_6327600);
extern "C" NAKED register_t __cdecl internal_6327600()
{
    __asm
    {
        mov eax, 0x2004
        call public_6391dc0
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_632762e
        push eax
        lea eax, ss:[esp+0xC]
/*FIXUP push offset public_63a45d8 @0x6327619*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a45d8
        push eax
        call public_6306fe0
        add esp, 0xC
        push eax
        call dword ptr ds : [public_639911c]
        public_632762e : nop
        push ebx
        push esi
        lea ebx, ss:[ebp+0x10]
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6327655
        lea ecx, ds:[ecx]
        public_6327640 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call public_6271cc0
        cmp esi, edi
        jne public_6327640
        public_6327655 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jne public_632766d
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp+0x1C], edx
        pop ebp
        add esp, 0x2004
        ret 
        public_632766d : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add eax, 8
        mov dword ptr ss : [ebp+0x1C], ecx
        pop ebp
        add esp, 0x2004
        ret 
        UNREACHABLE_TRAP(0x6327600)
    }
}

#undef public_632762e
#undef public_6327640
#undef public_6327655
#undef public_632766d
