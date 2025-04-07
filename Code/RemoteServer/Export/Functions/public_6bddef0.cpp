#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bddef0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bddf02 _public_6bddf02
#define public_6bddf3e _public_6bddf3e
#define public_6bddf52 _public_6bddf52
#define public_6bddf5d _public_6bddf5d
#define public_6bddf67 _public_6bddf67

PROC_DECLARE(0x6bddef0, internal_6bddef0, public_6bddef0);
extern "C" NAKED register_t __cdecl internal_6bddef0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x4C]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6bddf67
        push ebp
        push esi
        push edi
        public_6bddf02 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6bddf5d
        push 8
        call public_6c09d26
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
        call public_6c09d26
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6bddf3e
        mov ebp, eax
        public_6bddf3e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6bddf52
        mov dword ptr ds : [eax], edi
        public_6bddf52 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6bddf5d : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0x4C]
        jne public_6bddf02
        pop edi
        pop esi
        pop ebp
        public_6bddf67 : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bddef0)
    }
}

#undef public_6bddf02
#undef public_6bddf3e
#undef public_6bddf52
#undef public_6bddf5d
#undef public_6bddf67
