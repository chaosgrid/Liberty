#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdd3c6 _public_6bdd3c6
#define public_6bdd402 _public_6bdd402
#define public_6bdd416 _public_6bdd416
#define public_6bdd41d _public_6bdd41d
#define public_6bdd42b _public_6bdd42b

PROC_DECLARE(0x6bdd3b0, internal_6bdd3b0, public_6bdd3b0);
extern "C" NAKED register_t __cdecl internal_6bdd3b0()
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
        je public_6bdd42b
        push ebp
        push esi
        push edi
        public_6bdd3c6 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6bdd41d
        push 8
        call public_6c09d26
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
        call public_6c09d26
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6bdd402
        mov ebp, eax
        public_6bdd402 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bdd416
        mov dword ptr ds : [eax], edi
        public_6bdd416 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x30]
        public_6bdd41d : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6bdd3c6
        pop edi
        pop esi
        pop ebp
        public_6bdd42b : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bdd3b0)
    }
}

#undef public_6bdd3c6
#undef public_6bdd402
#undef public_6bdd416
#undef public_6bdd41d
#undef public_6bdd42b
