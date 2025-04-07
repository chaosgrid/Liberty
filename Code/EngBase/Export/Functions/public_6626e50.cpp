#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6626e50);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6626e91 _public_6626e91
#define public_6626ea6 _public_6626ea6
#define public_6626ef2 _public_6626ef2
#define public_6626efa _public_6626efa
#define public_6626f0d _public_6626f0d

PROC_DECLARE(0x6626e50, internal_6626e50, public_6626e50);
extern "C" NAKED register_t __cdecl internal_6626e50()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        push 0x58
        mov al, byte ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi], al
        call public_66281dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0x10], ecx
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edi
        cmp ebp, ecx
        je public_6626f0d
        push ebx
        public_6626e91 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x58
        call public_66281dc
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebx, ebx
        jne public_6626ea6
        mov ebx, eax
        public_6626ea6 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        test ebx, ebx
        mov dword ptr ds : [ecx], eax
        je public_6626efa
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+8]
        mov ecx, 0x12
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], 0
        rep movsd
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6626ef2
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_6626ef2 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6626efa : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6626e91
        pop ebx
        public_6626f0d : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6626e50)
    }
}

#undef public_6626e91
#undef public_6626ea6
#undef public_6626ef2
#undef public_6626efa
#undef public_6626f0d
