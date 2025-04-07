#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620fb70);
CLANG_FORWARD_PROC_SYMBOL(public_62114c0);
CLANG_FORWARD_PROC_SYMBOL(public_6211600);
CLANG_FORWARD_PROC_SYMBOL(public_6244b80);
CLANG_FORWARD_PROC_SYMBOL(public_6244df0);
CLANG_FORWARD_PROC_SYMBOL(public_6244ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_620fbba _public_620fbba
#define public_620fbee _public_620fbee
#define public_620fc65 _public_620fc65
#define public_620fc76 _public_620fc76

PROC_DECLARE(0x620fb70, internal_620fb70, public_620fb70);
extern "C" NAKED register_t __cdecl internal_620fb70()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        xor eax, eax
        mov word ptr ds : [public_6257986], ax
        mov word ptr ds : [public_6257988], ax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ebx, 1
        fstp dword ptr ds : [esi+0x11C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x84]
        cmp dword ptr ds : [esi+0xB0], eax
        fstp dword ptr ds : [esi+0x84]
        jne public_620fbba
        cmp dword ptr ds : [esi+0xD8], eax
        jne public_620fbba
        or dword ptr ds : [esi+4], ebx
        public_620fbba : nop
        mov eax, dword ptr ds : [esi+0xE8]
        lea ecx, ss:[esp+0xC]
        lea edi, ds:[esi+0xB4]
        push ecx
        mov eax, dword ptr ds : [eax+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], offset public_6255804
        mov dword ptr ss : [esp+0x14], eax
        call public_6244b80
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        jne public_620fbee
        mov ecx, edi
        call public_6244df0
        public_620fbee : nop
        mov eax, dword ptr ds : [esi+0xE8]
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 8
        cmp dl, 8
        jne public_620fc65
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax+0x80]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [edi+0x1C]
        fstp dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_620fc76
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, 0xFFFFFFFF
        je public_620fc76
        add edi, 8
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [public_6257bbc]
        push edi
        fmul dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x20], ecx
        call public_6246188
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        call dword ptr ds : [eax+0x70]
        pop ebp
        jmp public_620fc76
        public_620fc65 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        je public_620fc76
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        push eax
        call public_6244ef0
        public_620fc76 : nop
        mov edx, dword ptr ds : [esi+0x18]
        lea ecx, ds:[esi+0x98]
        lea edi, ds:[esi+0xD8]
        push ecx
        push edi
        push edx
        call public_62114c0
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push edi
        call public_6211600
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x620fb70)
    }
}

#undef public_620fbba
#undef public_620fbee
#undef public_620fc65
#undef public_620fc76
