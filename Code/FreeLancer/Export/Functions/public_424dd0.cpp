#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4249c0);
CLANG_FORWARD_PROC_SYMBOL(public_424dd0);

#define public_424e2e _public_424e2e
#define public_424ea6 _public_424ea6
#define public_424ef0 _public_424ef0
#define public_424f24 _public_424f24

PROC_DECLARE(0x424dd0, internal_424dd0, public_424dd0);
extern "C" NAKED register_t __cdecl internal_424dd0()
{
    __asm
    {
        sub esp, 0x4C
        push ebp
        mov eax, 1
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x50], al
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x50], 2
        mov dword ptr ss : [esp+0x34], 0x3C
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        jbe public_424e2e
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jbe public_424e2e
        mov ecx, 0xA
        lea edi, ss:[esp+0x30]
        rep movsd
        mov esi, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ss : [esp+0x38]
        jmp public_424ea6
        public_424e2e : nop
        mov al, byte ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x64], 0
        mov byte ptr ss : [esp+0x55], al
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x64]
        push ecx
        push 3
        push eax
        mov edi, 0x320
        mov ebp, 0x258
        mov esi, 0x10
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x64]
        shr eax, 0x14
        cmp eax, 0x11
        mov dword ptr ss : [esp+0x64], eax
        jb public_424ea6
        mov edx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x60], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x60]
        push edx
        push 4
        push eax
        mov esi, 0x20
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x60]
        test eax, eax
        je public_424ea6
        mov edi, 0x400
        mov ebp, 0x300
        public_424ea6 : nop
        mov eax, 0x320
        mov ecx, 0x258
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebp, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], 0x10
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        xor edi, edi
        lea esi, ss:[esp+0x10]
        lea ebx, ds:[ebx]
        public_424ef0 : nop
        mov eax, dword ptr ds : [esi-4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x38], eax
/*FIXUP push offset public_679bc0 @0x424efc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
        lea eax, ss:[esp+0x34]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        call public_4249c0
        add esp, 0xC
        test al, al
        jne public_424f24
        inc edi
        add esi, 0xC
        cmp edi, 3
        jb public_424ef0
        public_424f24 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x424dd0)
    }
}

#undef public_424e2e
#undef public_424ea6
#undef public_424ef0
#undef public_424f24
