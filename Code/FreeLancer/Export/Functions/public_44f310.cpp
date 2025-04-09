#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f270);
CLANG_FORWARD_PROC_SYMBOL(public_44f310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_44f342 _public_44f342
#define public_44f3b7 _public_44f3b7
#define public_44f3d6 _public_44f3d6
#define public_44f3e7 _public_44f3e7
#define public_44f3fe _public_44f3fe

PROC_DECLARE(0x44f310, internal_44f310, public_44f310);
extern "C" NAKED register_t __cdecl internal_44f310()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+8], esi
        je public_44f3fe
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x38]
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], ecx
        jle public_44f3fe
        push ebp
        push edi
        public_44f342 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+0x14]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        call public_44f270
        test al, al
        je public_44f3e7
        mov edx, dword ptr ss : [ebp+0x14]
        mov ebp, dword ptr ss : [esp+0x10]
        mov ecx, 5
        lea esi, ss:[esp+0x1C]
        lea edi, ss:[esp+0x30]
        rep movsd
        mov esi, dword ptr ss : [ebp+0xAC]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], bl
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_44f3b7
        mov edi, eax
        public_44f3b7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        cmp eax, ebx
        je public_44f3d6
        mov ecx, 8
        lea esi, ss:[esp+0x30]
        mov edi, eax
        rep movsd
        public_44f3d6 : nop
        mov eax, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [ebp+0xB0], eax
        public_44f3e7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        jl public_44f342
        pop edi
        pop ebp
        public_44f3fe : nop
        pop esi
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x44f310)
    }
}

#undef public_44f342
#undef public_44f3b7
#undef public_44f3d6
#undef public_44f3e7
#undef public_44f3fe
