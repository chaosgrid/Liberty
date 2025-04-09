#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_44f410);

#define public_44f430 _public_44f430
#define public_44f458 _public_44f458
#define public_44f4d5 _public_44f4d5
#define public_44f4dd _public_44f4dd
#define public_44f4ed _public_44f4ed

PROC_DECLARE(0x44f410, internal_44f410, public_44f410);
extern "C" NAKED register_t __cdecl internal_44f410()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ds : [ecx+0xAC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+8], ecx
        je public_44f4ed
        push ebx
        push edi
        xor ebx, ebx
        lea esp, ss:[esp]
        public_44f430 : nop
        cmp byte ptr ds : [esi+0x24], bl
        jne public_44f4dd
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_44f4d5
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        test al, al
        mov ecx, edi
        jne public_44f458
        mov edx, dword ptr ds : [edi]
        call dword ptr ds : [edx+0xC]
        jmp public_44f4d5
        public_44f458 : nop
        mov al, byte ptr ss : [esp+0x18]
        and al, 0xF8
        mov byte ptr ss : [esp+0x18], al
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [eax+0x24]
        mov cl, byte ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [esi+0x19]
        shl al, 2
        xor al, cl
        and al, 4
        xor cl, al
        mov al, byte ptr ds : [esi+0x18]
        shl dl, 1
        xor dl, cl
        and dl, 2
        xor cl, dl
        xor al, cl
        and al, 1
        xor cl, al
        mov byte ptr ss : [esp+0x18], cl
        push 1
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call public_428680
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        mov dword ptr ds : [esi+0x20], eax
        public_44f4d5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x24], 1
        public_44f4dd : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xAC]
        jne public_44f430
        pop edi
        pop ebx
        public_44f4ed : nop
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x44f410)
    }
}

#undef public_44f430
#undef public_44f458
#undef public_44f4d5
#undef public_44f4dd
#undef public_44f4ed
