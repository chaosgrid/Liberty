#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6368970);

#define public_6368990 _public_6368990
#define public_63689a3 _public_63689a3
#define public_63689ef _public_63689ef
#define public_6368a10 _public_6368a10
#define public_6368a1c _public_6368a1c

PROC_DECLARE(0x6368970, internal_6368970, public_6368970);
extern "C" NAKED register_t __cdecl internal_6368970()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [ebp+0x20]
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+8], eax
        je public_6368a1c
        push ebx
        push edi
        public_6368990 : nop
        movsx ecx, word ptr ss : [ebp+0x40]
        cmp eax, ecx
        mov edi, dword ptr ds : [esi+0x40]
        jge public_63689a3
        mov word ptr ds : [edi+0x50], 0xFFFF
        jmp public_6368a10
        public_63689a3 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [edx+0x98]
        inc eax
        push ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_6347c40
        mov dword ptr ds : [edi+0x58], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x98]
        push ebp
        call public_6347c40
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x5C], eax
        fld dword ptr ds : [esi+0x58]
        fstp dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ds : [esi+0x64]
        lea ebx, ds:[edx+0x24]
        mov dword ptr ds : [edi+0x60], ecx
        mov ax, word ptr ds : [ebx+2]
        cmp ax, word ptr ds : [ebx]
        jb public_63689ef
        mov ecx, ebx
        call public_63441a0
        public_63689ef : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+2]
        mov dword ptr ds : [edx+ecx*4], edi
        inc word ptr ds : [ebx+2]
        mov word ptr ds : [edi+0x50], ax
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        public_6368a10 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6368990
        pop edi
        pop ebx
        public_6368a1c : nop
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6368970)
    }
}

#undef public_6368990
#undef public_63689a3
#undef public_63689ef
#undef public_6368a10
#undef public_6368a1c
