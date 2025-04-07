#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb590);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eecf80);
CLANG_FORWARD_PROC_SYMBOL(public_6eee780);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eeb5bd _public_6eeb5bd
#define public_6eeb5e0 _public_6eeb5e0
#define public_6eeb5f4 _public_6eeb5f4
#define public_6eeb62e _public_6eeb62e
#define public_6eeb670 _public_6eeb670
#define public_6eeb680 _public_6eeb680
#define public_6eeb6e0 _public_6eeb6e0
#define public_6eeb6fa _public_6eeb6fa
#define public_6eeb6ff _public_6eeb6ff
#define public_6eeb71d _public_6eeb71d

PROC_DECLARE(0x6eeb590, internal_6eeb590, public_6eeb590);
extern "C" NAKED register_t __cdecl internal_6eeb590()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push ebp
        push esi
        push edi
        je public_6eeb5bd
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 3
        jae public_6eeb62e
        public_6eeb5bd : nop
        push 0xCC
        call public_6fa912a
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x60], eax
        mov edi, eax
        je public_6eeb5f4
        lea ebx, ds:[ebx]
        public_6eeb5e0 : nop
        push esi
        push edi
        call public_6eee780
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6eeb5e0
        public_6eeb5f4 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_6ea1490
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x64]
        lea ecx, ds:[esi+0xCC]
        mov dword ptr ds : [ebx+0xC], ecx
        add esp, 4
        mov ecx, ebx
        call public_6f2fb70
        imul eax, 0x44
        add eax, esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], esi
        public_6eeb62e : nop
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        jne public_6eeb670
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x18], eax
        mov byte ptr ss : [esp+0x1C], al
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fb63a4 @0x6eeb648*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63a4
        push eax
        call public_6eec2b0
        mov edx, dword ptr ds : [ebx+8]
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        call public_6eecf80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        public_6eeb670 : nop
        test eax, eax
        mov byte ptr ss : [esp+0x60], 1
        jle public_6eeb71d
        lea ecx, ds:[ecx]
        public_6eeb680 : nop
        cdq 
        mov ecx, 0xA
        idiv ecx
        mov dword ptr ss : [esp+0x10], 0
        mov byte ptr ss : [esp+0x14], 0
        push edx
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb7510 @0x6eeb69a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7510
        push edx
        mov dword ptr ss : [esp+0x64], eax
        call public_6eec2b0
        mov al, byte ptr ss : [esp+0x6C]
        add esp, 0xC
        test al, al
        je public_6eeb6ff
        mov esi, dword ptr ss : [esp+0x5C]
        test esi, esi
        je public_6eeb6fa
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, 0x40
        sub edx, eax
        or ecx, 0xFFFFFFFF
        lea ebp, ss:[esp+eax+0x14]
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, edx
        jb public_6eeb6e0
        lea eax, ds:[edx-1]
        public_6eeb6e0 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        add dword ptr ss : [esp+0x10], eax
        public_6eeb6fa : nop
        mov byte ptr ss : [esp+0x60], 0
        public_6eeb6ff : nop
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebx
        call public_6eecf80
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        jg public_6eeb680
        public_6eeb71d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6eeb590)
    }
}

#undef public_6eeb5bd
#undef public_6eeb5e0
#undef public_6eeb5f4
#undef public_6eeb62e
#undef public_6eeb670
#undef public_6eeb680
#undef public_6eeb6e0
#undef public_6eeb6fa
#undef public_6eeb6ff
#undef public_6eeb71d
