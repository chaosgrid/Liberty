#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3f6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3f6d6 _public_6b3f6d6
#define public_6b3f712 _public_6b3f712
#define public_6b3f726 _public_6b3f726
#define public_6b3f72d _public_6b3f72d
#define public_6b3f73b _public_6b3f73b

PROC_DECLARE(0x6b3f6c0, internal_6b3f6c0, public_6b3f6c0);
extern "C" NAKED register_t __cdecl internal_6b3f6c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6b3f73b
        push ebp
        push esi
        push edi
        public_6b3f6d6 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6b3f72d
        push 8
        call public_6b6a134
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov edi, eax
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], ecx
        mov esi, dword ptr ds : [edx+0x4C]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6b3f712
        mov ebp, eax
        public_6b3f712 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b3f726
        mov dword ptr ds : [eax], edi
        public_6b3f726 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x50]
        public_6b3f72d : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6b3f6d6
        pop edi
        pop esi
        pop ebp
        public_6b3f73b : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b3f6c0)
    }
}

#undef public_6b3f6d6
#undef public_6b3f712
#undef public_6b3f726
#undef public_6b3f72d
#undef public_6b3f73b
