#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b43da0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b43db6 _public_6b43db6
#define public_6b43df2 _public_6b43df2
#define public_6b43e06 _public_6b43e06
#define public_6b43e0d _public_6b43e0d
#define public_6b43e1b _public_6b43e1b

PROC_DECLARE(0x6b43da0, internal_6b43da0, public_6b43da0);
extern "C" NAKED register_t __cdecl internal_6b43da0()
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
        je public_6b43e1b
        push ebp
        push esi
        push edi
        public_6b43db6 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6b43e0d
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
        mov esi, dword ptr ds : [edx+0x2C]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6b43df2
        mov ebp, eax
        public_6b43df2 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b43e06
        mov dword ptr ds : [eax], edi
        public_6b43e06 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x30]
        public_6b43e0d : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6b43db6
        pop edi
        pop esi
        pop ebp
        public_6b43e1b : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b43da0)
    }
}

#undef public_6b43db6
#undef public_6b43df2
#undef public_6b43e06
#undef public_6b43e0d
#undef public_6b43e1b
