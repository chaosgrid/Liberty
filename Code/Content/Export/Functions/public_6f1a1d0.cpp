#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadc4b);

#define public_6f1a26a _public_6f1a26a

PROC_DECLARE(0x6f1a1d0, internal_6f1a1d0, public_6f1a1d0);
extern "C" NAKED register_t __cdecl internal_6f1a1d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadc4b @0x6f1a1d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadc4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push 0x80
        mov ebp, ecx
        call public_6fa912a
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+8], ebx
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f1a26a
        mov al, byte ptr ss : [ebp+4]
        mov byte ptr ds : [ebx+4], al
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        push esi
        push edi
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, dword ptr ss : [ebp+0x1C]
        lea ecx, ss:[ebp+0x20]
        push ecx
        lea ecx, ds:[ebx+0x20]
        mov dword ptr ds : [ebx+0x1C], eax
        call dword ptr ds : [public_6fb3084]
        mov dword ptr ds : [ebx], offset public_6fb8ccc
        lea esi, ss:[ebp+0x38]
        lea edi, ds:[ebx+0x38]
        mov ecx, 0xD
        rep movsd
        lea esi, ss:[ebp+0x6C]
        lea edi, ds:[ebx+0x6C]
        mov ecx, 5
        rep movsd
        pop edi
        mov dword ptr ds : [ebx], offset public_6fb8cb0
        mov eax, ebx
        pop esi
        public_6f1a26a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f1a1d0)
    }
}

#undef public_6f1a26a
