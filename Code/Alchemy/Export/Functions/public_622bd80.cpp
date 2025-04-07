#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622bd80);
CLANG_FORWARD_PROC_SYMBOL(public_622d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);
CLANG_FORWARD_JUMP_SYMBOL(public_62494f0);

#define public_622bde0 _public_622bde0
#define public_622be73 _public_622be73
#define public_622be75 _public_622be75
#define public_622be92 _public_622be92
#define public_622be9f _public_622be9f

PROC_DECLARE(0x622bd80, internal_622bd80, public_622bd80);
extern "C" NAKED register_t __cdecl internal_622bd80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62494f0 @0x622bd88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62494f0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6257aac]
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        test eax, eax
        push ebx
        push esi
        push edi
        jne public_622bde0
        mov eax, dword ptr ds : [public_6257ab0]
        mov ecx, dword ptr ds : [public_6257aa0]
        sub eax, ecx
        mov edi, dword ptr ds : [public_6257a9c]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257aa4]
        mov ecx, dword ptr ds : [eax+edi+8]
        add eax, edi
        push ecx
        add ecx, 0xD8
        mov edx, esp
        mov dword ptr ss : [esp+0x10], esp
        mov dword ptr ds : [edx], eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_622d1a0
        public_622bde0 : nop
        mov dword ptr ss : [esp+0x30], 0
        mov ebx, dword ptr ss : [esp+0x98]
        mov ecx, 0xC
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x58]
        rep movsd
        mov esi, dword ptr ss : [esp+0x9C]
        mov ecx, 6
        lea edi, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x90], 0
        rep movsd
        mov ecx, dword ptr ds : [ebx+0xE0]
        mov byte ptr ss : [esp+0x90], 1
        call public_623ec90
        test eax, eax
        je public_622be73
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA4]
        lea edi, ds:[eax+0xC]
        mov ecx, 6
        lea esi, ss:[esp+0x10]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [eax+8], ebx
        test ebx, ebx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], edx
        fstp dword ptr ds : [eax+0x2C]
        je public_622be75
        inc dword ptr ds : [ebx+0xE4]
        jmp public_622be75
        public_622be73 : nop
        xor eax, eax
        public_622be75 : nop
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [ebx+0xDC]
        test ecx, ecx
        je public_622be92
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [ebx+0xDC]
        mov dword ptr ds : [eax+4], ecx
        jmp public_622be9f
        public_622be92 : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ebx+0xD8], eax
        public_622be9f : nop
        mov ecx, dword ptr ss : [esp+0x88]
        pop edi
        mov dword ptr ds : [ebx+0xDC], eax
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x88
        ret 0x10
        UNREACHABLE_TRAP(0x622bd80)
    }
}

#undef public_622bde0
#undef public_622be73
#undef public_622be75
#undef public_622be92
#undef public_622be9f
