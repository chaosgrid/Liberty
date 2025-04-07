#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1fb0);
CLANG_FORWARD_PROC_SYMBOL(public_62f2180);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_63345a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6395694);

PROC_DECLARE(0x62f1fb0, internal_62f1fb0, public_62f1fb0);
extern "C" NAKED register_t __cdecl internal_62f1fb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395694 @0x62f1fb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395694
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_62efff0
        xor ebx, ebx
        lea ecx, ds:[esi+0x60]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        call public_63345a0
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x64], cl
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        lea ecx, ds:[esi+0x74]
        mov byte ptr ss : [esp+0x18], 1
        call public_62f2180
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[esi+0x84]
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0x80], bl
        mov byte ptr ds : [esi+0x81], 1
        call public_6315b10
        mov dword ptr ds : [esi], offset public_63a11d4
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x9C], bl
        lea ecx, ds:[esi+0xDC]
        mov dword ptr ss : [esp+0x18], 3
        mov dword ptr ds : [esi+0x94], offset public_63993e8
        call public_6333e30
        lea ecx, ds:[esi+0xE0]
        call public_6333e30
        lea ecx, ds:[esi+0xE4]
        call public_6333e30
        lea edi, ds:[esi+0xE8]
        mov ecx, edi
        call public_6333e30
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xFC], 9
        mov dword ptr ds : [esi+0x100], ebx
        mov eax, dword ptr ds : [public_63a08a0]
        mov dword ptr ds : [esi+0x104], eax
        fld dword ptr ds : [public_63a08a4]
        fld dword ptr ds : [public_63a08a4]
        mov cl, byte ptr ss : [esp+0x20]
        fld dword ptr ds : [public_63a08a4]
        fstp dword ptr ds : [esi+0x108]
        fstp dword ptr ds : [esi+0x10C]
        fstp dword ptr ds : [esi+0x110]
        fld dword ptr ds : [public_63a08a8]
        fld dword ptr ds : [public_63a08a8]
        fld dword ptr ds : [public_63a08a8]
        fstp dword ptr ds : [esi+0x114]
        fstp dword ptr ds : [esi+0x118]
        fstp dword ptr ds : [esi+0x11C]
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x124], ebx
        mov dword ptr ds : [esi+0x128], ebx
        mov dword ptr ds : [esi+0x12C], ebx
        mov byte ptr ds : [esi+0x130], cl
        mov dword ptr ds : [esi+0x134], ebx
        mov dword ptr ds : [esi+0x138], ebx
        mov dword ptr ds : [esi+0x13C], ebx
        or eax, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x18], 4
        mov dword ptr ds : [esi+0x140], eax
        push ebx
/*FIXUP push offset public_63a15a0 @0x62f2139*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15a0
        mov dword ptr ds : [esi+0x144], eax
        mov dword ptr ds : [esi], offset public_6399838
        mov dword ptr ds : [esi+0x94], offset public_6399828
        call public_6333ca0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        mov dword ptr ds : [edi], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f1fb0)
    }
}
