#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a17f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1db0);
CLANG_FORWARD_PROC_SYMBOL(public_62a2250);

#define public_62a1835 _public_62a1835
#define public_62a183d _public_62a183d
#define public_62a1878 _public_62a1878

PROC_DECLARE(0x62a17f0, internal_62a17f0, public_62a17f0);
extern "C" NAKED register_t __cdecl internal_62a17f0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [eax+4]
        lea esi, ds:[ecx+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edx
        call public_62a2250
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_62a1835
        mov dx, word ptr ss : [esp+0x20]
        cmp dx, word ptr ds : [eax+0xC]
        jb public_62a1835
        lea eax, ss:[esp+0xC]
        jmp public_62a183d
        public_62a1835 : nop
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ss:[esp+0x20]
        public_62a183d : nop
        cmp dword ptr ds : [eax], ebx
        jne public_62a1878
        mov eax, dword ptr ds : [edi+4]
        mov cx, word ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x18]
        mov word ptr ss : [esp+0x10], cx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        call public_62a1db0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x10], edi
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_62a1878 : nop
        mov edx, dword ptr ds : [edi+4]
        movzx ecx, word ptr ds : [edx+4]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0xCE
/*FIXUP push offset public_639d9e0 @0x62a188b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d9e0
        mov eax, 0x100002
/*FIXUP push offset public_639da50 @0x62a1895*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639da50
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62a17f0)
    }
}

#undef public_62a1835
#undef public_62a183d
#undef public_62a1878
