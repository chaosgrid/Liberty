#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);

#define public_6cf85d9 _public_6cf85d9

PROC_DECLARE(0x6cf84a0, internal_6cf84a0, public_6cf84a0);
extern "C" NAKED register_t __cdecl internal_6cf84a0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [ebp]
        push eax
        call public_6d00280
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x7C], eax
        je public_6cf85d9
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x78], 1
        mov byte ptr ss : [esp+0x79], bl
        call dword ptr ds : [public_6d642ec]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, edx
        and ecx, 0x3FFFFFFF
        inc edx
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_6d642fc]
        mov edx, dword ptr ss : [ebp+0x58]
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        fld dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [ebp+8]
        fmul dword ptr ss : [ebp+0x5C]
        mov dword ptr ss : [esp+0x2C], eax
        lea ecx, ss:[ebp+0x10]
        mov edx, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        lea edx, ss:[ebp+0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x44], edx
        lea esi, ss:[ebp+0x28]
        mov ecx, 9
        lea edi, ss:[esp+0x48]
        rep movsd
        lea eax, ss:[ebp+0x4C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x6C], ecx
        mov cl, byte ptr ss : [ebp+0x60]
        mov byte ptr ss : [esp+0x78], cl
        push 1
        mov dword ptr ss : [esp+0x74], edx
        mov dl, byte ptr ss : [ebp+0x61]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        mov byte ptr ss : [esp+0x81], dl
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ss : [ebp+0x64]
        push 4
        push edx
        mov dword ptr ss : [esp+0x38], eax
        call public_6d08a40
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 
        public_6cf85d9 : nop
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6cf84a0)
    }
}

#undef public_6cf85d9
