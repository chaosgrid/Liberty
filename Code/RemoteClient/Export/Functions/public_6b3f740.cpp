#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3f752 _public_6b3f752
#define public_6b3f78e _public_6b3f78e
#define public_6b3f7a2 _public_6b3f7a2
#define public_6b3f7ad _public_6b3f7ad
#define public_6b3f7b7 _public_6b3f7b7

PROC_DECLARE(0x6b3f740, internal_6b3f740, public_6b3f740);
extern "C" NAKED register_t __cdecl internal_6b3f740()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x4C]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6b3f7b7
        push ebp
        push esi
        push edi
        public_6b3f752 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6b3f7ad
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
        jne public_6b3f78e
        mov ebp, eax
        public_6b3f78e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b3f7a2
        mov dword ptr ds : [eax], edi
        public_6b3f7a2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6b3f7ad : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0x4C]
        jne public_6b3f752
        pop edi
        pop esi
        pop ebp
        public_6b3f7b7 : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b3f740)
    }
}

#undef public_6b3f752
#undef public_6b3f78e
#undef public_6b3f7a2
#undef public_6b3f7ad
#undef public_6b3f7b7
