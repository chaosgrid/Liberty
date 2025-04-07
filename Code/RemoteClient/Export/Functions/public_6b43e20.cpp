#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b43e32 _public_6b43e32
#define public_6b43e6e _public_6b43e6e
#define public_6b43e82 _public_6b43e82
#define public_6b43e8d _public_6b43e8d
#define public_6b43e97 _public_6b43e97

PROC_DECLARE(0x6b43e20, internal_6b43e20, public_6b43e20);
extern "C" NAKED register_t __cdecl internal_6b43e20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x2C]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6b43e97
        push ebp
        push esi
        push edi
        public_6b43e32 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6b43e8d
        push 8
        call public_6b6a134
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6b43e6e
        mov ebp, eax
        public_6b43e6e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b43e82
        mov dword ptr ds : [eax], edi
        public_6b43e82 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6b43e8d : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0x2C]
        jne public_6b43e32
        pop edi
        pop esi
        pop ebp
        public_6b43e97 : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b43e20)
    }
}

#undef public_6b43e32
#undef public_6b43e6e
#undef public_6b43e82
#undef public_6b43e8d
#undef public_6b43e97
