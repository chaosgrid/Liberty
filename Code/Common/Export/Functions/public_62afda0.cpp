#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_62afda0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_639438b);

#define public_62afe07 _public_62afe07
#define public_62afe82 _public_62afe82

PROC_DECLARE(0x62afda0, internal_62afda0, public_62afda0);
extern "C" NAKED register_t __cdecl internal_62afda0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639438b @0x62afda2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639438b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ds : [esi+4], ebx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_639bf6c
        lea edi, ds:[esi+8]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6285b50
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ds : [esi+0x18], offset public_639e5b4
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 2
        je public_62afe07
        add eax, 8
        cmp eax, ebx
        je public_62afe07
        push eax
        call public_6341610
        public_62afe07 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ecx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov byte ptr ds : [esi+0x4C], bl
        mov byte ptr ds : [esi+0x4D], bl
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi], offset public_639e5a4
        mov dword ptr ds : [edi], offset public_639e584
        mov dword ptr ds : [esi+0x18], offset public_639e57c
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0xE0]
        mov dword ptr ds : [esi+0x28], eax
        test al, 0x20
        mov eax, esi
        je public_62afe82
        mov dword ptr ds : [esi+0x2C], 1
        public_62afe82 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x62afda0)
    }
}

#undef public_62afe07
#undef public_62afe82
