#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8720);
CLANG_FORWARD_PROC_SYMBOL(public_62ed070);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395411);

#define public_62e877f _public_62e877f
#define public_62e87a4 _public_62e87a4
#define public_62e87cf _public_62e87cf
#define public_62e87f7 _public_62e87f7

PROC_DECLARE(0x62e8720, internal_62e8720, public_62e8720);
extern "C" NAKED register_t __cdecl internal_62e8720()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395411 @0x62e8728*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395411
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        test eax, eax
        push ebx
        mov ebx, ecx
        je public_62e87f7
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        add eax, 4
        push eax
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_62e877f
        add eax, 8
        test eax, eax
        je public_62e877f
        push eax
        lea ecx, ss:[esp+0xC]
        call public_6341610
        public_62e877f : nop
        push esi
        push edi
        mov esi, dword ptr ds : [ebx+0xE0]
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        mov dword ptr ss : [esp+0x24], 1
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62e87a4
        mov edi, eax
        public_62e87a4 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0xC], ecx
        test ecx, ecx
        pop edi
        mov byte ptr ss : [esp+0x1C], 2
        pop esi
        je public_62e87cf
        lea eax, ss:[esp+8]
        push eax
        call public_62ed070
        public_62e87cf : nop
        mov ecx, dword ptr ds : [ebx+0xE4]
        mov eax, dword ptr ss : [esp+8]
        inc ecx
        test eax, eax
        mov dword ptr ds : [ebx+0xE4], ecx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_62e87f7
        push 0
        lea ecx, ss:[esp+0xC]
        call public_6341610
        public_62e87f7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62e8720)
    }
}

#undef public_62e877f
#undef public_62e87a4
#undef public_62e87cf
#undef public_62e87f7
