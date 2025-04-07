#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6320a30);
CLANG_FORWARD_PROC_SYMBOL(public_6324d10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6397013);

#define public_6324de1 _public_6324de1
#define public_6324df2 _public_6324df2

PROC_DECLARE(0x6324d10, internal_6324d10, public_6324d10);
extern "C" NAKED register_t __cdecl internal_6324d10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397013 @0x6324d12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397013
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        call public_6320a30
        xor ebp, ebp
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xB0], ebp
        call public_6320a30
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x98]
        call public_6315b10
        lea edi, ds:[esi+4]
        push edi
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0xB4], 2
        mov dword ptr ss : [esp+0xA8], ebp
        mov dword ptr ss : [esp+0x28], ebp
        call public_631fad0
        mov ebx, dword ptr ss : [esp+0xBC]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], eax
        lea esi, ds:[ebx+4]
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0xB4], 3
        call public_631fad0
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ds : [ebx], ecx
        push edx
        mov ecx, esi
        call public_631fad0
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0xA4]
        cmp eax, ebp
        mov dword ptr ss : [esp+0xB0], 4
        je public_6324df2
        public_6324de1 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_6324de1
        public_6324df2 : nop
        mov ecx, dword ptr ss : [esp+0x98]
        push ecx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x98], ebp
        mov dword ptr ss : [esp+0x9C], ebp
        mov dword ptr ss : [esp+0xA0], ebp
        call public_630e210
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x6324d10)
    }
}

#undef public_6324de1
#undef public_6324df2
