#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6324830);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396f33);

#define public_6324868 _public_6324868
#define public_632488e _public_632488e
#define public_63248b8 _public_63248b8
#define public_63248c9 _public_63248c9

PROC_DECLARE(0x6324830, internal_6324830, public_6324830);
extern "C" NAKED register_t __cdecl internal_6324830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396f33 @0x6324838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396f33
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax-0x90]
        lea esi, ds:[eax-0x90]
        xor edi, edi
        mov ebx, edx
        sub ebx, ecx
        mov dword ptr ss : [esp+0x14], edi
        jns public_632488e
        public_6324868 : nop
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax+4]
        lea eax, ds:[esi+4]
        push eax
        call public_631fad0
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi-0x90]
        mov eax, esi
        sub esi, 0x90
        mov ebx, edx
        sub ebx, ecx
        js public_6324868
        public_632488e : nop
        mov dword ptr ds : [eax], edx
        lea edx, ss:[esp+0x24]
        lea ecx, ds:[eax+4]
        push edx
        call public_631fad0
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0xAC]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], 1
        je public_63248c9
        public_63248b8 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_63248b8
        public_63248c9 : nop
        mov ecx, dword ptr ss : [esp+0xA0]
        push ecx
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0xA0], edi
        mov dword ptr ss : [esp+0xA4], edi
        mov dword ptr ss : [esp+0xA8], edi
        call public_630e210
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6324830)
    }
}

#undef public_6324868
#undef public_632488e
#undef public_63248b8
#undef public_63248c9
