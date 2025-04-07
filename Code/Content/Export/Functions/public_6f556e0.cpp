#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f60);
CLANG_FORWARD_PROC_SYMBOL(public_6f53080);
CLANG_FORWARD_PROC_SYMBOL(public_6f556e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf69e);

#define public_6f5586d _public_6f5586d

PROC_DECLARE(0x6f556e0, internal_6f556e0, public_6f556e0);
extern "C" NAKED register_t __cdecl internal_6f556e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf69e @0x6f556e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf69e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_6f5586d
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx]
        push ebp
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+4]
        lea ebp, ds:[eax+4]
        push esi
        push edi
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [ebx+8]
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [ebp+4], eax
        call public_6f55880
        mov edx, dword ptr ds : [ebx+0x1C]
        lea eax, ds:[ebx+0x20]
        push eax
        lea ecx, ss:[ebp+0x1C]
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ss : [ebp+0x18], edx
        call public_6f55880
        mov ecx, dword ptr ds : [ebx+0x30]
        lea edx, ds:[ebx+0x34]
        mov dword ptr ss : [ebp+0x2C], ecx
        push edx
        lea ecx, ss:[ebp+0x30]
        mov byte ptr ss : [esp+0x20], 2
        call public_6f55880
        mov eax, dword ptr ds : [ebx+0x44]
        lea ecx, ds:[ebx+0x48]
        push ecx
        lea ecx, ss:[ebp+0x44]
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ss : [ebp+0x40], eax
        call public_6f55880
        mov edx, dword ptr ds : [ebx+0x58]
        lea eax, ds:[ebx+0x5C]
        push eax
        lea ecx, ss:[ebp+0x58]
        mov byte ptr ss : [esp+0x20], 4
        mov dword ptr ss : [ebp+0x54], edx
        call public_6f55880
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x68], ecx
        mov edx, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x6C], edx
        lea eax, ds:[ebx+0x74]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x70]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea esi, ds:[ebx+0x80]
        lea edi, ss:[ebp+0x7C]
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ds : [ebx+0xA0]
        mov dword ptr ss : [ebp+0x9C], ecx
        mov edx, dword ptr ds : [ebx+0xA4]
        lea eax, ds:[ebx+0xA8]
        lea ecx, ss:[ebp+0xA4]
        push eax
        mov byte ptr ss : [esp+0x20], 5
        mov dword ptr ss : [ebp+0xA0], edx
        call public_6f55880
        lea edx, ds:[ebx+0xB8]
        lea ecx, ss:[ebp+0xB4]
        push edx
        mov byte ptr ss : [esp+0x20], 6
        call public_6f52f60
        lea eax, ds:[ebx+0xC8]
        push eax
        lea ecx, ss:[ebp+0xC4]
        mov byte ptr ss : [esp+0x20], 7
        call public_6f52f60
        lea ecx, ds:[ebx+0xD8]
        push ecx
        lea ecx, ss:[ebp+0xD4]
        mov byte ptr ss : [esp+0x20], 8
        call public_6f53080
        lea edx, ds:[ebx+0xE4]
        push edx
        lea ecx, ss:[ebp+0xE0]
        mov byte ptr ss : [esp+0x20], 9
        call public_6f0deb0
        add ebx, 0xF0
        push ebx
        lea ecx, ss:[ebp+0xEC]
        mov byte ptr ss : [esp+0x20], 0xA
        call public_6f53080
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f5586d : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f556e0)
    }
}

#undef public_6f5586d
