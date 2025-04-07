#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30430);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae7c1);

#define public_6f304b8 _public_6f304b8
#define public_6f304c3 _public_6f304c3
#define public_6f304c9 _public_6f304c9
#define public_6f304f1 _public_6f304f1
#define public_6f30509 _public_6f30509
#define public_6f30598 _public_6f30598

PROC_DECLARE(0x6f30430, internal_6f30430, public_6f30430);
extern "C" NAKED register_t __cdecl internal_6f30430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae7c1 @0x6f30432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae7c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], 0
        je public_6f30598
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ss : [ebp+0x10]
        push edi
        mov dword ptr ds : [ebx+0x10], eax
        lea esi, ss:[ebp+0x14]
        lea edi, ds:[ebx+0x14]
        mov ecx, 0x30
        rep movsd
        lea esi, ss:[ebp+0xD4]
        lea edi, ds:[ebx+0xD4]
        mov ecx, 0xD
        rep movsd
        mov cl, byte ptr ss : [ebp+0x108]
        mov byte ptr ds : [ebx+0x108], cl
        mov ecx, dword ptr ss : [ebp+0x10C]
        test ecx, ecx
        jne public_6f304b8
        xor eax, eax
        jmp public_6f304c3
        public_6f304b8 : nop
        mov eax, dword ptr ss : [ebp+0x110]
        sub eax, ecx
        sar eax, 4
        public_6f304c3 : nop
        test eax, eax
        jge public_6f304c9
        xor eax, eax
        public_6f304c9 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+0x10C], eax
        mov ecx, dword ptr ss : [ebp+0x110]
        mov esi, dword ptr ss : [ebp+0x10C]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov edi, eax
        je public_6f30509
        public_6f304f1 : nop
        push esi
        push edi
        call public_6f6a670
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, eax
        jne public_6f304f1
        public_6f30509 : nop
        mov dword ptr ds : [ebx+0x110], edi
        mov dword ptr ds : [ebx+0x114], edi
        mov dword ptr ds : [ebx], offset public_6fb464c
        lea esi, ss:[ebp+0x11C]
        lea edi, ds:[ebx+0x11C]
        mov ecx, 0x11
        rep movsd
        mov edx, dword ptr ds : [public_6fb3064]
        mov dword ptr ds : [ebx+0x118], edx
        mov dword ptr ds : [ebx+0x160], offset public_6fb61e8
        mov al, byte ptr ss : [ebp+0x164]
        mov byte ptr ds : [ebx+0x164], al
        mov ecx, dword ptr ss : [ebp+0x168]
        mov dword ptr ds : [ebx+0x168], ecx
        lea esi, ss:[ebp+0x16C]
        lea edi, ds:[ebx+0x16C]
        mov ecx, 0xF6
        rep movsd
        mov dl, byte ptr ss : [ebp+0x544]
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x544], dl
        mov dword ptr ds : [ebx], offset public_6fb61e0
        mov dword ptr ds : [ebx+0x118], offset public_6fb61d4
        mov dword ptr ds : [ebx+0x160], offset public_6fb61ac
        pop ebp
        public_6f30598 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f30430)
    }
}

#undef public_6f304b8
#undef public_6f304c3
#undef public_6f304c9
#undef public_6f304f1
#undef public_6f30509
#undef public_6f30598
