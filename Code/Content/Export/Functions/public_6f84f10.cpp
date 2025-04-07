#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fb0a1a);

#define public_6f84f43 _public_6f84f43
#define public_6f84fd9 _public_6f84fd9
#define public_6f84fed _public_6f84fed
#define public_6f84fff _public_6f84fff

PROC_DECLARE(0x6f84f10, internal_6f84f10, public_6f84f10);
extern "C" NAKED register_t __cdecl internal_6f84f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0a1a @0x6f84f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0a1a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebp
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+8], ebp
        je public_6f84fff
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        push esi
        public_6f84f43 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea esi, ss:[ebp+8]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [esp+0x44]
        jne public_6f84fed
        mov eax, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [edi]
        push eax
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [public_6fd3b74]
        push ecx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb3118]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x14], offset public_6fbc6d0
        mov ebp, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x3C], 1
        call dword ptr ds : [public_6fb3130]
        push eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        push ecx
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, edi
        call dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x14], offset public_6fbc6d0
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        mov dword ptr ss : [esp+0x3C], 2
        je public_6f84fd9
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6f84fd9 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], offset public_6fb7730
        public_6f84fed : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6f84f43
        pop esi
        pop ebx
        public_6f84fff : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x6f84f10)
    }
}

#undef public_6f84f43
#undef public_6f84fd9
#undef public_6f84fed
#undef public_6f84fff
