#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead830);
CLANG_FORWARD_PROC_SYMBOL(public_6eb10d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb14f0);

#define public_6ead850 _public_6ead850
#define public_6ead863 _public_6ead863
#define public_6ead866 _public_6ead866
#define public_6ead86a _public_6ead86a
#define public_6ead8a3 _public_6ead8a3
#define public_6ead8b0 _public_6ead8b0
#define public_6ead8b8 _public_6ead8b8
#define public_6ead8dc _public_6ead8dc

PROC_DECLARE(0x6ead830, internal_6ead830, public_6ead830);
extern "C" NAKED register_t __cdecl internal_6ead830()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_6ead86a
        lea esp, ss:[esp]
        public_6ead850 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_6ead863
        mov esi, dword ptr ds : [esi]
        jmp public_6ead866
        public_6ead863 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ead866 : nop
        cmp esi, ecx
        jne public_6ead850
        public_6ead86a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6ead8b8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6ead8b0
        cmp edi, dword ptr ds : [edx]
        jne public_6ead8a3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6eb10d0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6ead8a3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6eb14f0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6ead8b0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_6ead8dc
        public_6ead8b8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6eb10d0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6ead8dc : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ead830)
    }
}

#undef public_6ead850
#undef public_6ead863
#undef public_6ead866
#undef public_6ead86a
#undef public_6ead8a3
#undef public_6ead8b0
#undef public_6ead8b8
#undef public_6ead8dc
