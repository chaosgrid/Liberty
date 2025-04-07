#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38bb1 _public_6b38bb1
#define public_6b38bce _public_6b38bce
#define public_6b38be5 _public_6b38be5
#define public_6b38bf6 _public_6b38bf6

PROC_DECLARE(0x6b38b60, internal_6b38b60, public_6b38b60);
extern "C" NAKED register_t __cdecl internal_6b38b60()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], offset public_6b6bb50
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ds : [ebx+0xC], edx
        mov al, byte ptr ss : [ebp+0x14]
        push edi
        push 0xC
        mov byte ptr ds : [ebx+0x14], al
        call public_6b6a134
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ds : [ebx+0x1C], 0
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b38bf6
        public_6b38bb1 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], ecx
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6b38bce
        mov ecx, eax
        public_6b38bce : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b38be5
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        public_6b38be5 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x1C], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6b38bb1
        public_6b38bf6 : nop
        lea esi, ss:[ebp+0x20]
        lea edi, ds:[ebx+0x20]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], edx
        mov dword ptr ds : [ebx+0x10], offset public_6b6bb60
        mov eax, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], eax
        mov ecx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], ecx
        lea edx, ss:[ebp+0x44]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x44]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        pop edi
        mov dword ptr ds : [ebx+0x5C], edx
        mov al, byte ptr ss : [ebp+0x60]
        pop esi
        mov byte ptr ds : [ebx+0x60], al
        pop ebp
        mov dword ptr ds : [ebx], offset public_6b6bb64
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b38b60)
    }
}

#undef public_6b38bb1
#undef public_6b38bce
#undef public_6b38be5
#undef public_6b38bf6
